#include<stdio.h>

//int add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 3, b = 2;
//	int (*p)(int, int)=&add;
//	printf("1%d \n",add(a, b));
//	printf("2%p\n",*p);
//	printf("3%d\n",(*p)(2,3));
//	printf("4%d\n",*p);
//}
//int main()
//{
//	int arr[] = {1,2,3,4};
//	int(*p)[] = &arr;
//	char* p[5];
//	char*(*pa)[5] = &p;
//	return 0;
//}
//int main()
//{
//	const char* p = "abcdef";
//	*p = 'w';//´íÎó²Ù×÷
//	printf("%s",p);
//	return 0;
//}
//int check_sys()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	return *p;
//}
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("Ğ¡¶Ë´æ´¢\n");
//	}
//	else
//	{
//		printf("´ó¶Ë´æ´¢\n");
//	}
//}