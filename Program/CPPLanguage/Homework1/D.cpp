#include <iostream>
#include <cstdio>
using namespace std;
typedef enum
{
    diamond, // ����
    club, // ÷��
    spade, // ����
    heart // ����
} Cards; // �˿��Ƶ����ֻ�ɫ

typedef struct
{
    Cards type; // ��ɫ
    int point; // ����
} Poker;

int get_card(Poker *pk)
{
    char temp;
    int i;
    cin>>temp;
    switch (temp)
    {
        case 'A':pk->type=diamond;break;
        case 'B':pk->type=club;break;
        case 'C':pk->type=spade;break;
        case 'D':pk->type=heart;break;
    }
    cin>>pk->point;
    return 0;
}

int card_cmp(Poker p1, Poker p2)
{
    if(p1.point>p2.point)
        return 1;
    else if(p1.point<p2.point)
        return -1;
    else if(p1.point==p2.point)
    {
    if(p1.type>p2.type)
        return 1;
    else if(p1.type<p2.type)
        return -1;
    else if(p1.type==p2.type)
        return 0;
    }
}

int main()
{
    Poker tom, jack;
    get_card(&tom);
    get_card(&jack);

    int result = card_cmp(tom, jack);
    if(result > 0)
        puts("Tom wins.");
    if(result < 0)
        puts("Jack wins.");
    if(result == 0)
        puts("Tie.");
}
