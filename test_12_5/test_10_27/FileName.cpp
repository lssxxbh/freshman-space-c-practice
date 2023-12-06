#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
long long int a, b, c,d,e,f;

int main()
{
	scanf("%lld%lld", &a, &b);
	c = a;
	d = b;
	while (d)
	{
		e = c % d;
		c = d;
		d = e;
	}
	f = 1;
	while(f % a || f % b)
	{
		f++;
	}

	printf("%lld %lld", c,f);
	return 0;
}