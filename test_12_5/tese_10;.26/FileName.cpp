#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<string.h>

int a, b, c, d;
int main()
{
	for (a = 10; a < 1001; a++)
	{
		if (a % 2 == 0 && a % 3 == 0 && a % 7 == 0)
			printf("%d\n", a);


	}
	return 0;
}