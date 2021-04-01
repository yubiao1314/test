#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

float Cald(float r)
{
	return 2 * r;
}
float CalC(float r)
{
	return 2 * 3.14 * r;
}
float CalS(float r)
{
	return 3.14 * r * r;
}
int main()/*从键盘输入半径值，求得直径、圆的周长、圆的面积，要求用三个子函数来求值*/
{
	printf("半径:\n");
	float r = 0;
	scanf("%f",&r);
	printf("直径：%f\n周长：%f\n圆的面积：%f", Cald(r), CalC(r), CalS(r));
	return 0;
}
//char fun(char* arr)
//{
//	int i = 0;
//	char sum=0;
//	while (arr[i])
//	{
//		sum += arr[i];
//		i++;
//	}
//	return sum;
//}
//int main()/*有 3 个字符串（从键盘输入，字符串长度不超过 10 个字符）,要求找出其中最大者。*/
//{
//	char arr1[10] = { 0 };
//	char arr2[10] = { 0 };
//	char arr3[10] = { 0 };
//	gets(arr1);
//	gets(arr2);
//	gets(arr3);
//	char a = fun(arr1);
//	char b = fun(arr2);
//	char c = fun(arr3);
//	printf("\n\n");
//	char max;
//	if (a > b)
//	{
//		max = a;
//		if (a > c)
//		{
//			printf("the largest:\n%s", arr1);
//		}
//		else 
//		{
//			printf("the largest:\n%s", arr3);
//		} 
//
//	}
//	else
//	{
//		max = b;
//		if (b > c)
//		{
//			printf("the largest:\n%s", arr2);
//		}
//		else { printf("the largest:\n%s", arr3); }
//	}	
//	return 0;
//}
//int main()/*输入一行字符，统计其中有多少个单词，单词之间用空格分隔开*/
//{
//	char arr[100] = { 0 };
//	gets(arr);
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		if (arr[i] == ' ')count++;
//		while (arr[i])
//		{
//			break;
//		}
//	}
//	count++;
//	printf("%d words",count);
//	return 0;
//}