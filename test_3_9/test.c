#include <stdio.h>

void print(int arr[], int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
int main()
{
	int arr1[] = { 1,3,5,7,9 };
	int arr2[] = { 2,4,6,8,10 };
	
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	for (int i = 0; i < sz; i++)
	{
		int temp = 0;
		temp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = temp;
	}
	
	print(arr1,sz);
	printf("\n");
	print(arr2, sz);
	return 0;
}
//void print(int arr[], int sz)
//{
//	for (int i=0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//void Reverse(int arr[], int sz)
//{
//	int lift=0;
//	int right=sz-1;
//	
//	while (lift < right)
//	{
//		int temp;
//		temp = arr[lift];
//		arr[lift] = arr[right];
//		arr[right] = temp;
//		lift++;
//		right--;
//	}
//	
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Reverse(arr, sz);
//	print(arr, sz);
//	return 0;
//}