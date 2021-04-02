#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define M 10
#define N 10
int main()
{
    char arr[M][N] = { 0 };
    int m, n;
    scanf("%d %d", &m, &n);
    int i, j;
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%c", &arr[i][j]);

    for (j = 0; j < n; j++)
    {
        for (i = 0; i < m; i++)
        {
            printf("%c", arr[i][j]);
        }
    }


    return 0;
}

//#define N 10
//int main()
//{
//    int i, j, c;
//    scanf("%d", &c);
//    
//    int a[N][N] = { 0 };
//    for (i = 0; i < N; i++)// 控制行数
//        for (j = 0; j < N; j++) // 控制列数
//            scanf("%d", &a[i][j]);
//    for (i = 0; i < N; i++)
//        for (j = 0; j < i + 1; j++)
//            a[i][j] = 0;
//    for (i = 0; i < N; i++)
//    {// 控制行数
//        for (j = 0; j < N; j++) // 控制列数
//        {
//            printf("%d ", a[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}
//#define   N   10
//int main()
//{
//	int i, a[N] = { -5,4,9,15,28,45,66,89,100,180 }, k = -1, m = 0;
//	int low = 0, high = N - 1, mid;
//
//	for (i = 0; i < N; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//	scanf("%d", &m);
//	while (low <= high)
//	{
//		mid = (low + high) / 2;
//		if (m < a[mid])
//		{
//			high = mid - 1;
//		}
//		/***** 以下一行有错误 *****/
//		else if(m > a[mid])
//		{
//			low = mid+1;
//		}
//		/***** 以下一行有错误 *****/
//		else
//		{
//		k = mid;
//		break;
//		}
//	}
//
//	if (k >= 0)
//		printf("m=%d,index=%d\n", m, k);
//	else
//		printf("Not be found!\n");
//
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//
///********** Begin **********/
//
//int main()
//{
//    char arr[9][9] = { 0 };
//    int i = 0;
//    for (i = 0; i < 9; i++)//输入
//    {
//        scanf("%s", arr[i]);
//    }
//    printf("未排序：\n");
//    for (i = 0; i < 9; i++)//输出
//    {
//        puts(arr[i]);
//    }
//    for (i = 0; i < 9; i++)//排序
//    {
//        int j = 0;
//        for (j = 0;j< 8 - i; j++)
//        {
//            if (strcmp(arr[j], arr[j + 1]) > 0)
//            {
//                //arr[i]大
//                char temp[9] = { 0 };
//                strcpy(temp, arr[j]);
//                strcpy(arr[j], arr[j + 1]);
//                strcpy(arr[j + 1], temp);
//            }
//        }   
//    }
//    printf("排序：\n");
//    for (i = 0; i < 9; i++)//输出
//    {
//        puts(arr[i]);
//    }
//    //printf("%c", arr[0][0]);
//    return 0;
//}




/********** End **********/
//int main()
//{
//    int N;
//    char s[100][100];
//    int i;
//    int max_i, max_len = 0;
//    scanf("%d", &N);
//    for (i = 0; i < N; i++)
//    {
//        scanf("%s", s[i]);//输入
//    }
//    for (i = 0; i < N; i++)
//    {
//        int l = strlen(s[i]);
//        if (max_len < l)
//        {
//            max_len = l;
//            max_i = i;
//        }
//    }
//
//    printf("%s\n", s[max_i]);//输出最长字符串
//    return 0;
//}
