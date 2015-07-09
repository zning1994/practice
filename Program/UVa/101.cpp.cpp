//�ܷ���һ��ģ���⣬�����ҵ������ݷ�����С��������ac���
//����Ĳ��迴���˵ģ�
//�C���ֱ������׷N�Ϸ���eľ�ķ�ʽ��a��b�Ƿeľ�ľ�̖����
//move a onto b
// �ڌ�a�ᵽb��֮ǰ���Ȍ�a��b�ϵķeľ�Ż�ԭ���λ�ã����磺1�ͷŻ�1�����_ʼλ�D��
//move a over b
// �ڌ�a�ᵽb���ڵ��Ƕѷeľ֮��֮ǰ���Ȍ�a�ϵķeľ�Ż�ԭ���λ�D��b���ڵ��Ƕѷeľ���ӣ�
//pile a onto b
// ��a��������ϵķeľһ��ŵ�b�ϣ��ڰ�֮ǰb�Ϸ��ķeľ�Ż�ԭλ
//pile a over b
// ��a��������ϵķeľһ��ᵽ��b���ڵ��Ƕѷeľ֮��
//quit
// �����Y��
//ǰ�Ă���������a=b������a, b��ͬһ�ѷeľ�У����N�@�ӵĄ������ǲ��Ϸ��ġ����в��Ϸ��Ą�����ԓ�����ԣ�Ҳ���ǌ����eľ���o��׃
//
//�ܽ�������ʵֻ�����ֲ�����
//1.��һ����ľ�ϵ����л�ľ�Ż�ԭλ
//2ֻ��һ����ľ�ƶ�����һ����ľ��
//3�������ľ�������ϵĻ�ľ�ƶ�����һ����ľ��
//���ֲ����Ĳ�ͬ��Ͽ���ʵ����ĿҪ������ֲ���Ҫ��
//һ�������¼ÿ����ľ��ǰ��λ�÷������
//�ýṹ���¼��ǰ���л�ľ��λ�ù�ϵ��������
//�鷳����ÿ�β�����Ҫ�ı�ܶ������
//�ڶ����ƶ���ʽ���ܻ����Ҫ�ƶ��Ļ�ľ���м䣬��Ҫ��������Ļ�ľ���ƣ��������������ʼû���ǵ�runtime error ������
//�����ҵ������ݷ����˴���
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
int aPos[25]; //��ʾÿһ���ľ��λ�ã�����ջ�ı��*���ڸ߶�
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
    //�������ľ���ڵ�ջ�͸߶ȡ�nStkΪջ�ı�ţ�nHeiΪջ�ĸ߶�
    int nStk = aPos[nBaseBlk] / nStkCnt, nHei = aPos[nBaseBlk] % nStkCnt + 1;
    //ѭ����ָ����ľ���ϵ����л�ľ��λ
    for (int &nStkLen = aStkLen[nStk]; nStkLen > nHei; --nStkLen) {
        int nUpperBlk = aStks[nStk][nStkLen - 1]; //��Ļ�ľ���
        aStks[nUpperBlk][0] = nUpperBlk; //�����ԭλ
        aPos[nUpperBlk] = nUpperBlk * nStkCnt; //���¼���ϳɸû�ľλ��
        aStkLen[nUpperBlk] = 1; //��λ��Ŀ��ջ�ĸ߶���1(ֻ�й�λ�Ļ�ľ)
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
