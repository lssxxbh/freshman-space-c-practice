#define  _CRT_SECURE_NO_WARNINGS 
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<algorithm>

typedef long long int ll;
#define MX 1000
int arr[MX + 10] = { 0 };
int arr1[MX + 10] = { 0 };

int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d%d", arr + i, arr1 + i);
	}
	for (int i = 0; i < n; i++)
	{
		if (arr[i] / arr1[i] == 1.0 * arr[i] / arr1[i])
			printf("possible\n");
		else
			printf("impossible\n");

	}

}













//struct fbs
//{
//	char name[50];
//	int worth;
//
//
//}person[100];
//
//ll fbnq(int n)
//{
//	if (n == 1)
//		return 1;
//	else if (n == 2)
//		return 2;
//	else
//		return fbnq(n - 1) + fbnq(n - 2);
//
//}
//
//int whws(int  n)
//{
//	int a = n;
//	while (a >9)
//	{
//		a /= 10;
//	}
//	if (a == n % 10)
//		return 1;
//	else
//		return 0;
//}
//
//int ld(int x, int y)
//{
//	if (x >= 10 && y >= 1.0 * x / 2)
//		return 3;
//	return 0;
//}
//
//void lxzc(char arr[])
//{
//	int len = sizeof(arr) / sizeof(arr[0]);
//	int ans=0;
//	for (int i = 0; i < len-1; i++)
//	{
//
//		if (arr[i]>= arr[i + 1])
//			ans++;
//	}
//	printf("%d", ans);
//}
//int main()
//{
//	char arr[MX] = { 0 };
//	scanf("%s", arr);
//	lxzc(arr);
//}



//int main()
//{
//	int n,ans=0;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//		scanf("%d", arr + i);
//	for (int i = 0; i < n; i++)
//		scanf("%d", arr1 + i);
//	for (int i = 0; i < n; i++)
//		ans += ld(arr[i], arr1[i]);
//	printf("%d", ans);
//}

//int main()
//{
//	int n;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%s", &person[i].name);
//		scanf("%d", &person[i].worth);
//	}
//	int a = person[0].worth ,ans=0;
//	for (int i = 0; i < n; i++)
//	{
//		if (person[i].worth >= person[ans ].worth)
//			ans = i;
//	}
//	printf("%s %d", person[ans].name,person[ans].worth);
//}




/*
int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", arr + i);
	std::sort(arr, arr + n);

	for (int i = 0; i < n; i++)
		printf("%d\n", arr[i]);
	return 0;
}
*/