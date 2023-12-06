#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int main()
{
int  n,a,b,c;
	a = b = c=0;
	scanf("%d%d",&a,&b);
	if (abs(a) <= abs(b))
	{
		if (a * b < 0)
			c = 1 + abs(abs(a) - abs(b));
		else if (a < 0 && b < 0)
			c = 1 + abs(abs(a) - abs(b)) + 1;
		else
			c = abs(abs(a) - abs(b));
	}
	else
	{
		if (a > 0 && b <= 0)
			c = 1 + abs(abs(a) - abs(b));
		else if (a < 0 && b>=0)
			c = abs(abs(a) + abs(b));
		else if (a <= 0 && b <= 0)
			c = abs(abs(a) - abs(b));
		else if (a > 0 && b >= 0)
			c = abs(abs(a) + abs(b)) + 1;
	}
	printf("%d", c);
}