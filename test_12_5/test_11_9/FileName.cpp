#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int a, b;
    double c;
    scanf("%d+%d", &a,&b );
    c = b+a;
    printf("%.0lf", c);
    return 0;
}