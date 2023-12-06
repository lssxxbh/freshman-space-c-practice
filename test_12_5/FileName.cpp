#define  _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

double  dd(double n, double a)
{
	while(fabs(n-0.5 * (n + a / n))>=1e-5)
	{	n = 0.5 * (n + a / n);
	}
	return 0.5 * (n + a / n);
}



int main()
{ 
	double n=1;
	double a;
	scanf("%lf", &a);
	n=dd(n, a);
	printf("The square root of %.2lf is %.5lf", a,n);

}