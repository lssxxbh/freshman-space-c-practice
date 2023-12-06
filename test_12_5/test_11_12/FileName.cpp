#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char ret = 0;
	int n,a,b;
	scanf("%d", &a);
	
	if (a / 100 == a % 10 + a % 100 / 10)
		printf("I'm safe!");
	else
		printf("Just run!");

	return 0;
}
	
