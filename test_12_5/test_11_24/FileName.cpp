#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>


int main()
{
	int a = 0, b = 0, n = 0,m=0;
	while (~scanf("%d%d\n", &a, &b))
	{
		n += b;
		m = ((a - b) > m ? a - b : m);
	}
	n += m;
	printf("%d", n);
}


//
//
//
//
//int main()
//{
//	long long int ans = 0;
//	long long int n,a=0,b=0;
//	scanf("%lld%lld", &a, &b);
//		if (a% 4 == 0 && a  % 100 != 0)
//			ans++;
//		if (a % 400 == 0)
//			ans++;
//		if (b % 4 == 0 && b  % 100 != 0)
//			ans++;
//		if (b % 400 == 0)
//			ans++;
//		ans = ans + (b - a - 1) / 4 - (b - a - 1) / 100 + (b - a - 1) / 400;
//	printf("%lld", ans);
//
//}