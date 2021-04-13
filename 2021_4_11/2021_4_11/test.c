#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int arr[10] = { 0 };
	int *p = arr;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + i) = 1;
	}
	return 0;
}

//int main()
//{
//	char a = 3;
//	char b = 127;
//	char c = a + b;
//	printf("%d\n", c);
//	return 0;
//	//int a = (int)3.14;
//	////int a = 11;
//	////a = a | (1 << 2);
//	////printf("%d\n", a);
//	////a = a&~(1 << 2);
//	////printf("%d\n", a);
//	//return 0;
//	//int a = 0;
//	//a = ~a;
//	//printf("%d\n", a);
//	////short s = 0;
//	////int a = 10;
//	////printf("%d\n", sizeof(s = a + 5));
//	////printf("%d\n", s);
//	//return 0;
//}
//判断一个数在内存中二进制为1的个数
//int main()
//{
//	int num = 0, count = 0, i = 0;
//	scanf("%d", &num);
//	for (i = 0; i < 32; i++)
//	{
//		if (1==(num&1))
//			count++;
//		num >>= 1;
//	}
//	printf("%d", count);
//	return 0;
//}
//void paixu(int *arr,int sz)
//{
//	int i = 0, flag = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j]>arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 1;
//			}
//		}
//		if (flag = 0)
//			break;
//	}
//}
//
//
//int main()
//{
//	int i = 0, sz = 0;
//	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	sz = sizeof(arr) / sizeof(arr[0]);
//	paixu(arr,sz);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0, j = 0;
//	int arr[3][4] = { { 1, 2, 3 }, { 4, 5 } };
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d]=%p ", i,j,&arr[i][j]);
//		}
//		putchar(10);
//	}
//	return 0;
//}