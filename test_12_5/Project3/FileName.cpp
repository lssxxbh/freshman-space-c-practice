#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<string.h>

int ys(int m, int n)
{
	int r;
	while (r = m % n)
	{
		m = n;
		n = r;
	}
	return n;
}


int main()
{
	long long int a, b, c, f, m, n;
	scanf("%lld%lld%lld", &a, &b,&c);
	m= a / b;
	n= a / c;	
	m = ys(n, m);
		f = (a/b) * (a/c) / m;
		n = b - (c - a / f);
	printf("%lld %lld", a/b,n);
	return 0;
}