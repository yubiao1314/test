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
int main()/*�Ӽ�������뾶ֵ�����ֱ����Բ���ܳ���Բ�������Ҫ���������Ӻ�������ֵ*/
{
	printf("�뾶:\n");
	float r = 0;
	scanf("%f",&r);
	printf("ֱ����%f\n�ܳ���%f\nԲ�������%f", Cald(r), CalC(r), CalS(r));
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
//int main()/*�� 3 ���ַ������Ӽ������룬�ַ������Ȳ����� 10 ���ַ���,Ҫ���ҳ���������ߡ�*/
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
//int main()/*����һ���ַ���ͳ�������ж��ٸ����ʣ�����֮���ÿո�ָ���*/
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