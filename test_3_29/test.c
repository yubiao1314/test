#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{

	return 0;
}
//int main()//��ӡ�˷��ھ���
//{
//	for (int i = 1; i <=10; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d\t", i, j, i * j);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
//void Judge(int a)//�ж�����
//{
//	int j = 0;
//	for (j = 2; j < a; j++)
//	{
//		if (a % j == 0)
//		{
//			break;
//		}		
//	}
//	if (j == a)
//	{
//		printf("Ϊ����");
//	}
//}
//int main()
//{
//	int a = 0;
//	printf("������һ����");
//	scanf("%d", &a);
//	if (a >= 1)
//	{
//		Judge(a);
//	}
//
//	return 0;
//}
//print(int* p, int a)
//{
//	for (int i = 0; i < a; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//int main()//����ָ���ӡ����
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(p, sz);
//	
//	return 0;
//}
//void swap(int a,int b)
//{
//	//0001 0011 0010
//	//0000 0011 0011
//	//0011 0101 0110
//	//
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//
//}
//int main()
//{
//	int a = 3;
//	int b = 5;
//	swap(a, b);
//	return 0;
//}
//int main()
//{
//	int m = 1;
//	int s=(m >> 1);
//	
//	printf("%d",s);
//	return 0;
//}