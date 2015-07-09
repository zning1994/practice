/************************************************
Background
背景
Bin packing, or the placement of objects of certain weights into different bins subject to certain constraints, is an historically interesting problem. Some bin packing problems are NP-complete but are amenable to dynamic programming solutions or to approximately optimal heuristic solutions.
装箱问题，即在一定的约束条件下如何将不同重量的物体放入不同的箱子，是一个历史悠久的有趣问题。某些装箱问题是NP完全的，但可以通过动态规划法或近似最优的启发式解法来解决。

In this problem you will be solving a bin packing problem that deals with recycling glass.
在这个问题中，你要解决一个回收玻璃瓶的装箱问题



The Problem
问题
Recycling glass requires that the glass be separated by color into one of three categories: brown glass, green glass, and clear glass. In this problem you will be given three recycling bins, each containing a specified number of brown, green and clear bottles. In order to be recycled, the bottles will need to be moved so that each bin contains bottles of only one color.
玻璃瓶的回收需要将其按颜色分为三类：棕、绿和无色。在这个问题中你会得到三个回收废品箱，每个都包括给定数量的棕、绿或无色玻璃瓶。为了便于回收，瓶子需要进行分捡和移动，使得每个废品箱都只有一个颜色的瓶子。

The problem is to minimize the number of bottles that are moved. You may assume that the only problem is to minimize the number of movements between boxes.
问题就是要使移动的瓶子数最小化。你可以假定唯一的问题就是使箱子间的移动次数最小化。

For the purposes of this problem, each bin has infinite capacity and the only constraint is moving the bottles so that each bin contains bottles of a single color. The total number of bottles will never exceed 231.
对于这一问题的目的，每个废品箱的容量是无限的，并且唯一的约束条件就是要通过移动瓶子使每个废品箱中都只有一种颜色的瓶子。瓶子的总量永不会超过231。



The Input
输入
The input consists of a series of lines with each line containing 9 integers. The first three integers on a line represent the number of brown, green, and clear bottles (respectively) in bin number 1, the second three represent the number of brown, green and clear bottles (respectively) in bin number 2, and the last three integers represent the number of brown, green, and clear bottles (respectively) in bin number 3. For example, the line:
输入由多行数据构成，每行数据中有9个整数。一行的前3个整数表示在1号废品箱中棕、绿和无色瓶子的数量各是多少，中间3个整数表示在2号废品箱中棕、绿和无色瓶子的数量各是多少，后3个整数表示在3号废品箱中棕、绿和无色瓶子的数量各是多少。比如下面的一行：

10 15 20 30 12 8 15 8 31

indicates that there are 20 clear bottles in bin 1, 12 green bottles in bin 2, and 15 brown bottles in bin 3.
表示共有1号废品箱中有20个无色瓶子，2号废品箱有12个绿色瓶子，3号废品箱中有15个棕色瓶子。

Integers on a line will be separated by one or more spaces. Your program should process all lines in the input file.
每行的各整数间有一个或多个空格。你的程序要处理输入数据中的所有行。



The Output
输出
For each line of input there will be one line of output indicating what color bottles go in what bin to minimize the number of bottle movements. You should also print the minimum number of bottle movements.
对于每行输入要有对应的一行输出，给出哪个颜色的瓶子装入哪个废品箱才能使瓶子的移动最小化。你还应打印出瓶子移动的最少次数。

The output should consist of a string of the three upper case characters 'G', 'B', 'C' (representing the colors green, brown, and clear) representing the color associated with each bin.
输出应用3个大写字母‘G’、‘B’、‘C’（分别表示绿色、棕色和无色）构成的字符串来表示各废品箱中瓶子的颜色。

The first character of the string represents the color associated with the first bin, the second character of the string represents the color associated with the second bin, and the third character represents the color associated with the third bin.
字符串的第1个字母为1号废品箱的颜色，第2个字母为2号废品箱的颜色，第3个字母为3号废品箱的颜色。

The integer indicating the minimum number of bottle movements should follow the string.
在字符串之后应用整数输出移动瓶子次数的最小值。

If more than one order of brown, green, and clear bins yields the minimum number of movements then the alphabetically first string representing a minimal configuration should be printed.
如果有多于一种次序的棕、绿和无色废品箱都满足同一个最少的移动次数，则按照字母表的顺序输入第一个字符串最小的一种。

Analysis
分析
三种颜色全排列一共6种方法，分别计算出每一种方法需要的移动次数，找出最小值即可（无需排序）。注意最优值相同的要按移法的字典顺序取较小者。

思路：由于有三种颜色需要区分开来，故总共有六种情况，而且题目要求输出最小的移动的次数，若次数相同则按字典序输出第一个最小的，故我们可以开一个数组存储按字典序排好所有情况的状态！
************************************************/
#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
char str[6][5]={"BCG","BGC","CBG","CGB","GBC","GCB"};
long n[3][3],sum[6];
int main()
{
	long i,min,p;
	while(scanf("%ld%ld%ld%ld%ld%ld%ld%ld%ld",&n[0][0],&n[0][1],&n[0][2],&n[1][0],&n[1][1],&n[1][2],&n[2][0],&n[2][1],&n[2][2])!=EOF)
	{
		sum[0] = n[1][0] + n[2][0] + n[0][2] + n[2][2] + n[0][1] + n[1][1];
        sum[1] = n[1][0] + n[2][0] + n[0][1] + n[2][1] + n[0][2] + n[1][2];
        sum[2] = n[1][2] + n[2][2] + n[0][0] + n[2][0] + n[0][1] + n[1][1];
        sum[3] = n[1][2] + n[2][2] + n[0][1] + n[2][1] + n[0][0] + n[1][0];
        sum[4] = n[1][1] + n[2][1] + n[0][0] + n[2][0] + n[0][2] + n[1][2];
        sum[5] = n[1][1] + n[2][1] + n[0][2] + n[2][2] + n[0][0] + n[1][0];
		min=sum[0];
		p=0;
		for(i=1;i<6;i++)
			if(sum[i]<min)
			{
				min=sum[i];
				p=i;
			}
		printf("%s %ld\n",str[p],sum[p]);
	}
	return 0;
}
