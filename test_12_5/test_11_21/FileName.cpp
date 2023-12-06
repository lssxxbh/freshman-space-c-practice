#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i <= n; i++)
	{
		for (int j = 1; j <= n-i ; j++)
		{
			printf(" ");
		}
		printf("*");
		for (int j = 1; j < 1 + i; j++)
			printf(" ");
		printf("*\n");


	}




}
