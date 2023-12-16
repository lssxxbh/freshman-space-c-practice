#define  _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#define MX 1000


#include<iostream>
#include<iomanip>
	using namespace std;
	int main()
	{
		int n;
		cin >> n;
		if (n > 14)
		{
			cout << "qingnianzu";
		}
		else if (n > 10)
		{
			cout << "shaonianzu";
		}
		else
		{
			cout << "ertongzu";
		}


		return 0;
	}




//int main()
//{
//	char  arr1[15] = { 0 };
//	int x, y, m, n,a=0,b=0,ans=0;
//	scanf("%d%d%d%d", &x, &y, &m, &n);
//	
//	for (int i = 0; i < 10; i++)
//	{
//		scanf(" %c", arr1 + i);
//
//		if (arr1[i] == 'E'&&a<(m-x))
//		{
//			a++;
//			
//		}
//		else if (arr1[i] == 'N'&&b<(n-y ))
//		{
//			b++;
//		
//		}
//		else if (arr1[i] == 'S'&&b>(n-y ))
//		{
//			b--;
//		
//		}
//		else if (arr1[i] == 'W'&&a>(m-x ))
//		{
//			a--;
//		
//		}
//		ans++;
//		if (a ==m -x&&b==n-y)
//		{
//			printf("%d",ans);
//			return 0;
//		}
//	}
//		printf("-1");
//	return 0;
//}