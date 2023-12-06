#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
	int a, n,k;
	scanf("%d", &n);
	k = 0;
	for (int i = 1000; i <= n; i++)
	{
		int a = i / 1000 % 10;
		int b = i / 100 % 10;
		int c = i / 10 % 10;
		int d = i  % 10;
		if (a % 2 != 0 && b % 2 != 0 && c % 2 != 0 && d % 2 != 0)
			k = k + i;
	}

	printf("%d", k);
	return 0;
}

	
		
