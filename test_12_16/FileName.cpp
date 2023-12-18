#define  _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
typedef long long int ll;
#define MX 10

ll  arr[MX ] = { 0 };
ll  b[MX] = { 0 };
ll  a[MX] = { 0 };
ll  c[MX] = { 0 };
ll  d[MX] = { 0 };

int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%lld%lld%lld%lld", a + i, b + i, c + i, d + i);

	}
	for (int i = 0; i < n; i++)
	{
		int x=0;
		x = c[i] - b[i] * a[i];
		if (x <= 0)
			arr[i] = c[i] / a[i];
		else
			arr[i] = b[i] + x / (a[i] + d[i]);

	}
	for (int i = 0; i < n; i++)
		printf("%lld\n", arr[i]);

}

//int main()
//{
//	int n;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d%d", arr + i,b+i);
//	}
//	for (int i = 0; i < n; i++)
//	{
//		int m = b[i] - arr[i];
//		if (m >= 0)
//		{
//			if (m % 3 == 0)
//				a[i] = m / 3;
//			else if (m % 3 == 1)
//				a[i] = m / 3 + 2;
//			else
//				a[i] = m / 3 + 4;
//		}
//		else
//		{
//			if (m % 2 == 0)
//				a[i] = -m / 2;
//			else if (m % 2 == -1)
//				a[i] = -m / 2 + 3;
//		}
//	
//	}
//
//	for (int i = 0; i < n; i++)
//			printf("%d\n", a[i]);
//
//
//
//}

//int main()
//{
//	int n;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//	scanf("%d", arr+i);
//	}
//	for (int i = 0; i <= n; i++)
//		for (int j = -arr[i]; j <= arr[i]; j++)
//			for (int k = -arr[i]; k <= arr[i]; k++)
//			{
//				if(j*j+k*k<=arr[i]*arr[i])
//				b[i]++;
//			}
//	for (int i = 0; i < n; i++)
//		printf("%d\n", b[i]-1);
//
//}




//int main()
//{
//
//	int n, m, k;
//	int ans = 0, s=0;
//	int a;
//	scanf("%d%d%d", &n, &m, &k);
//	for (int i = 0; i < n; i++)
//	{
//		s = 0;
//		for (int j = 0; j < m; j ++)
//		{
//			scanf("%d", &a);
//			s = s + a;
//		}
//		if (s >= k)
//			ans++;
//	}
//	printf("%d", ans);
//
//
//}

//int main()
//{
//	int ans = 0;
//	int a, b;
//	scanf("%d%d", &a, &b);
//	for (int i = a; i <= b; i++)
//	{
//		if (i % 6 == 0 || i % 8 == 0)
//			ans++;
//	}
//	printf("%d", ans);
//}
//



//int main()
//{
//	int n,m,k,i=0;
//	scanf("%d", &n);
//	m  = n;
//	i = n;
//	while (m >= 3)
//	{
//		i =  m / 3+i;
//		m = m % 3 + m / 3;
//
//
//	}
//	printf("%d", i);
//}

//int main()
//{
//	int s=0,  x, n;
//	for(int i=1;i<10;i++)
//		for(int j=0;j<10;j++)
//			for(int k=0;k<10;k++)
//				for (int u = 1; u < 10; u++)
//					for(int y=0;y<10;y++)
//						{
//					        x = i * 100 + j * 10 + k;
//					        n = u * 1000 + u * 10 + j * 100 + y;
//							if (3 * x == 2 * n)
//								s++;
//
//							}
//	printf("%d", s);
//}

//int main()
//{
//	int n, m;
//	scanf("%d%d", &m, &n);
//	for(int i=0;i<=m/5;i++)
//		for (int j = 0; 
// j <= m / 3; j++)
//		{
//			int a = (m - 5 * i - 3 * j);
//			if (3 * a + i + j == n)
//				printf("%d %d %d\n", i, j, 3 * a);
//		}
//}


//int main()
//{
//	int a, b, c, d;
//	for(int i=1;i<=4;i++)
//		for(int j=1;j<=4;j++)
//			for(int x=1;x<=4;x++)
//				for (int y = 1; y <= 4; y++)
//				{
//					if ((i == 1) + (j == 4) + (x == 3) == 1 &&
//						(j == 1) + (i == 4) + (x == 2) + (y == 3) == 1 &&
//						(j == 4) + (i == 3) == 1 &&
//						(x == 1) + (y == 4) + (j == 2) + (i == 3) == 1)
//					{
//						printf("%d,%d,%d,%d", i, j, x, y);
//						return 0;
//				}
//
//				}
//
//}

//int main()
//{
//	ll  n,ans=1;
//	scanf("%lld", &n);
//	for (int i = 1; i < n; i++)
//	{
//		ans = (ans + n - i) * 2;
//
//	}
//	printf("The monkey got %lld peachs in first day.", ans);
//
//
//}