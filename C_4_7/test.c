#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*有一个一维数组 score，内放 10 个学生成绩，求平均成绩。
要求：使用数组名作函数参数*/
float Average(float score[],int sz)
{
	float sum;
	int i;
	for (i = 0, sum = 0; i < sz; i++)
		sum += score[i];
	return sum / sz;
}
int main()
{
	float score[10] = {95.5,81.2,74,75,91,59,69,74,88,67};
	int i;
	printf("学生成绩：");
	for (i = 0; i < 10; i++)printf("%0.2f ", score[i]);
	printf("\n");
	int sz = sizeof(score) / sizeof(score[0]);
	printf("平均成绩：%0.2f", Average(score, sz));
	return 0;
}
///*
//输入 10 个数，要求输出其中值最大的元素和该数是第几个数。
//要求：使用数组元素作函数实参。
//*/
//int Found(int a,int b)
//{
//	return (a > b ? a : b);
//}
//int main()
//{
//	int arr[10] = {0};
//	int i,j=0;
//	for (i = 0; i < 10; i++)scanf("%d",&arr[i]);
//	int max = arr[0];
//	for (i = 0; i < 10; i++)
//	{
//		
//		if (max<Found(max, arr[i]))
//		{
//			max = Found(max, arr[i]);
//			j = i;
//		}
//	
//	}
//	printf("最大值为%d，是第%d个数", max,j+1);
//	return 0;
//}
///*Hanoi（汉诺）塔问题求解：将 3 个盘子（如上图）从 A 移到C的全过程 */
///*
//1,1A->C;
//2,1A->B,
//3,1A->C,
//  2A->B,1C->B;
//  3A->C,1B->A,
//  2B->C,1A->C
//*/
//int Han(int num,char a,char b,char c)
//{
//	if (num == 1)
//	{
//		printf("%c->%c\n",a,c);
//		return 0;
//	}
//	else
//	{
//		Han(num-1,a,c,b);
//		printf("%c->%c\n",a,c);
//		Han(num - 1, b, a, c);
//	}
//	
//}
//int main()
//{
//	char a = 'A',b='B',c='C';
//	Han(3,a,b,c);
//	return 0;
//}
///*用递归方法求ｎ！*/
////n*(n-1)*1
////1*2*3
////1*2
////1
//int  Fac(int n)
//{
//	
//if (n == 0)return 1;
//return n*Fac(n-1);
//}
//int main()
//{
//	printf("%d",Fac(4));
//	return 0;
//}
///*一只小猴子一天摘了许多桃子x，
//第一天吃了一半，然后忍不住又吃了一个；x/2 +1
//第二天又吃了一半，再加上一个；
//后面每天都是这样吃。
//到第 10 天的时候，小猴子发现只有一个桃子了。
//问小猴子第一天共摘了多少个桃子？*/
//int peach_n(int day)
//{
//	if (day == 10)return 1;
//	return (peach_n(++day) +1)* 2 ;
//}
//int main()
//{
//	printf("总共有桃子：%d",peach_n(1));
//	return 0;
//}
///*有 5 个学生坐在一起，
//问第 1 个学生多少岁？他说比第 2 个学生大 2 岁，
//问第 2 个学生岁数，他说比第 3 个学生大 2 岁，
//问第 3 个学生，又说比第 4 个学生大 3 岁，
//问第 4 个学生，说比第 5 个学生大 2 岁，
//最后问第 5 个学生，他说是 10 岁。
//请问第 1 个学生多大？*/
//int age(int a)
//{
//	if (a == 5)
//		return 10;
//	else if (a == 3)return age(++a) + 3;
//	return age(++a) + 2;
//}
//int main()
//{
//	printf("第1个学生的岁数：%d", age(1));
//	return 0;
//}
/*有 5 个学生坐在一起，
问第 1 个学生多少岁？他说比第 2 个学生大 2 岁，
问第 2 个学生岁数，他说比第 3 个学生大 2 岁，
问第 3 个学生，又说比第 4 个学生大 2 岁，
问第 4 个学生，说比第 5 个学生大 2 岁，
最后问第 5 个学生，他说是 10 岁。
请问第 1 个学生多大？*/
//int age(int a)
//{
//	if (a == 5)
//	{
//		return 10;
//	}
//	return age(++a) + 2;
//}
//int main()
//{
//	printf("第1个学生的岁数：%d", age(1));
//	return 0;
//}
///*有 5 个学生坐在一起，
//问第 5 个学生多少岁？他说比第 4 个学生大 2 岁，
//问第 4 个学生岁数，他说比第 3 个学生大 2 岁，
//问第 3 个学生，又说比第 2 个学生大 2 岁，
//问第 2 个学生，说比第 1 个学生大 2 岁，
//最后问第 1 个学生，他说是 10 岁。
//请问第 5 个学生多大？*/
//
//int age(int a)
//{
//	if (a == 1)
//	{
//		return 10;
//	}
//	return age(--a)+2;
//}
//int main()
//{
//	printf("第五个学生的岁数：%d", age(5));
//	return 0;
//}