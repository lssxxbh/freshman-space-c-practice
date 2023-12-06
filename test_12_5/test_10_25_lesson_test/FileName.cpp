#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>
int main()
{
	double a, b, c, p, s;
	printf("请输入三角形三边长：");
	scanf("%lf,%lf,%lf", &a, &b, &c);
	if (a > 0 && b > 0 && c > 0 && a + b > c && c + b > a && c + a > b)
	{
		p = (a + b + c) / 2;
		s = sqrt(p * (p - a) * (p - b) * (p - c)); 
		printf("三角形面积是%1f\n", s);
	}
	 else
	 printf("三个数不能构成三角形\n");
		return 0;
}















//#include<stdio.h>
//#include<math.h>
//#include<string.h>
//#include<time.h>
//
//int main()
//{
//	int arr[20] = { 0 };
//	int a, b, c;
//	scanf("%d",& a);
//	int i = 2;
//	for (c = 0;1; c++)
//	{
//		again:
//		for (i = 2; a % i != 0 && i < a; i++)
//		{
//		}
//		if (a % i == 0 && i < a)
//		{
//			b = a / i;
//			a = b;
//			printf("%d ", i);
//			i = 2;
//			goto again;
//		}
//		else {
//			printf("%d", a);
//			break;
//		}
//	}
//	
//}
