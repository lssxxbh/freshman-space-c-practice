#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<Windows.h>

#include <iostream>
#include <algorithm>


using namespace std;
int a[1000009], b[1000009] = { 0 };
int main()
{

	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		b[a[i]]++;
	} for (int i = 1; i <= n; i++) {
		if (b[a[i]] == 1) {
			cout << a[i] << endl;
			return 0;
		}
	}cout << "0" << endl;
	return 0;
}