#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<math.h>

//1 2 3 4 5 6 7 8 9 0
int main()//冒泡排序
{
	printf("input 10 numbers:\n");
	int arr[10] = { 0 };
	scanf("%d %d %d %d %d %d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4], &arr[5], &arr[6], &arr[7], &arr[8], &arr[9]);
	for (int i = 0; i < 10; i++)
	{
		for (int j =0; j <10-i-1; j++)
		{
			if (arr[j] > arr[j+1])
			{
				int temp = 0;
				temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
			}
		}
	}
	printf("the sorted numbers:\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
//int main()
//{
//	int arr[20] = {0};
//	arr[0] = 1;
//	arr[1] = 1;
//	printf("%d\t",arr[0]);
//	printf("%d\t", arr[1]);
//	int i = 0;
//	int account = 2;
//	for (i = 2; i <20; i++)
//	{
//		arr[i] = arr[i - 1] + arr[i - 2];
//		printf("%d\t",arr[i]);
//		++account;
//		if (account % 5 == 0)
//		{
//			printf("\n");
//		}
//	}
//	return 0;
//}
//int main()
//{
//	printf("请输入ax²+bx+c=0中a、b、c各值");
//	float a = 0, b = 0, c = 0,d=0;
//	scanf("%f %f %f", &a, &b, &c);
//	d = pow(b, 2) - 4 * a * c;
//	if ( d< 0)
//	{
//		printf("无实根");
//	}
//	else if (d == 0)
//	{
//		printf("两个相同的解为%f",-b/(2*a));
//	}
//	else
//	{
//		printf("解1：%f", ( sqrt(d) - b )/ (2 * a));
//		printf("解2：%f", (-sqrt(d) - b) / (2 * a));	
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int account = 0;
//	scanf("%d %d",&a,&b);
//	for (a; a <= b; ++a)
//	{
//		if ((a % 4 == 0) || ((a % 100 == 0) && (a % 400 == 0)))
//		{
//			account++;
//		}
//	}
//	printf("有%d个闰年",account);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if ((a % 100 == 0) && (a % 400 == 0))
//	{
//		printf("为闰年");
//	}
//	else if (a % 4 == 0)
//	{
//		printf("为闰年");
//	}
//	else
//	{
//		printf("非闰年");
//	}
//	return 0;
//}
//
//int main()//闰年表达式
//{
//	int a = 0;
//	scanf("%d", &a);
//	if ((a % 4 == 0) || ((a % 100 == 0) && (a % 400 == 0)))
//	{
//		printf("为闰年");
//	}
//	else printf("非闰年");
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (a % 4 == 0)
//	{
//		if ((a % 100==0)&&(a % 400 == 0))
//		{
//			printf("为闰年");
//			return;
//		}
//	printf("为闰年");
//	}
//	else printf("非闰年");
//	return 0;
//}
//int main()//求素数试除法
//{
//	int sum = 1;
//	printf("%d\t ", 2);
//	for (int i =3; i<500;i+=2)
//	{
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)break;
//		}
//		if (j>sqrt(i))
//		{
//			printf("%d\t ", i);
//			++sum;
//			if (sum % 10 == 0)
//			{
//				printf("\n");
//			}
//		}
//		
//	}
//	return 0;
//}
//int main()//求费波那西(Fibonacci)数列的前 40 个数。这个数列有如下特点：第 1、2 两个数为 1、1。从第 3 个数开始，该数是其前面两个数之和。要求使用循环，直接显示数列，输出如下
//{
//	int a = 1, b = 1, c = 0;
//	printf("%20d%20d", a, b);//1 2
//	c = a + b;
//	printf("%20d", c);//3
//	a = b;
//	b = c;
//	c = a + b;
//	printf("%20d", c);//5
//	printf("\n");
//	for (int i = 0; i < 9; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			a = b;
//			b = c;
//			c = a + b;
//			printf("%20d", c);//1
//		}
//		printf("\n");
//      return 0;
//	}
	
	

	/*for (;;)
	{
		for (int j = 0; j < 4; j++)
		{
			printf()
		}
	}*/
	
	/*for (int i = 0; i < 40; i++)
	{
		
	}*/
	

//int main()//求Π
//{
//	double sum = 0;
//	int i = 0;
//	int j = 1;
//	for (i = 1; i < (pow(10,6)); i += 2)
//	{
//		double temp = 0;
//		double c = (double)1 / i;
//		temp = pow(-1,++j) *c;
//		sum += temp;	
//	}
//	printf("%lf",sum*4);
//	return 0;
//}
//int main()//倒置九九乘法表
//{
//	for (int i = 1; i <= 9; i++)
//	{
//		for (int j = 9; j >= i; --j)
//		{
//			printf("%d*%d=%d\t", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()//九九乘法表
//{
//	for (int i = 1; i <= 9; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d\t", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}