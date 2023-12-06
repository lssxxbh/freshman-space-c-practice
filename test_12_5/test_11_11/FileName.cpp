#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	int  a, b, c, d,e,f,g;
	
	scanf("%d%d%d%d%d%d",&a,&b, &c, &d,&e,&f );
	g = (d - a) * 3600 + (e - b) * 60 + (f - c);
	printf("%d",g);
}
