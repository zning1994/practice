#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;
int flag1=2,flag2=1;
// 棋子类
class Stone
{
protected:
    int  Color;             // 颜色
    int  Col;             // 列
    int  Row;            // 行
    bool bShow;             // 是否显示
    bool Selected;            // 是否被选择
public:
    Stone(int color, int col, int row)
    {
        Color=color;
        Col=col;
        Row=row;
    };
    void KillIt()
    {
        bShow = false;    //吃掉棋子
    }
    void Select()
    {
        Selected = !Selected;
    }//选中棋子
};

// 中国象棋棋子类
class ChineseStone  : public Stone
{
    char strType[10];        // 棋子类型
    int R;                // 棋子半径
public:
    ChineseStone (int color, int col, int row, const char *type):Stone(color,col,row)
    {
        strcpy(strType,type);
    };    // 构造函数
    void Show()
    {
        cout<<"-- 这是一个象棋棋子 --"<<endl;
        cout<<"    棋子类型："<<strType<<endl;
        cout<<"    棋子颜色：黑色"<<endl;
        cout<<"    棋子位置：("<<Col<<","<<Row<<")"<<endl;
        if(flag1==0)
            cout<<"    是否显示：否"<<endl;
        else
            cout<<"    是否显示：是"<<endl;
        if(flag2==0)
            cout<<"    是否被选：是"<<endl;
        else
            cout<<"    是否被选：否"<<endl;
        cout<<"    棋子半径：23"<<endl;
        cout<<endl;
        flag1--,flag2--;
    };                // 显示信息
};
int main()
{
    freopen("out","w",stdout);
    ChineseStone s1(1,3,6,"炮"),s2(1,3,2,"炮"),s3(1,3,2,"炮");
    s1.Show();
    s2.Show();
    s3.Show();
}
