#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
{
    int a;
    scanf("%d", &a);//4321
    int i;
    int arr[4] = { 0 };
    for (i = 0; i < 4; i++)
    {
        arr[i] = a%10;//1
        a = a / 10;
    }
    int sum = 0;
    for (i = 0; i < 4; i++)
    {
        sum = sum + arr[i] * pow(10, 3 - i);
    }
    printf("%d", sum);
	return 0;
}
/*Ҫ����������ҽԺ���ã�ҩƷ�ѡ���λ�ѣ�Ԫ/�죩��סԺ����������ӡ��Ӧ��Ǯ���������벡��������������ӡ�������
Ҫ������������н����д�������룬���ر�ע���������͵�ѡ�������ʽ������2λС������
����ɫ������˵�������֣����ǳ������ݣ���ɫ����Ϊ������ݣ���ɫ����Ϊ�������ݣ�����ð�ž�ΪӢ�ı�㣻���һ�����û�л��У�*/
//int main()
//{
//	printf("������ҩƷ�ѡ���λ��/�죩��סԺ����:");
//	float a,b,d;
//	int c;
//	scanf("%f %f %d",&a,&b,&c);
//	printf("Ӧ��:%f\n",b*c+a);
//	printf("ʵ����:");
//	scanf("%f",&d);
//	printf("Ӧ����:%f",d-b*c+a);
//
//
//	return 0;
//}
//int main()
//{
//	// ���ڴ���Ӵ���
//	/********** Begin *********/
//	printf("please input r:");
//	float a;
//	float S=0, C=0;
//	scanf("%f", &a);
//	printf("S=%2.6f\n",a*a*3.14);
//	printf("C=%2.6f\n", 2*a*3.14);
//	return 0;
//}
/*��������һ���ַ������ַ���С��100��������һ���ַ���Ȼ��ȥ���ַ����еĸ��ַ��������ȥ���ַ�����ַ�����
######��ʾ��ʹ�ú���gets����ʵ�ֺ��ո���ַ������룬ʹ��puts���������������ַ�����
######���Ҫ��     ��һ��Ϊ������ַ������ڶ���Ϊ������ַ���������Ϊ����Ľ��
�����������������ȷ�����ǵ÷������⣬���Ե��������ʽ���ر��ǿո񡢻س�����Ӣ���ַ��ȣ���
���磺

�����ַ�����asdfga�����ַ���a�����������sdfg��
����һ��Ӣ�ľ��ӺͿո��ַ��������ɾ�������пո���ַ�����*/
//int main()
//{
//	char arr[100] = {0};
//	gets(arr);
//	char c = 0;
//	scanf("%c",&c);
//	int i;
//
//	for (i = 0; i < 100; i++)
//	{
//		int temp;
//		if (arr[i] == '\0')
//		{
//			break;
//		}
//		if (c == arr[i])
//		{
//			int j;
//			for (j = i; j < 100; j++)
//			{
//				arr[j] = arr[j + 1];
//			}
//		}
//	}
//	puts(arr);
//	return 0;
//}
//
//int main()
//{
//	char arr1[10] = {0};
//	char arr2[10] = {0};
//	scanf("%s %s",arr1,arr2);
//	for (int i = 0; i < 10; i++)
//	{
//		
//		if(arr1[i] != arr2[i])//�ӿ�ʼ�����
//		{
//			int j;
//			for (j = i; j < 10; j++)
//			{
//				if (arr1[j]==arr2[j])
//				{
//					printf("%s%s", arr1, arr2);
//					return 0;
//				}
//				while (arr1[j] == '\0' || arr2[j] == '\0')
//				{
//					if (arr1[j] == '\0')
//					{
//						printf("%s%s", arr2, arr1);
//					}
//					else
//					{
//						printf("%s%s", arr1, arr2);
//					}
//					return 0;
//				}
//			}
//			
//			
//		}
//		else
//		{
//			if (i == 9)
//			{
//				printf("%s", arr1);
//			}
//		}
//	}
//
//	return 0;
//}
///*����һ���ַ������ֱ�ͳ���������֡��ո���ĸ�������ַ��������֡���ĸ���ո�֮��ģ����ֵĴ�����
//���磺
//���룺China 1949.10.1~2010.10.1
//��������֣�14
//�ո�1
//��ĸ��5
//�����ַ���5
//######ע�⣺�����ַ���ʱ����Ҫ�õ�gets()��������ȡ���������ܰ����ո����*/
//int main()
//{
//	char arr[50] = {0};
//	gets(arr);
//	int i;
//	int num=0, space=0, letter=0, other=0;
//	for (i = 0; i < 50; i++)
//	{
//		    if(arr[i] == '\0')break;
//			if (('a' <= arr[i] && arr[i] <='z') || ('A' <= arr[i] && arr[i] <= 'Z'))
//			{
//				letter++;
//			}
//			else if ('0' <= arr[i] && arr[i] <= '9')
//			{
//				num++;
//			}
//			else if (' ' == arr[i])
//			{
//				space++;
//			}
//			else
//			{
//				other++;
//			}		
//	}
//	printf("���֣�%d\n",num);
//	printf("�ո�%d\n",space );
//	printf("��ĸ��%d\n",letter );
//	printf("�����ַ��� %d\n",other );
//
//	return 0;
//}
//int main()
//{
//	int arr[11] = {1,2,3,4,6,7,8,9,10,11};
//	int a = 5;
//	for (int i = 0; i < 11; i++)
//	{
//		int temp1;
//		if (a<arr[i] && a>arr[i - 1])
//		{
//			temp1 = arr[i];
//			arr[i] =a;
//			a = temp1;
//		}
//		else if (a < arr[i])
//		{
//			temp1 = arr[i];
//			arr[i] = a;
//			a = temp1;
//		}
//		else if (arr[i] == 0 && a > arr[i - 1])
//		{
//			temp1 = arr[i];
//			arr[i] = a;
//			a = temp1;
//		}
//	}
//	return 0;
//}