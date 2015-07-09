/************************************************
Background
����
Bin packing, or the placement of objects of certain weights into different bins subject to certain constraints, is an historically interesting problem. Some bin packing problems are NP-complete but are amenable to dynamic programming solutions or to approximately optimal heuristic solutions.
װ�����⣬����һ����Լ����������ν���ͬ������������벻ͬ�����ӣ���һ����ʷ�ƾõ���Ȥ���⡣ĳЩװ��������NP��ȫ�ģ�������ͨ����̬�滮����������ŵ�����ʽ�ⷨ�������

In this problem you will be solving a bin packing problem that deals with recycling glass.
����������У���Ҫ���һ�����ղ���ƿ��װ������



The Problem
����
Recycling glass requires that the glass be separated by color into one of three categories: brown glass, green glass, and clear glass. In this problem you will be given three recycling bins, each containing a specified number of brown, green and clear bottles. In order to be recycled, the bottles will need to be moved so that each bin contains bottles of only one color.
����ƿ�Ļ�����Ҫ���䰴��ɫ��Ϊ���ࣺ�ء��̺���ɫ����������������õ��������շ�Ʒ�䣬ÿ�������������������ء��̻���ɫ����ƿ��Ϊ�˱��ڻ��գ�ƿ����Ҫ���зּ���ƶ���ʹ��ÿ����Ʒ�䶼ֻ��һ����ɫ��ƿ�ӡ�

The problem is to minimize the number of bottles that are moved. You may assume that the only problem is to minimize the number of movements between boxes.
�������Ҫʹ�ƶ���ƿ������С��������Լٶ�Ψһ���������ʹ���Ӽ���ƶ�������С����

For the purposes of this problem, each bin has infinite capacity and the only constraint is moving the bottles so that each bin contains bottles of a single color. The total number of bottles will never exceed 231.
������һ�����Ŀ�ģ�ÿ����Ʒ������������޵ģ�����Ψһ��Լ����������Ҫͨ���ƶ�ƿ��ʹÿ����Ʒ���ж�ֻ��һ����ɫ��ƿ�ӡ�ƿ�ӵ����������ᳬ��231��



The Input
����
The input consists of a series of lines with each line containing 9 integers. The first three integers on a line represent the number of brown, green, and clear bottles (respectively) in bin number 1, the second three represent the number of brown, green and clear bottles (respectively) in bin number 2, and the last three integers represent the number of brown, green, and clear bottles (respectively) in bin number 3. For example, the line:
�����ɶ������ݹ��ɣ�ÿ����������9��������һ�е�ǰ3��������ʾ��1�ŷ�Ʒ�����ء��̺���ɫƿ�ӵ��������Ƕ��٣��м�3��������ʾ��2�ŷ�Ʒ�����ء��̺���ɫƿ�ӵ��������Ƕ��٣���3��������ʾ��3�ŷ�Ʒ�����ء��̺���ɫƿ�ӵ��������Ƕ��١����������һ�У�

10 15 20 30 12 8 15 8 31

indicates that there are 20 clear bottles in bin 1, 12 green bottles in bin 2, and 15 brown bottles in bin 3.
��ʾ����1�ŷ�Ʒ������20����ɫƿ�ӣ�2�ŷ�Ʒ����12����ɫƿ�ӣ�3�ŷ�Ʒ������15����ɫƿ�ӡ�

Integers on a line will be separated by one or more spaces. Your program should process all lines in the input file.
ÿ�еĸ���������һ�������ո���ĳ���Ҫ�������������е������С�



The Output
���
For each line of input there will be one line of output indicating what color bottles go in what bin to minimize the number of bottle movements. You should also print the minimum number of bottle movements.
����ÿ������Ҫ�ж�Ӧ��һ������������ĸ���ɫ��ƿ��װ���ĸ���Ʒ�����ʹƿ�ӵ��ƶ���С�����㻹Ӧ��ӡ��ƿ���ƶ������ٴ�����

The output should consist of a string of the three upper case characters 'G', 'B', 'C' (representing the colors green, brown, and clear) representing the color associated with each bin.
���Ӧ��3����д��ĸ��G������B������C�����ֱ��ʾ��ɫ����ɫ����ɫ�����ɵ��ַ�������ʾ����Ʒ����ƿ�ӵ���ɫ��

The first character of the string represents the color associated with the first bin, the second character of the string represents the color associated with the second bin, and the third character represents the color associated with the third bin.
�ַ����ĵ�1����ĸΪ1�ŷ�Ʒ�����ɫ����2����ĸΪ2�ŷ�Ʒ�����ɫ����3����ĸΪ3�ŷ�Ʒ�����ɫ��

The integer indicating the minimum number of bottle movements should follow the string.
���ַ���֮��Ӧ����������ƶ�ƿ�Ӵ�������Сֵ��

If more than one order of brown, green, and clear bins yields the minimum number of movements then the alphabetically first string representing a minimal configuration should be printed.
����ж���һ�ִ�����ء��̺���ɫ��Ʒ�䶼����ͬһ�����ٵ��ƶ�������������ĸ���˳�������һ���ַ�����С��һ�֡�

Analysis
����
������ɫȫ����һ��6�ַ������ֱ�����ÿһ�ַ�����Ҫ���ƶ��������ҳ���Сֵ���ɣ��������򣩡�ע������ֵ��ͬ��Ҫ���Ʒ����ֵ�˳��ȡ��С�ߡ�

˼·��������������ɫ��Ҫ���ֿ��������ܹ������������������ĿҪ�������С���ƶ��Ĵ�������������ͬ���ֵ��������һ����С�ģ������ǿ��Կ�һ������洢���ֵ����ź����������״̬��
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
