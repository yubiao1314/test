#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*N38 �Ӽ������� 10 �����������Ӻ�����ʵ�ֶ��������е��� 10 ���������ɴ�С˳������Ҫ���������±귨ʵ�����򣬲�ʹ���������򷨡�*/
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
/*N37 �Ӽ������� 10 �����������Ӻ�����ʵ�ֶ��������е��� 10 ���������ɴ�С˳������Ҫ���������±귨ʵ�����򣬲�ʹ��ѡ������*/
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
//		//���ֵ�����ұߣ���Сֵ�������
//		if ((arr[max] == arr[9 - i]) && (arr[min] = arr[i]))
//		{
//			int temp = arr[max];
//			arr[max] = arr[min];
//			arr[min] = temp;
//		}
//		else if (min = arr[i])
//		{
//			//��Сֵ�����
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

///*N36 ������ a �����е� 10 ���������෴˳���ţ��� a[0]�� a[9]�Ի��������� a[4]�� a[5]�Ի���Ҫ����ָ����������ʵ�֡�*/
//int main()
//{
//	int arr[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	printf("����ǰ��");
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
//	printf("�����");
//	for (i = 0; i < 10; i++)printf("%d ", arr[i]);
//	printf("\n");
//	return 0;
//}
/*N35 ������ a �����е� 10 ���������෴˳���ţ��� a[0]�� a[9]�Ի��������� a[4]�� a[5]�Ի���Ҫ���������±귨���ʵ�֡�*/
//int main()
//{
//	int arr[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int i = 0;
//	printf("����ǰ��");
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
//	printf("�����");
//	for (i = 0; i < 10; i++)printf("%d ", arr[i]);
//	return 0;
//}
/*N34 ���� 3 ������ a,b,c��Ҫ���ɴ�С��˳�����������Ҫ���ú���Ƕ��+ָ�������ʵ��*/
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
/*N33 ���� b ��ֵ������ a �ͣ��� a*b �� am��ֵ��Ҫ�󣺷ֱ��д�����ļ�ģ�飬������
�� file1 ��������������һ���ļ� file2 ������ am �ĺ������� file1 �ļ��ж����ⲿ���� A��
�� file2 ���� extern �����ⲿ���� */
//int main()
//{
//	int a, m;
//	int b = 12;
//
//	printf("������a��m");
//	scanf("%d%d",&a,&m);
//	printf("a*m=%d\nam=%d", a * b, my_pow(a, m));
//	return 0;
//}
///*N32 ���쾲̬�ֲ�������ֵ��������̲ġ��� 7.16��*/
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
///*N31 ��һ��һά���飬�ڷ� 10 ��ѧ���ɼ���дһ�������������������ô˺����������ƽ���֡���߷ֺ���ͷ֡�Ҫ�����ⲿ�������ظ����������ֵ����Сֵ��*/
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
//	printf("ƽ���֣�%f\n��߷֣�%f\n��ͷ֣�%f\n", ret,Max,Min);
//	return 0;
//}
/*N30 ��һ���������ľ���������Ԫ���е����ֵ��Ҫ������������ʵ�Ρ�*/
//int FMax(int arr[3][4],int row,int col)
//{
//	printf("����Ϊ:\n");
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
//	printf("���������Ԫ�أ�%d",max);
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
///*N29 �øĽ��͵�ѡ�񷨶������� 10 ����������С������ */
//void Selec(int arr[],int sz)
//{
	//int max, min;
	//int i, j;
	//for (i = 0; i < sz/2; i++)
	//{
	//	min = i;
	//	max = sz - 1 - i;
	//	for (j =i; j < sz-i;j++)//�ҳ����ֵ����Сֵ
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
	//printf("ѡ�������");
	//for (i = 0; i < sz; i++)printf("%d ",arr[i]);
//}
//int main()
//{
//	int arr[10] = { 7,5,3,9,1,8,2,4,0,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("ѡ������ǰ��");
//	int i;
//	for (i = 0; i < sz; i++)printf("%d ", arr[i]);
//	printf("\n");
//	Selec(arr, sz);
//	return 0;
//}
///*��ѡ�񷨶���������С�������� */
//void Selec(int arr [], int sz)
//{
//	int i, min,temp;
//	int j;
//	int count=0;
//	for (j=0;j<sz-1;j++)
//	{
//		
//		min = arr[j];
//		for (i =j; i <sz; i++)//�ҳ���Сֵ
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
//	printf("ѡ�������");
//	for (i = 0; i < sz; i++)printf("%d ",arr[i]);
//}
//int main()
//{
//	int arr[10] = {7,5,3,9,1,8,2,4,0,6};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i;
//	printf("ѡ������ǰ��");
//	for (i = 0; i < sz; i++)printf("%d ", arr[i]);
//	printf("\n");
//	Selec(arr,sz);
//	return 0;
//}
/*�������༶���ֱ��� 5 ���� 10 ��ѧ��������һ�� average �������ֱ������������ѧ����ƽ���ɼ���*/
/*�� N24 �Ļ����ϱ�̣�Ҫ���Ӻ����������޷���ֵ�ĺ������͡������飺��������score ����һ��Ԫ�� score[10]��Ϊ�Ӻ�������ƽ���ɼ����������ĵ�Ԫ����*/
/*�� N24 �Ļ����ϼ�����̣�ʵ�����Ӻ������޸��������� score[0]��ֵ������ʾ*/
/*��һ��һά���� score���ڷ� 10 ��ѧ���ɼ�����ƽ���ɼ�,Ҫ��ʹ������������������*/
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
//	printf("�������һ��ѧ���޸ĵĳɼ�\n");
//	scanf("%f",&a);
//	*arr = a;
//}
//void Average1(float arr[], int sz)
//{
//	float sum;
//	int i;
//	for (i = 0, sum = 0; i < sz; i++)
//		sum += arr[i];
//	printf("ƽ���ɼ���%0.2f", sum / sz);
//	printf("\n");
//}
//int main()
//{
//	float score[10] = { 95.5,81.2,74,75,91,59,69,74,88,67 };
//	float score1[5] = { 88,79,65,99,59 };
//	int sz = sizeof(score) / sizeof(score[0]);
//	int sz1 = sizeof(score1) / sizeof(score1[0]);
//	int i;
//	printf("�༶1ѧ���ɼ���");
//	for (i = 0; i < sz; i++)printf("%0.2f ", score[i]);
//	printf("\n");
//	printf("�༶2ѧ���ɼ���");
//	for (i = 0; i < sz1; i++)printf("%0.2f ", score1[i]);
//	printf("\n");
//	
//	//Alter(score);
//	/*printf("�޸ĺ�ѧ���ɼ���");
//	for (i = 0; i < 10; i++)printf("%0.2f ", score[i]);
//	
//	printf("\n");
//	printf("ƽ���ɼ���%0.2f", Average(score, sz));*/
//	printf("�༶1");
//	Average1(score,sz);
//	printf("�༶2");
//	Average1(score1, sz1);
//	return 0;
//}