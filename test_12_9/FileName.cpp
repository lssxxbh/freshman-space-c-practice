#define  _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
typedef long long int ll;

int sfe(int n)
{
	int a=1;
	while (n/2)
	{
		a = a * 10 + n % 2;
		n = n / 2;
	}
	return a;
}


//int main()
//{
//	ll  a, b, v;
//	scanf("%lld%lld%lld", &a, &b, &v);
//	
//	ll n = v / (a - b);
//	if (n == 0)
//		printf("1");
//	else
//	{
//		while ( (n-1)* (a - b) + a >=v )
//		{
//			n--;
//		}
//		printf("%lld", n+1);
//	}
//	return 0;
//}




//int main()
//{
//	int n, a;
//	scanf("%d", &n);
//
//	int i = 1;
//	if (n == 1)
//	{
//		printf("4");
//		return 0;
//	}
//	else if(n==2)
//	{
//		printf("7");
//		return 0;
//	}
//	else 
//	{
//		while (1)
//		{
//			if (n > pow(2, i) - 2 && n <= pow(2, i + 1) - 2)
//			{
//				if (n - pow(2, i)+2 > pow(2, i - 1))
//				{
//					printf("7");
//					n = n - pow(2, i) + 2 - pow(2, i - 1);
//				}
//				else
//				{
//					printf("4");
//					n = n - pow(2, i) + 2;
//				}
//				int b = sfe(n);
//
//
//
//			}
//			else
//				i++;
//
//		}
//
//	}
//
//}



//int main()
//{
//	int n,a,b;
//	scanf("%d", &n);
//	for (int i = pow(n, 0.5); i >= 1; i--)
//	{
//		if (1.0 * n / i == (int)n/i);
//		{a = i;
//		b = n / i;
//		break;
//		}
//	}
//	printf("%d", 2*(a + b));
//
//
//	return 0;
//}



//int main()
//{
//
//	int n;
//	scanf("%d", &n);
//	int an, ans;
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &an);
//		int a = an;
//		while (a)
//		{
//			if (a % 10 != 0 && (a % 10) % 2 != 1)
//			{
//				break;
//			}
//			a /= 10;
//			if (a ==0)
//				ans = an;
//		}
//	}
//	printf("%08d", ans);
//
//	return 0;
//}


//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int ans = 0;
//	for (int i = 0; i < n; i++)
//	{
//		int a;
//		scanf("%d", &a);
//		ans += a;
//
//	}
//	printf("%d", ans);
//	return 0;
//}



//
//int main()
//{
//	ll n, ans = 0;
//	scanf("%lld", &n);
//	for (int i = 0; i < n; i++)
//	{
//		ans += pow(2, i);
//	}
//	printf("%lld", ans);
//
//
//	return 0;
//}


//
//int main()
//{
//	int n,ans=1;
//	scanf("%d", &n);
//	
//	for (int i = 1; i <= n; i++)
//	{
//		ans = ans * i;
//	}
//	printf("%d", ans);
//	return 0;
//}

//int main()
//{
//	double  n;
//	scanf("%lf", &n);
//	double m;
//	m = n;
//	while (fabs(m-cos(n))>=1e-6)
//	{
//		m = n;
//
//		n = cos(m);
//	}
//	printf("%lf", n);
//	return 0;
//}