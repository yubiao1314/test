#include<stdio.h>



void ini(int arr[],int sz)
{
	for (int i = 0; i < sz; i++)
	{
		arr[i] = 0;
	}
}
void print(int arr[], int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
void reverse(int arr[], int sz)
{
}
int main()
{
	int arr[10] = {0};
	int sz = sizeof(arr) / sizeof(arr[0]);
	ini(arr,sz);
	print(arr, sz);
	reverse(arr, sz);
	
	return 0;
}

//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = 3;
//	int* arr[] = { &a,&b,&c };
//	for (int i = 0; i < 3; i++)
//	{
//		printf("%d ", *(arr[i]));
//	}
//	return 0;
//}