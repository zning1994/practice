//很烦的一道模拟题，网上找到了数据发现了小错误终于ac大哭
//下面的步骤看别人的，
//機器手臂有以下幾種合法搬積木的方式（a和b是積木的編號）：
//move a onto b
// 在將a搬到b上之前，先將a和b上的積木放回原來的位置（例如：1就放回1的最開始位罝）
//move a over b
// 在將a搬到b所在的那堆積木之上之前，先將a上的積木放回原來的位罝（b所在的那堆積木不動）
//pile a onto b
// 將a本身和其上的積木一起放到b上，在搬之前b上方的積木放回原位
//pile a over b
// 將a本身和其上的積木一起搬到到b所在的那堆積木之上
//quit
// 動作結束
//前四個動作中若a=b，或者a, b在同一堆積木中，那麼這樣的動作算是不合法的。所有不合法的動作應該被忽略，也就是對各積木均無改變
//
//总结起来其实只有三种操作，
//1.将一个积木上的所有积木放回原位
//2只将一个积木移动到另一个积木上
//3将这个积木及其以上的积木移动到另一个积木上
//三种操作的不同组合可以实现题目要求的四种操作要求。
//一个数组记录每个积木当前的位置方便查找
//用结构体记录当前所有积木的位置关系，个数；
//麻烦在于每次操作都要改变很多变量，
//第二种移动方式可能会出现要移动的积木在中间，还要把他上面的积木下移，这种特殊情况开始没考虑到runtime error 无数次
//还好找到了数据发现了错误
//21
//move 2 onto 1
//move 3 onto 2
//move 4 onto 3
//move 5 over 1
//pile 1 over 10
//move 9 over 8
//move 11 over 8
//pile 3 over 8
//pile 8 over 3
//move 20 over 19
//pile 19 over 18
//pile 18 onto 15
//move 15 over 3
//pile 20 onto 19
//pile 19 onto 18
//pile 18 over 17
//quit
//0: 0
//1:
//2:
//3:
//4:
//5:
//6: 6
//7: 7
//8: 8 9 11 3 4 5 15
//9:
//10: 10 1 2
//11:
//12: 12
//13: 13
//14: 14
//15:
//16: 16
//17: 17 18 19 20
//18:
//19:
//20:
#include <iostream>
#include <string>
using namespace std;

int aStks[25][25];
int aPos[25]; //表示每一块积木的位置，所在栈的编号*所在高度
int aStkLen[25];
int nStkCnt;

struct COMMAND{
    int nCom;
    int nA;
    int nB;
};
bool ParseCommand(const char *pComStr, COMMAND &cmd) {
    int nPos = 0, i, j;
    static char *pCom[] = {"move ", "pile ", "quit", "dump"};
    for (i = 0; i < sizeof(pCom) / sizeof(pCom[0]); ++i) {
        for(j = 0; pComStr[j] == pCom[i][j] && pCom[i][j] != 0; ++j);
        if (pCom[i][j] == 0) break;
    }
    if (i >= sizeof(pCom) / sizeof(pCom[0])) {
        return false;
    }
    cmd.nCom = i * 2;
    if (cmd.nCom >= 4) {
        return true;
    }
    if (pComStr[j] < '1' || pComStr[j] > '9') {
        return false;
    }
    for (cmd.nA = 0; pComStr[j] >= '0' && pComStr[j] <= '9'; ++j) {
        cmd.nA = cmd.nA * 10 + pComStr[j] - '0';
    }
    static char *pDir[2] = {" onto ", " over "};
    for (i = 0, pComStr += j; i < 2; ++i) {
        for(j = 0; pComStr[j] == pDir[i][j] && pDir[i][j] != 0; ++j);
        if (pDir[i][j] == 0) {
            break;
        }
    }
    if (i >= 2) {
        return false;
    }
    cmd.nCom += i;
    if (pComStr[j] < '1' || pComStr[j] > '9') {
        return false;
    }
    for (cmd.nB = 0; pComStr[j] >= '0' && pComStr[j] <= '9'; ++j) {
        cmd.nB = cmd.nB * 10 + pComStr[j] - '0';
    }
    if (pComStr[j] != 0 || cmd.nA == cmd.nB) {
        return false;
    }
    return true;
}

void ReturnUpperBlock(int nBaseBlk) {
    //计算出积木所在的栈和高度。nStk为栈的编号，nHei为栈的高度
    int nStk = aPos[nBaseBlk] / nStkCnt, nHei = aPos[nBaseBlk] % nStkCnt + 1;
    //循环将指定积木以上的所有积木归位
    for (int &nStkLen = aStkLen[nStk]; nStkLen > nHei; --nStkLen) {
        int nUpperBlk = aStks[nStk][nStkLen - 1]; //最顶的积木编号
        aStks[nUpperBlk][0] = nUpperBlk; //将其归原位
        aPos[nUpperBlk] = nUpperBlk * nStkCnt; //重新计算合成该积木位置
        aStkLen[nUpperBlk] = 1; //归位的目标栈的高度置1(只有归位的积木)
    }
}

void Dump(void) {
    for (int i = 0; i < nStkCnt; ++i, cout << endl) {
        cout << i << ':';
        for (int j = 0; j < aStkLen[i]; ++j) {
            cout << ' ' << aStks[i][j];
        }
    }
}
int main(void) {
    COMMAND cmd;
    cin >> nStkCnt;
    for (int i = 0; i < nStkCnt; ++i) {
        aStks[i][0] = i; aPos[i] = i * nStkCnt; aStkLen[i] = 1;
    }
    for (string strLine; getline(cin, strLine);) {
        if (!ParseCommand(strLine.c_str(), cmd)) {
            continue;
        }
        if (cmd.nCom == 4) {
            break; //quit
        }
        if (cmd.nCom == 6) {
            Dump();
            continue;
        }
        int nStkA = aPos[cmd.nA] / nStkCnt, nStkB = aPos[cmd.nB] / nStkCnt;
        if (nStkA == nStkB) {
            continue;
        }
        if (cmd.nCom % 2 == 0) {
            ReturnUpperBlock(cmd.nB); //onto
        }
        if (cmd.nCom / 2 == 0) {
            ReturnUpperBlock(cmd.nA); //move
        }
        int nHeiA = aPos[cmd.nA] % nStkCnt;
        int nStkLenA = aStkLen[nStkA], &nStkLenB = aStkLen[nStkB];
        for (aStkLen[nStkA] = nHeiA; nHeiA < nStkLenA; ++nHeiA) {
            int nBlk = aStks[nStkA][nHeiA];
            aPos[nBlk] = nStkB * nStkCnt + nStkLenB;
            aStks[nStkB][nStkLenB++] = nBlk;
        }
    }
    Dump();
    return 0;
}
