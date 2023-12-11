#define  _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

//typedef unsigned long long int ll;
#include <iostream>
#define MX 1000
using namespace std; 
long long int o[1000008] = {0};

int eff(long long int len, long long int arr[], long long int m)
{
	long long int left = 0, right=len -1, mid;
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (arr[mid] < m)
		{
			left = mid + 1;
		}
		else if (arr[mid] > m)
		{
			right = mid - 1;
		}
		else
			return 1;
	}
	if(left>right)
	return 0;
}

int main()
{
	long long int i, j, a, b, n, m, len;
	
	scanf("%lld%lld", &n, &m);
	for (i = 0; i <= n; i++)
	{
		scanf("%lld", o+i ); 
	}

	len = sizeof(o) / sizeof(o[i]);


	for (i = 1; i <= n; i++)
	{
		scanf("%lld", &b);
		int ans = eff(len, o, b);
		printf("%d ", ans);
	}
}

//int main()
//{
//	int n, a = 1, ans = 0;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		a = a * i;
//		while (a % 10 == 0)
//		{
//			ans++;
//			a = a / 10;
//		}
//		a = a % 10000000000;
//	}
//	printf("%d", ans);
//	return 0;
//}



//int main()
//{
//	int  m, n;
//	int ans=1;
//	scanf("%d%d", &m, &n);
//	for (int i = 1; i <= n; i++)
//	{		
//		ans = ans * m % 1000;
//	}
//	printf("%03d", ans);
//
//	return 0;
//}





//int main()
//{
//	ll  n, ans = 0,a=1;
//	scanf("%llu", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		ans += a;
//		a *= 2;
//	}
//	printf("%llu", ans);
//
//}