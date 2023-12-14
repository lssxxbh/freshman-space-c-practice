#define  _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define MX 1000000

int arr[MX + 10] = {0};
int arr1 [10000010] = { 0 };
int arr2[1010] = { 0 };

void bubsort(int arr[],int length)
{
	while (length--)
	{
		for (int i = 0; i < length; i++)
		{
			
			if (arr[i] > arr[i + 1])
			{
				int temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
			}
		}
	}
}

int main()
{
	int n,m;
	scanf("%d%d", &n,&m);
	for (int i = 0; i < n; i++)
		scanf("%d", arr + i);
	for (int i = 0; i < m; i++)
	{
		scanf("%d", arr2 + i);
		for (int j = 0; j < n; j++)
			if (arr[j] == arr2[i])
				arr1[i]++;
	}
	for (int i = 0; i < m;i++)
		printf("%d ", arr1[i]);
	
}





//int main()
//{
//	int n, m;
//	scanf("%d",& n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", arr + i);
//	}
//
//	bubsort(arr, n );
//	for (int i = 0; i < n ; i++)
//		printf("%d ", arr[i]);
//	return 0;
//}