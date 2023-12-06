#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

int  main()
{

int  arr[] = ;

	printf("%s", arr);

	return 0;
}





//int gys(int a)
//{
//	int b = 0;
//	 for(int i=100;i<1000;i++)
//	{
//		 if (a % i == 0 && i > b)
//			 b = i;
//	}
//	 return b;
//}
//
//int main()
//{
//	int a = 555555;
//	printf("%d", gys(a));
//
//}


//int main() 
//{
//	int a, b, c;
//	scanf("%d%d", &a, &b);
//	for (int i = a; i <=b; i++)
//	{
//		c = i;
//		while (c)
//		{
//			if (c % 10 - c % 100 / 10 == c % 100 / 10 - c % 1000 / 100&&c>=100)
//				c /= 10;
//			else
//				break;
//		}
//		if (c < 100)
//			printf("%d\n", i);
//	}
//
//	return 0;
//}











//int i,n;
//
//int eff(int arr[], int n, int length)
//{
//	int left = 0;
//	int right = length;
//	while (left <= right)
//	{
//		int middle = (left + right) / 2;
//		if (arr[middle] > n)
//		{
//			right = middle-1;
//		}
//		else if (arr[middle] < n)
//			left = middle+1;
//		else
//			return middle;
//	}
//		return -1;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,56,67,89 };
//	scanf("%d", &n);
//	int length = sizeof(arr) / sizeof(arr[0]) - 1;
//	int ret = eff(arr, n, length);
//	if (eff(arr, n, length) == -1)
//		printf("找不到");
//	else
//		printf("找到了，下标是%d",ret);
//	return 0;
//}