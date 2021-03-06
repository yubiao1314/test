#include <stdio.h>

int my_strlen(char* str)
{
	int i;
	for (i = 0; *str!=0; str++)
	{
		i++;
	}
	return i;
}
int main()
{
	char arr[] = "bit";
	int len = 0;
	len = my_strlen(arr);
	printf("%d ", len);
	return 0;
}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9 };
//	printf("%d\n", &arr[9] - &arr[0]);
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//}

//int main()
//{
//	int arr[10];
//	int* p = arr;
//	for (int i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//	return 0;
//}