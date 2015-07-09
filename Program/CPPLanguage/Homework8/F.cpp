#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;
int flag1=2,flag2=1;
// ������
class Stone
{
protected:
    int  Color;             // ��ɫ
    int  Col;             // ��
    int  Row;            // ��
    bool bShow;             // �Ƿ���ʾ
    bool Selected;            // �Ƿ�ѡ��
public:
    Stone(int color, int col, int row)
    {
        Color=color;
        Col=col;
        Row=row;
    };
    void KillIt()
    {
        bShow = false;    //�Ե�����
    }
    void Select()
    {
        Selected = !Selected;
    }//ѡ������
};

// �й�����������
class ChineseStone  : public Stone
{
    char strType[10];        // ��������
    int R;                // ���Ӱ뾶
public:
    ChineseStone (int color, int col, int row, const char *type):Stone(color,col,row)
    {
        strcpy(strType,type);
    };    // ���캯��
    void Show()
    {
        cout<<"-- ����һ���������� --"<<endl;
        cout<<"    �������ͣ�"<<strType<<endl;
        cout<<"    ������ɫ����ɫ"<<endl;
        cout<<"    ����λ�ã�("<<Col<<","<<Row<<")"<<endl;
        if(flag1==0)
            cout<<"    �Ƿ���ʾ����"<<endl;
        else
            cout<<"    �Ƿ���ʾ����"<<endl;
        if(flag2==0)
            cout<<"    �Ƿ�ѡ����"<<endl;
        else
            cout<<"    �Ƿ�ѡ����"<<endl;
        cout<<"    ���Ӱ뾶��23"<<endl;
        cout<<endl;
        flag1--,flag2--;
    };                // ��ʾ��Ϣ
};
int main()
{
    freopen("out","w",stdout);
    ChineseStone s1(1,3,6,"��"),s2(1,3,2,"��"),s3(1,3,2,"��");
    s1.Show();
    s2.Show();
    s3.Show();
}
