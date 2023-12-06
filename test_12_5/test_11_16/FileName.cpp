#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<stdlib.h>


int main()
{
	for (int i = 2; i <= 4; i++)
	{
		for (int j = i; j <= 6; j++)
		{
			for (int k = j; k <= 12; k++)
			{
				for (int l = k; l <= 42; l++)
				{
					if (1.000000 / i + 1.0000000 / j + 1.0000000 / k + 1.000000 / l -1<=0.00001&& 1.000000 / i + 1.0000000 / j + 1.0000000 / k + 1.000000 / l - 1 >= -0.00001)
						printf("%d %d %d %d\n", i, j, k, l);
				}
			}
		}
	}

}