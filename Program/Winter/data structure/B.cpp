/*
并查集的高级应用
对于每一个输入 p1 p2 b,我们可以这样考虑:
b = (p2 到某个位置之间的1的个数) - (p1 - 1 到同样某个位置之间的1的个数)的奇偶性。这个位置即为
p1 - 1和p2共同的参照位置(并查集的主节点)，因此联想到了并查集，并查集的特点就是处理集合之间的所
属关系以及数量关系，具体处理方式是：
1)sets[i].sid表示i位置的参照位置，sets[i].dist表示i位置与sets[i].sid位置之间的1的个数的奇偶性
2)由于输入num的范围非常大，因此利用Map来做哈希
3)奇偶性的处理方式可以用异或来做
*/
#include <iostream>
#include<cstdio>
#include <cstring>
#include <map>
#define MAX_N 10010
using namespace std;
struct seg
{
    //rank是秩，用来加速处理速度
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
//得到num这个数对应的id
int getIndex(int num)
{
    map<int, int>::iterator iter;
    if((iter = hashall.find(num)) != hashall.end())
        return iter->second;
    else return -1;
}
//并查集的find操作
int find(int index)
{
    //自身就是当前集合的主节点
    if(sets[index].sid == index) return index;
    else
    {
        int pre = sets[index].sid;
        //更新主节点
        sets[index].sid = find(sets[index].sid);
        //更新相对于主节点的dist
        sets[index].dist = sets[index].dist ^ sets[pre].dist;
        return sets[index].sid;
    }
}
//处理输入数据num1 num2 dist
bool joint(int num1, int num2, bool dist)
{
    //得到数据在map中对应的Index
    int index1 = getIndex(num1), index2 = getIndex(num2);
    //找到两个元素的主节点id
    int sid1 = find(index1);
    int sid2 = find(index2);
    //相等的话表面num1, num2早已经处理过了，这时需要核对他们之间的距离是不是dist
    if(sid1 == sid2) return ((sets[index1].dist ^ sets[index2].dist) == dist);

    //否则对两个集合合并，并更新其中一个集合的主id，这里用到了秩关系来加速处理
    if(sets[sid1].rank < sets[sid2].rank)
    {
        //更新主节点id
        sets[sid1].sid = sid2;
        //更新距离
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
