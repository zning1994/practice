 //Floyd���·�㷨
#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

#include <map>
#include <stack>

#define MAXP 1
#define INFINITE 100000000

map<string, int> vertex_index;	//������ӳ��Ϊ�����±�
map<int, string> index_vertex;	//�������±�ӳ��Ϊ����
int map_index=0;
stack<int> trajectory;	//��¼�켣
int dist[MAXP][MAXP];	//��¼������̾���
int pre[MAXP][MAXP];	//prev[x][y]����x-->y������̾��룬��ֵΪx����ͨ���м�u��x-->u-->y���̣���ֵΪu����֮������y��ǰ�����㡣

void init_dist(int p)	//��ʼ״̬��ͼ�ж��ǹ����ĵ㣬û�бߣ��Լ����Լ��ľ���Ϊ0����������ľ���Ϊ�����
{
	int i, j;

	for (i=0; i<p; ++i)
		for (j=0; j<p; ++j)
			dist[i][j]=INFINITE;

	for (i=0; i<p; ++i)
		dist[i][i]=0;
}

void init_prev(int p)	//�����ĵ㵱Ȼû��ǰ��
{
	int i, j;
	for (i=0; i<p; ++i)
		for (j=0; j<p; ++j)
			pre[i][j]=-1;
}

void build_dist_and_prev(string from, string to, int _dist)
{
	if (vertex_index.count(from)==0)
	{
		vertex_index[from]=map_index;
		index_vertex[map_index]=from;
		++map_index;
	}
	if (vertex_index.count(to)==0)
	{
		vertex_index[to]=map_index;
		index_vertex[map_index]=to;
		++map_index;
	}

	int i=vertex_index[from];
	int j=vertex_index[to];

	dist[i][j]=_dist;
	dist[j][i]=_dist;

	pre[i][j]=i;
	pre[j][i]=j;
}

//Floyd���·���Ĵ���
void run_floyd(int p)
{
	int i, j, k;	//kΪ�������̾�����м̶���

	for (k=0; k<p; ++k)
	{
		for (i=0; i<p; ++i)
		{
			for (j=0; j<p; ++j)
			{
				if( dist[i][j] > dist[i][k]+dist[k][j] )	//relaxation
				{
					dist[i][j]=dist[i][k]+dist[k][j];

					pre[i][j]=pre[k][j];
				}
			}
		}
	}
}

void query_shortest_path(string from, string to)
{
	int i=vertex_index[from];
	int j=vertex_index[to];
	int k=j;
	int prev_node, tmp;

	do
	{
		trajectory.push(k);
		k=pre[i][k];
	} while (k!=i);

	cout<<from;
	prev_node=vertex_index[from];

	while (!trajectory.empty())
	{
		tmp=trajectory.top();
		cout<<"->("<<dist[prev_node][tmp]<<")->"<<index_vertex[tmp];

		prev_node=tmp;
		trajectory.pop();
	}

	cout<<endl;
}

int main()
{
	//freopen("D:\\in.txt", "r", stdin);
	freopen("out", "w", stdout);

	int p, q, r;
	string from, to;
	int _dist;

	cin>>p;
	init_dist(p);
	init_prev(p);
	for (int i=0; i<p; ++i)	//û��
	{
		cin>>from;
	}

	cin>>q;
	for (int i=0; i<q; ++i)
	{
		cin>>from;
		cin>>to;
		cin>>_dist;

		build_dist_and_prev(from, to, _dist);
	}

	run_floyd(p);

	cin>>r;
	for (int i=0; i<r; ++i)
	{
		cin>>from;
		cin>>to;

		query_shortest_path(from, to);
	}

	return 0;
}
