#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>

int han(int a);

int main()
{
	int num;
	scanf("%d", &num);

	printf("%d", han(num));
	return 0;
}

int han(int a)
{
	if (a < 100)
	{
		return a;
	}
	else if (a >= 100)
	{
		int i = 100;
		int cnt;
		cnt = 99;
		while (i <= a)
		{
			int dif1 = i / 100 - (i / 10) % 10;
			int dif2 = (i / 10) % 10 - i % 10;
			if (dif1 == dif2)
			{
				cnt++;
			}
			i++;
		}
		return cnt;
	}
}
