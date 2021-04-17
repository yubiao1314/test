#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*N38 从键盘输入 10 个整数，在子函数中实现对主函数中的这 10 个整数按由大到小顺序排序。要求：用数组下标法实现排序，并使用起泡排序法。*/
void Bubble(int arr[])
{
	int i = 0, j = 0;
	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9 - i;j++)
		{
			if (arr[j] < arr[j + 1])
			{
				int temp = arr[j+1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for (i = 0; i < 10; printf("%d", arr[i++]));
}
int main()
{
	int arr[10] = {0};
	int i = 0;
	for (i = 0; i < 10; scanf("%d", &arr[i++]));
	Bubble(arr);
	return 0;
}
/*N37 从键盘输入 10 个整数，在子函数中实现对主函数中的这 10 个整数按由大到小顺序排序。要求：用数组下标法实现排序，并使用选择排序法*/
//void SelecSort(int arr[])
//{
//	int max,min;
//	int i = 0, j = 0;
//	for (i = 0; i <5; i++)
//	{
//		min = 9 - i;
//		max = i;
//		int j = 0;
//		for (j = i; j < 10 - i; j++)
//		{
//			int temp;
//			if (arr[min] > arr[j])
//			{
//				min = j;
//			}
//			if (arr[max] < arr[j])
//			{
//				max = j;
//			}
//		}
//		//最大值在最右边，最小值在最左边
//		if ((arr[max] == arr[9 - i]) && (arr[min] = arr[i]))
//		{
//			int temp = arr[max];
//			arr[max] = arr[min];
//			arr[min] = temp;
//		}
//		else if (min = arr[i])
//		{
//			//最小值在左边
//			int temp = arr[min];
//			arr[min] = arr[9 - i];
//			arr[9 - i] = temp;
//		}
//		else if (max = arr[9 - i])
//		{
//			int temp = arr[max];
//			arr[max] = arr[i];
//			arr[i] = temp;
//		}
//		else
//		{
//			int temp = arr[i];
//			arr[i] =arr[max];
//			arr[max] = temp;
//			temp = arr[9 - i];
//			arr[9 - i] = arr[min];
//			arr[min = temp];
//			
//		}
//	}
//	for (i = 0; i < 10;printf("%d ",arr[i++]));
//}
//int main()
//{
//	int arr[10] = {0};
//	int i = 0;
//	for (i = 0; i < 10; scanf("%d", &arr[i++]));
//	SelecSort(arr);
//	return 0;
//}

///*N36 将数组 a 中已有的 10 个整数按相反顺序存放，将 a[0]与 a[9]对换，……将 a[4]与 a[5]对换。要求：用指针变量法编程实现。*/
//int main()
//{
//	int arr[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	printf("反序前：");
//	int i = 0;
//	for (i = 0; i < 10; i++)printf("%d ", arr[i]);
//	printf("\n");
//	int* head = &arr[0];
//	int* tail = &arr[9];
//	while (tail > head)
//	{
//		int temp = *head;
//		*head = *tail;
//		*tail= temp;
//		tail--;
//		head++;
//	}
//	printf("反序后：");
//	for (i = 0; i < 10; i++)printf("%d ", arr[i]);
//	printf("\n");
//	return 0;
//}
/*N35 将数组 a 中已有的 10 个整数按相反顺序存放，将 a[0]与 a[9]对换，……将 a[4]与 a[5]对换。要求：用数组下标法编程实现。*/
//int main()
//{
//	int arr[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int i = 0;
//	printf("反序前：");
//	for (i = 0; i < 10; i++)printf("%d ",arr[i]);
//	printf("\n");
//	for (i = 0; i < 10; i++)
//	{
//		if (i < 5)
//		{
//			int temp = arr[i];
//			arr[i] = arr[9 - i];
//			arr[9 - i] = temp;
//		}
//	}
//	printf("反序后：");
//	for (i = 0; i < 10; i++)printf("%d ", arr[i]);
//	return 0;
//}
/*N34 输入 3 个整数 a,b,c，要求按由大到小的顺序将它们输出。要求：用函数嵌套+指针变量来实现*/
//void cmp(int* pa, int* pb, int* pc)
//{
//	if (*pa < *pb)
//	{
//		int temp = *pb;
//		*pb = *pa;
//		*pa = temp;
//		if (*pa < *pc)
//		{
//			temp = *pc;
//			*pc = *pa;
//			*pa = temp;
//			if (*pb < *pc)
//			{
//				temp = *pc;
//				*pc = *pb;
//				*pb = temp;
//			}
//		}
//		else
//		{
//			if (*pb < *pc)
//			{
//				temp = *pc;
//				*pc = *pb;
//				*pb = temp;
//			}
//		}
//	}
//	else
//	{
//		int temp = 0;
//		if (*pa < *pc)
//		{
//			temp = *pc;
//			*pc = *pa;
//			*pa = temp;
//			if (*pb < *pc)
//			{
//				temp = *pc;
//				*pc = *pb;
//				*pb = temp;
//			}
//		}
//		else
//		{
//			if (*pb < *pc)
//			{
//				temp = *pc;
//				*pc = *pb;
//				*pb = temp;
//			}
//		}
//	}
//}
//void my_printf(int a,int b,int c)
//{
//	cmp(&a,&b,&c);
//	printf("%d %d %d",a,b,c);
//}
//int main()
//{
//	int a=0,b=0,c=0;
//	scanf("%d%d%d",&a,&b,&c);
//	my_printf(a,b,c);
//	return 0;
//}
/*N33 给定 b 的值，输入 a 和ｍ，求 a*b 和 am的值。要求：分别编写两个文件模块，其中文
件 file1 包含主函数，另一个文件 file2 包含求 am 的函数。在 file1 文件中定义外部变量 A，
在 file2 中用 extern 声明外部变量 */
//int main()
//{
//	int a, m;
//	int b = 12;
//
//	printf("请输入a和m");
//	scanf("%d%d",&a,&m);
//	printf("a*m=%d\nam=%d", a * b, my_pow(a, m));
//	return 0;
//}
///*N32 考察静态局部变量的值，程序见教材【例 7.16】*/
//int main()
//{
//	int f(int);
//	int a = 2, i;
//	for (i = 0; i < 3; i++)
//		printf("%d\n",f(a));
//	return 0;
//}
//int f(int a)
//{
//	auto int b = 0;
//	static int c = 3;
//	b += 1;
//	c += 1;
//	return (a + b + c);
//}
///*N31 有一个一维数组，内放 10 个学生成绩，写一个函数，当主函数调用此函数后，能求出平均分、最高分和最低分。要求：用外部变量返回给主函数最大值和最小值。*/
//float Max, Min;
//float average(float score[])
//{
//	int i;
//	float sum=0;
//	Min=Max = score[0];
//	for (i = 0; i < 10; i++)
//	{
//		if (score[i] > Max)
//			Max = score[i];
//		if (score[i] < Min)
//			Min = score[i];
//	    sum += score[i];
//	}
//	return sum/10;
//}
//int main()
//{
//	float score[10] = {0};
//	int i;
//	for (i = 0; i < 10;i++)scanf("%f",&score[i]);
//	float ret=average(score);
//	printf("平均分：%f\n最高分：%f\n最低分：%f\n", ret,Max,Min);
//	return 0;
//}
/*N30 有一个３×４的矩阵，求所有元素中的最大值。要求：用数组名作实参。*/
//int FMax(int arr[3][4],int row,int col)
//{
//	printf("数组为:\n");
//	int max,i,j;
//	max = arr[0][0];
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			printf("%-3d ", arr[i][j]);
//			if (max < arr[i][j])
//			{
//				max = arr[i][j];
//			}
//		}
//		printf("\n");
//	}
//	printf("数组中最大元素：%d",max);
//	return max;
//}
//int main()
//{
//	int arr[3][4] = { {11,25,9,4},{5,36,45,99},{12,100,17,1} };
//	
//
//	FMax(arr,3,4);
//	return 0;
//}
///*N29 用改进型的选择法对数组中 10 个整数按由小到大排 */
//void Selec(int arr[],int sz)
//{
	//int max, min;
	//int i, j;
	//for (i = 0; i < sz/2; i++)
	//{
	//	min = i;
	//	max = sz - 1 - i;
	//	for (j =i; j < sz-i;j++)//找出最大值和最小值
	//	{
	//		if (arr[min] > arr[j])
	//		{
	//			min = j;
	//		}
	//		if (arr[max] < arr[j])
	//		{
	//			max =j;
	//		}
	//	}
	//	int temp;
	//	if (min ==( sz - 1 - i) && max ==i )
	//	{
	//		temp = arr[min];
	//		arr[min] = arr[max];
	//		arr[max] = temp;
	//	}
	//	else if (max==i) 
	//	{
	//		temp = arr[sz-1-i];
	//		arr[sz - 1 - i] = arr[max];
	//		arr[max] = temp;
	//	}
	//	else if (min == sz - i - 1)
	//	{
	//		temp = arr[ i];
	//		arr[i] = arr[min];
	//		arr[min] = temp;
	//	}
	//	else
	//	{
	//		temp = arr[i];
	//		arr[i] = arr[min];
	//		arr[min] = temp;
	//		temp = arr[sz - 1 - i];
	//		arr[sz - 1 - i] = arr[max];
	//		arr[max] = temp;
	//	}
	//	}
	//printf("选择排序后：");
	//for (i = 0; i < sz; i++)printf("%d ",arr[i]);
//}
//int main()
//{
//	int arr[10] = { 7,5,3,9,1,8,2,4,0,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("选择排序前：");
//	int i;
//	for (i = 0; i < sz; i++)printf("%d ", arr[i]);
//	printf("\n");
//	Selec(arr, sz);
//	return 0;
//}
///*用选择法对数组中有小到大排序 */
//void Selec(int arr [], int sz)
//{
//	int i, min,temp;
//	int j;
//	int count=0;
//	for (j=0;j<sz-1;j++)
//	{
//		
//		min = arr[j];
//		for (i =j; i <sz; i++)//找出最小值
//		{
//			if (min > arr[i])
//			{
//				min = arr[i];
//				count = i;
//			}
//		}
//		temp = arr[j];
//		arr[j] = min;
//		arr[count] = temp;
//	}
//	printf("选择排序后：");
//	for (i = 0; i < sz; i++)printf("%d ",arr[i]);
//}
//int main()
//{
//	int arr[10] = {7,5,3,9,1,8,2,4,0,6};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i;
//	printf("选择排序前：");
//	for (i = 0; i < sz; i++)printf("%d ", arr[i]);
//	printf("\n");
//	Selec(arr,sz);
//	return 0;
//}
/*有两个班级，分别有 5 名和 10 名学生，调用一个 average 函数，分别求这两个班的学生的平均成绩。*/
/*在 N24 的基础上编程，要求：子函数必须是无返回值的函数类型。（建议：主函数的score 增加一个元素 score[10]作为子函数传递平均成绩给主函数的单元。）*/
/*在 N24 的基础上继续编程，实现在子函数内修改主函数的 score[0]的值，并显示*/
/*有一个一维数组 score，内放 10 个学生成绩，求平均成绩,要求：使用数组名作函数参数*/
//float Average(float score[], int sz)
//{
//	float sum;
//	int i;
//	for (i = 0, sum = 0; i < sz; i++)
//		sum += score[i];
//	return sum / sz;
//}
//float Alter(float arr[])
//{
//	float a;
//	printf("请输入第一个学生修改的成绩\n");
//	scanf("%f",&a);
//	*arr = a;
//}
//void Average1(float arr[], int sz)
//{
//	float sum;
//	int i;
//	for (i = 0, sum = 0; i < sz; i++)
//		sum += arr[i];
//	printf("平均成绩：%0.2f", sum / sz);
//	printf("\n");
//}
//int main()
//{
//	float score[10] = { 95.5,81.2,74,75,91,59,69,74,88,67 };
//	float score1[5] = { 88,79,65,99,59 };
//	int sz = sizeof(score) / sizeof(score[0]);
//	int sz1 = sizeof(score1) / sizeof(score1[0]);
//	int i;
//	printf("班级1学生成绩：");
//	for (i = 0; i < sz; i++)printf("%0.2f ", score[i]);
//	printf("\n");
//	printf("班级2学生成绩：");
//	for (i = 0; i < sz1; i++)printf("%0.2f ", score1[i]);
//	printf("\n");
//	
//	//Alter(score);
//	/*printf("修改后学生成绩：");
//	for (i = 0; i < 10; i++)printf("%0.2f ", score[i]);
//	
//	printf("\n");
//	printf("平均成绩：%0.2f", Average(score, sz));*/
//	printf("班级1");
//	Average1(score,sz);
//	printf("班级2");
//	Average1(score1, sz1);
//	return 0;
//}