#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
	double  a = 0;
	int n = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) 
	{
      if (i % 2 == 0)
	    a = a + 1.0 / i;
      else
		a = a +1.0/i;
	}
printf("%.3lf", a);
}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	char arr1[30]="\0";
//	for (int i = 0; i < 2 * n - 1; i++)
//	{
//		if (i == n - 1)
//			arr1[i] = '@';
//		else 
//		arr1[i] = '*';
//		}
//	printf("%s\n", arr1);
//	char arr2[30] = "\0";
//	for (int i = 0; i < 2 * n - 1; i++)
//	{
//			arr2[i] = '@';
//	}
//	int left = n-2;
//	int right =  n ;
//	while (left >=0)
//	{
//		arr1[left] = arr2[left];
//		arr1[right] = arr2[right];
//		printf("%s\n", arr1);
//		left--;
//		right++;
//	}
//}
//





