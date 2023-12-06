#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int a;
	scanf("%d", &a);
	if (a%4 ==0  && a%100 !=0||a%400==0)
		printf("%d是闰年",a);
	else
		printf("%d不是闰年",a);
	return 0;
}




//int main()
//{
//	int a, b, c;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a + b > c && a + c > b)
//	{
//		if (a == b || a == c || b == c)
//		{
//			if (a == b &&b== c)
//				printf("equilateral triangle");
//			else
//				printf("isoceles triangle");
//		}
//		else
//			printf("triangle");
//	}
//	else
//		printf("non-triangle");
//}

//int main()
//{
//	int a, b, c;
//	scanf("%d%d",  &b, &c);
//	if (c >=60  && c <= 90&&b>=90&&b<=140)
//		printf("YES");
//	else
//		printf("NO");
//
//}



//int main()
//{
//	int a, b, c, d, e;
//	scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
//	if ((d - a) * (d - a) + (e - b) * (e - b) == c * c)
//		printf("On");
//	else if ((d - a) * (d - a) + (e - b) * (e - b) < c * c)
//		printf("In");
//	else
//		printf("Out");
//}


//int main()
//{
//	int a, b, c;
//	scanf("%d%d%d", &a, &b, &c);
//	if (c >= a && c <= b)
//		printf("YES");
//	else
//		printf("NO");
//
//}


//int main() 
//{
//	char ch;
//	ch = getchar();
//	if (ch >= 'a' )
//
//		printf("%d", ch - 'a' + 1);
//	else
//		printf("%d", ch - 'A' + 1);
//
//	return 0;
//}
//




//int main()
//{
//	printf("最多输入三次\n");
//	char password[20];
//	int i;
//	for (i = 1; i <= 3; i++)
//	{
//		printf("请输入密码>:");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("right");
//			break;
//		}
//	}
//	if (i > 3)
//		printf("error");
//
//}



//#include<stdio.h>
//#include<string.h>
//#include<Windows.h>
//#include<stdlib.h>
//
//int main()
//{
//	int i = 0;
//	char arr1[] = "#######################";
//	char arr2[] = "Welcome to qingdao !!!!";
//	int left = 0;
//	int right = strlen(arr2)-1;
//	while (left <= right)
//	{
//		arr1[left] = arr2[left];
//		arr1[right] = arr2[right];
//		left++;
//		right--;
//		printf("%s\n", arr1);
//		Sleep(1000);
//		system("cls");
//	}
//	return 0;
//
//}