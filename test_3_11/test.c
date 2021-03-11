#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


int Count(int a)
{
	int count1 = 0;
	while (a)
	{
		a = (a & (a - 1));
		count1++;
	}
}
int main()//求二进制里面有几个1
{
	int a=0;
	scanf("%d",&a);
	int count = Count(a);
	printf("%d", count);
	return 0;
}
//int Count(int a)
//{
//	int count = 0;
//		for (int i = 0; i < 32; i++)
//		{
//			if(((a>>i)& 1)==1)
//				count++;
//		}
//		return count;
//}
//int main()
//{
//	int a=0;
//	scanf("%d", &a);
//	int count=Count(a);
//	printf("%d", count);
//	return 0;
//}