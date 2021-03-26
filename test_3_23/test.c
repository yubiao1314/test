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
/*要求输入所在医院费用（药品费、床位费（元/天）、住院天数），打印出应付钱数；再输入病人所付款数，打印出找零金额。
要求按照下面的运行结果编写函数代码，请特别注意数据类型的选择、输出格式（保留2位小数）。
（绿色字体是说明性文字，不是程序内容；黑色字体为输出内容；红色字体为输入内容；所有冒号均为英文标点；最后一行输出没有换行）*/
//int main()
//{
//	printf("请输入药品费、床位费/天）、住院天数:");
//	float a,b,d;
//	int c;
//	scanf("%f %f %d",&a,&b,&c);
//	printf("应付:%f\n",b*c+a);
//	printf("实付款:");
//	scanf("%f",&d);
//	printf("应找零:%f",d-b*c+a);
//
//
//	return 0;
//}
//int main()
//{
//	// 请在此添加代码
//	/********** Begin *********/
//	printf("please input r:");
//	float a;
//	float S=0, C=0;
//	scanf("%f", &a);
//	printf("S=%2.6f\n",a*a*3.14);
//	printf("C=%2.6f\n", 2*a*3.14);
//	return 0;
//}
/*任意输入一个字符串（字符数小于100），输入一个字符，然后去掉字符串中的该字符，并输出去掉字符后的字符串。
######提示：使用函数gets（）实现含空格的字符串输入，使用puts（）函数输出结果字符串。
######输出要求：     第一行为输入的字符串，第二行为输入的字符，第三行为输出的结果
（如果输入输出结果正确，但是得分有问题，尝试调整输出格式，特别是空格、回车、中英文字符等！）
例如：

输入字符串”asdfga”和字符’a’，则输出”sdfg”
输入一个英文句子和空格字符，则输出删除了所有空格的字符串。*/
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
//		if(arr1[i] != arr2[i])//从开始不相等
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
///*输入一个字符串，分别统计其中数字、空格、字母及其他字符（除数字、字母、空格之外的）出现的次数。
//例如：
//输入：China 1949.10.1~2010.10.1
//输出：数字：14
//空格：1
//字母：5
//其他字符：5
//######注意：输入字符串时，需要用到gets()函数来读取，这样就能包含空格符。*/
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
//	printf("数字：%d\n",num);
//	printf("空格：%d\n",space );
//	printf("字母：%d\n",letter );
//	printf("其他字符： %d\n",other );
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