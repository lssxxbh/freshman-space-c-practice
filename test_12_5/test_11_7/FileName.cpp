#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
	int n,l,a=0,b=0,c=0,d;
	scanf("%d", &n);
	int arr[100000];
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &arr[i-1]);

	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			a = arr[j] - arr[i];
			if (a >= b && j > i)
				b = a;
		}
	}
	
	printf("%d", b );
}