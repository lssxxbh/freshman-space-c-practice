#define  _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>


#define MX 200000
typedef long long int ll;


ll  arr[MX+10] = { 0 };
ll	arr1[MX + 10] = { 0 };
ll	arr2[MX + 10] = { 0 };




int main()
{

	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%lld", arr + i);
		arr1[i] = arr[i];
	}
	int	len = n;
		while (len--)
		{
			for (int i = 0; i < len; i++)
			{
				if (arr[i] >arr[i + 1])
				{
				int tem = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = tem;
				}
			}
		}

}


//int main()
//{
//	int n;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%lld %lld", arr1 + i, arr2 + i);
//	}
//
//		int	len = n;
//		while (len--)
//		{
//			for (int i = 0; i < len; i++)
//			{
//				if (arr1[i] < arr1[i + 1])
//				{
//				ll tem = arr1[i];
//				arr1[i] = arr1[i + 1];
//				arr1[i + 1] = tem;
//				ll tem2 = arr2[i];
//				arr2[i] = arr2[i + 1];
//				arr2[i + 1] = tem2;
//				}
//
//
//				if (arr1[i] == arr1[i + 1]&&arr2[i]>arr2[i+1])
//				{
//					ll tem = arr1[i];
//					arr1[i] = arr1[i + 1];
//					arr1[i + 1] = tem;
//					ll tem2 = arr2[i];
//					arr2[i] = arr2[i + 1];
//					arr2[i + 1] = tem2;
//				}
//			}
//		}
//
//	
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = i; j >=0; j--)
//		{
//			if ( arr2[j] < arr2[i])
//				arr[i]++;
//
//		}
//	}
//	for (int i = 0; i < n; i++)
//		printf("%lld\n", arr[i]);
//
//}




//int main()
//{
//
//	int n;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//		scanf("%lld", arr + i);
//	int	len = n;
//		while (len--)
//		{
//			for (int i = 0; i < len; i++)
//			{
//				if (arr[i] > arr[i + 1])
//				{
//				int tem = arr[i];
//				arr[i] = arr[i + 1];
//				arr[i + 1] = tem;
//				}
//			}
//		}
//		printf("%lld", arr[n / 2]);
//}



//int main()
//{
//	int n;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//		scanf("%lld", arr + i);
//
//		int len = n;
//	while (len--)
//	{
//		for (int i = 0; i < len; i++)
//		{
//			if (arr[i] > arr[i + 1])
//			{
//				int tem = arr[i];
//				arr[i] = arr[i + 1];
//				arr[i + 1] = tem;
//			}
//		}
//	}
//	int j = 0,k;
//	for (int i = 0;; i++)
//	{
//		arr1[i] = arr[j];
//		while (j<n )
//		{
//			if (arr[j] != arr1[i])
//				break;
//			arr2[i]++;
//			j++;
//		}
//		k = i;
//		if (j == n)
//			break;
//	}
//	for (int i = 0; i <= k; i++)
//		printf("%d %d\n", arr1[i], arr2[i]);
//
//}





//
//int main()
//{
//	int n, m;
//	scanf("%d%d", &n, &m);
//	for (int i = 0; i < m - n + 1; i++)
//	{
//		arr[i] = n + i;
//		int a = 0,b=0,c=n+i ;
//		while (c)
//		{
//			a = a * 10 + c % 10;
//			c = c / 10;
//
//		}
//		arr2[i] = a;
//	}
//
//		int len = m-n+1;
//		while (len--)
//		{
//			for (int i = 0; i < len; i++)
//			{
//				if (arr2[i] > arr2[i + 1])
//				{
//					int tem = arr[i];
//					arr[i] = arr[i + 1];
//					arr[i + 1] = tem;
//					int tem2 = arr2[i];
//					arr2[i] = arr2[i + 1];
//					arr2[i + 1] = tem2;
//				}
//			}
//		}
//
//
//
//		for (int i = 0; i < m - n + 1; i++)
//			printf("%d\n", arr[i]);
//
//
//
//}
//
//
////int main()
////{
////	int n;
////	scanf("%d", &n);
////	for (int i = 0; i < n; i++)
////		scanf("%d", arr + i);
////	int len = n;
////	while (len--)
////	{
////		for (int i = 0; i < len; i++)
////		{
////			if (arr[i] > arr[i + 1])
////			{
////				int tem = arr[i];
////				arr[i] = arr[i + 1];
////				arr[i + 1] = tem;
////			}
////		}
////	}
////
////	for (int i = 0; i < n; i++)
////		printf("%d ", arr[i]);
////}