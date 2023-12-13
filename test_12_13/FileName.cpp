#define  _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>


int main()
{
	int a = 1;
	while (a--)
	{
		printf(":feds");
	}
	return 0;
}



//int main()
//{
//
//	char  arr1[108] = { 0 };
//	char  arr2[108] = { 0 };
//	scanf("%s%s", arr1, arr2);
//	int ans1[108] = { 0 };
//	int ans2[108] = { 0 };
//	int lens = strlen(arr1);
//	int lent = strlen(arr2);
//	for (int i = 0; i < 108; i++)
//	{
//		int a = 0, b = 0;
//		if (i < lens)
//			a = arr1[lens-1-i]-'0';
//		if (i < lent)
//			b = arr2[lent-1-i]-'0';
//		if (i != 0 && ans1[i- 1] > 9)
//		{
//			ans1[i] = a+b + 1;
//			ans2[i] = ans1[i] % 10;
//		}
//		else
//		{
//			ans1[i] = a + b ;
//			ans2[i] = ans1[i] % 10;
//		}
//		if (i > lens - 2 && i > lent - 2&&ans1[i]>9)
//			ans2[i] = ans2[i] + 10;
//		a = 0;
//		b = 0;
//	}
//	int a = (lens >= lent ? lens : lent);
//	for (int i = a - 1; i >= 0; i--)
//		printf("%d", ans2[i]);
//
//
//}