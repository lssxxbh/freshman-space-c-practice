#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n/2+1; i++)
	{
		for (int j = 1; j <= i; j++)
			printf("*");
		for (int j = 1; j <= n + 1 - 2 * i; j++)
			printf(" ");
		for (int j = 1; j <= i; j++)
			printf("*");
		printf("\n");
	}
	for (int i = n/2+2; i <= n  ; i++)
	{
		for (int j = 1; j <= n-i+1; j++)
			printf("*");
		for (int j = 1; j <= n+1 - 2 * (n-i+1); j++)
			printf(" ");
		for (int j = 1; j <= n - i+1; j++)
			printf("*");
		printf("\n");
	}

	return 0;
}