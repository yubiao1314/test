#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//double pow(int a, int b)
//{
//	if (b == 0) 
//	{
//		return 1;
//	}
//	else if (b < 0)
//	{
//		return 1.0 / (a * pow(a,-b));
//	}
//	else
//	{
//		return a * pow(a, b - 1);
//	}
//}
//int main()//n的k次方
//{
//	int a, b;
//	scanf("%d %d",&a,&b);
//	pow(a, b);
//	return 0;
//}
//int sum(int num)//输入数字，各个数字求和
//{
//	if (num > 9)
//	{
//		int temp = num % 10;
//		num = num / 10;
//		return sum(num) + temp;
//	}
//	else
//	{
//		return num;
//	}
//	
//}
//int main()
//{
//	int num;
//	scanf("%d",&num);
//	int ret = sum(num);
//	printf("%d",ret);
//	return 0;
//}
//int my_strlength(char arr[])
//{
//	int count=0;
//	while (arr[++count] !='\0')
//	{		
//	}
//	return count;
//}
//void reserves(char arr[])
//{
//	char temp = arr[0];
//	int len = my_strlength(arr);
//	arr[0] = arr[len - 1];
//	arr[len - 1] = '\0';
//	if (my_strlength(arr+1) <= 2)
//	{
//		reserves(arr + 1);
//	}
//	arr[len - 1] = temp;	
//}
//int main()//逆序递归
//{
//	char arr[] ="123";
//	//scanf("%s",arr);
//	reserves(arr);
//	printf("%s",arr);
//	
//	return 0;
//}