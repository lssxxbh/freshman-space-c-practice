#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int a, b, c,i;
int main()
{
	 char arr1[] = "hello";
	 char arr2[] = { "hello" };
	 printf("%c\n", arr1[2]);
	 printf("%c", arr2[0]);


	return 0;



}













//int main()
//{
//	int a;
//	int b = 1;
//	scanf("%d", &a);
//	for (a; a; a--)
//		b = a * b;
//	printf("%d", b);
//
//	return 0;
//
//
//
//}



//int a, b ;
//double c;
//int main()
//{
//	scanf("%d%d", &a, &b);
//	if (b != 0)
//	{
//		if (a <= 3)
//			c = 9;
//		else if (a > 3 || a <= 6)
//			c = 9 + (a - 3) * 1.5;
//		else
//			c = 13.5 + (a - 6) * 2.25;
//	}
//	else
//		if (a <= 3)
//			c = 9;
//		else if (a > 3 || a <= 6)
//			c = 9 + (a - 3) * 1.75;
//		else
//			c = 9+3*1.75+ (a - 6) * 2.5;
//	printf("%.2lf", c);
//
//
//
//}
//
//









//
//int main()
//{
//	double a, b, c = 0;
//	scanf("%lf%lf%lf", &a, &b,&c);
//	printf("%1.f   ", a);
//	int d,e;
//	d = ceil(c / b);
//	e = a - d;
//	if (e <= 0)
//		printf("0");
//	else
//		printf("%d",e);
//	return 0;
//
//}




/*int n;
int main()
{
	int a = 0,b=0,c=0,d=0,i=0;
	int arr[32768];
	scanf("%d", &n);
	while (i<=(n-1))
	{
		scanf("%d", &arr[i]);
		i++;
	}
	i = 0;
		while (i <= n-1)
		{
			b = arr[i] / 4+arr[i] %4 /2;
			
			d = arr[i] / 2;
			c = arr[i] % 2;
			if (c ==1)
				printf("%d %d\n", 0,0);
			else
				printf("%d %d\n", b, d);
			i++;
		}
	return 0;
}
*/






/*
int main()
{
	printf("请输入密码:>");
	char password[20] = {0};
	scanf("%s", password);
	printf("请确认（Y/N）:>");
	int ch = 0;
	while (ch = getchar() != '\n')
	{
		;
	}
	int ret = 0;
	ret = getchar();
	if (ret == 'Y')
		printf("确认成功");
	else
		printf("确认失败");


	return 0;
}
*/