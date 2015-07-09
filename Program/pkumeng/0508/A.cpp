 //Floyd最短路算法
#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

#include <map>
#include <stack>

#define MAXP 1
#define INFINITE 100000000

map<string, int> vertex_index;	//将地名映射为数字下标
map<int, string> index_vertex;	//将数字下标映射为地名
int map_index=0;
stack<int> trajectory;	//记录轨迹
int dist[MAXP][MAXP];	//记录两点最短距离
int pre[MAXP][MAXP];	//prev[x][y]：若x-->y已是最短距离，此值为x；若通过中继u，x-->u-->y更短，此值为u。总之，储存y的前驱顶点。

void init_dist(int p)	//初始状态，图中都是孤立的点，没有边；自己到自己的距离为0，到其他点的距离为无穷大。
{
	int i, j;

	for (i=0; i<p; ++i)
		for (j=0; j<p; ++j)
			dist[i][j]=INFINITE;

	for (i=0; i<p; ++i)
		dist[i][i]=0;
}

void init_prev(int p)	//孤立的点当然没有前驱
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

//Floyd最短路核心代码
void run_floyd(int p)
{
	int i, j, k;	//k为可能缩短距离的中继顶点

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
	for (int i=0; i<p; ++i)	//没用
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
