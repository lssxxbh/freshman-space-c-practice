#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

typedef unsigned long long int ll;

int main()
{
	int i=0,n = 0;
	char arr[100] = { 0 };
	scanf("%[^\n]", arr);


	for (int i = 0; arr[i] != '\0'; i++)
	{
		while (arr[i] <= '9' && arr[i] >= '0')
		{
			if (arr[i] <= '9' && arr[i] >= 0)
			{
				n = n * 10 + arr[i] - '0';
			}
			i++;
			if (!(arr[i] <= '9' && arr[i] >= '0'))
			{
				printf("%d\n", n);
				n = 0;
		
			}
		}
	}
	return 0;
}



//#define MX 1000
//using namespace std;
//long long int o[1000008] = { 0 };
//
//int eff(long long int len, long long int arr[], long long int m)
//{
//	long long int left = 0, right = len - 1, mid;
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] < m)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > m)
//		{
//			right = mid - 1;
//		}
//		else
//			return 1;
//	}
//	if (left > right)
//		return 0;
//}
//
//int main()
//{
//	long long int i, j, a, b, n, m, len;
//
//	scanf("%lld%lld", &n, &m);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%lld", o + i);
//	}
//
//	len = n;
//
//	for (i = 1; i <= m; i++)
//	{
//		scanf("%lld", &b);
//		int ans = eff(len, o, b);
//		printf("%d ", ans);
//	}
//}