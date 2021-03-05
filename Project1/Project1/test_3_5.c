#include <stdio.h>

int main()
{
	int arr[10];
	int* p = arr;
	for (int i = 0; i < 10; i++)
	{
		*(p + i) = 1;
	}
	return 0;
}