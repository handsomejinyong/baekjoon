#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>

int f[10001];
int self(int a);


int main()
{
	for (int i = 1; i <= 10000; i++)
	{
		f[self(i)] = 1;
		if (!f[i])
		{
			printf("%d\n", i);
		}
	}
	return 0;
}

int self(int a)
{
	int res = a;
	if (a >= 1000)
	{
		res = res + a / 1000;
		a = a % 1000;
	}

	if (a >= 100)
		{
			res = res + a / 100;
			a = a % 100;
		}
	if (a >= 10)
		{
			res = res + a / 10;
			a = a % 10;                
		}
	

		return res = res + a;
 }
