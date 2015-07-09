/*
���鼯�ĸ߼�Ӧ��
����ÿһ������ p1 p2 b,���ǿ�����������:
b = (p2 ��ĳ��λ��֮���1�ĸ���) - (p1 - 1 ��ͬ��ĳ��λ��֮���1�ĸ���)����ż�ԡ����λ�ü�Ϊ
p1 - 1��p2��ͬ�Ĳ���λ��(���鼯�����ڵ�)��������뵽�˲��鼯�����鼯���ص���Ǵ�����֮�����
����ϵ�Լ�������ϵ�����崦��ʽ�ǣ�
1)sets[i].sid��ʾiλ�õĲ���λ�ã�sets[i].dist��ʾiλ����sets[i].sidλ��֮���1�ĸ�������ż��
2)��������num�ķ�Χ�ǳ����������Map������ϣ
3)��ż�ԵĴ���ʽ�������������
*/
#include <iostream>
#include<cstdio>
#include <cstring>
#include <map>
#define MAX_N 10010
using namespace std;
struct seg
{
    //rank���ȣ��������ٴ����ٶ�
    int sid, num, rank;
    bool dist;
} sets[MAX_N + 1];
int segNum;
char temp[10];
map<int, int> hashall;
void swap(int &v1, int &v2)
{
    int temp = v1;
    v1 = v2;
    v2 = temp;
}
//�õ�num�������Ӧ��id
int getIndex(int num)
{
    map<int, int>::iterator iter;
    if((iter = hashall.find(num)) != hashall.end())
        return iter->second;
    else return -1;
}
//���鼯��find����
int find(int index)
{
    //������ǵ�ǰ���ϵ����ڵ�
    if(sets[index].sid == index) return index;
    else
    {
        int pre = sets[index].sid;
        //�������ڵ�
        sets[index].sid = find(sets[index].sid);
        //������������ڵ��dist
        sets[index].dist = sets[index].dist ^ sets[pre].dist;
        return sets[index].sid;
    }
}
//������������num1 num2 dist
bool joint(int num1, int num2, bool dist)
{
    //�õ�������map�ж�Ӧ��Index
    int index1 = getIndex(num1), index2 = getIndex(num2);
    //�ҵ�����Ԫ�ص����ڵ�id
    int sid1 = find(index1);
    int sid2 = find(index2);
    //��ȵĻ�����num1, num2���Ѿ�������ˣ���ʱ��Ҫ�˶�����֮��ľ����ǲ���dist
    if(sid1 == sid2) return ((sets[index1].dist ^ sets[index2].dist) == dist);

    //������������Ϻϲ�������������һ�����ϵ���id�������õ����ȹ�ϵ�����ٴ���
    if(sets[sid1].rank < sets[sid2].rank)
    {
        //�������ڵ�id
        sets[sid1].sid = sid2;
        //���¾���
        sets[sid1].dist = sets[index1].dist ^ sets[index2].dist ^ dist;
    }
    else
    {
        sets[sid2].sid = sid1;
        sets[sid2].dist = sets[index2].dist ^ sets[index1].dist ^ dist;
        if(sets[sid1].rank == sets[sid2].rank)
            sets[sid1].rank++;
    }
    return true;
}
int main()
{
    int n, sn, i, f, t;
    bool b;
    while(scanf("%d", &n)!=EOF)
    {
        if(n==-1)
            break;
        else
        {
            scanf("%d", &sn);
            segNum = 0;
            int endPos = sn;
            bool can = true;
            memset(sets, 0, sizeof(sets));
            for(i = 1; i <= sn; i++)
            {
                scanf("%d%d%s", &f, &t, temp);
                if(f > t) swap(f, t);
                int index1 = getIndex(f - 1);
                if(index1 == -1)
                {
                    sets[segNum].num = f - 1;
                    sets[segNum].dist = 0;
                    sets[segNum].sid = segNum;
                    hashall[f - 1] = segNum;
                    segNum++;
                }
                int index2 = getIndex(t);
                if(index2 == -1)
                {
                    sets[segNum].num = t;
                    sets[segNum].dist = 0;
                    sets[segNum].sid = segNum;
                    hashall[t] = segNum;
                    segNum++;
                }
                if(strcmp(temp, "odd") == 0) b = 1;
                else b = 0;
                if(can)
                {
                    if(!joint(f - 1, t, b))
                    {
                        endPos = i - 1;
                        can = false;
                    }
                }
            }
            printf("%d\n", endPos);
        }
    }
    return 0;
}
