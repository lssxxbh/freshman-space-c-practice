#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<time.h>

int main()
{
	int a, b;
	scanf("%d", &a);
	b = pow(a / 100, 3) + pow(a % 100 / 10, 3) + pow(a % 10, 3);
	if (b == a)
		printf("YES");
	else
		printf("N0");
	return 0;
}