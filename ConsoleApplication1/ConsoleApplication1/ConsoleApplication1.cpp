// ConsoleApplication1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

int _tmain(int argc, _TCHAR* argv[])
{
	int n=0,a[10000],i=0,j=0,max=0,sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	max=a[0];//讲最大值先置为数组第一个数
	for(i=0;i<n;i++)
	{
		sum=0;
		for(j=i;j<n;j++)
		{
			sum=sum+a[j];//利用上一次结果来运算，可减少一层循环
			if(sum>max) max=sum;
		}
	}
	printf("%d\n",max);
	system("pause");
}