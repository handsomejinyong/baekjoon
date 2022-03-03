#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>

int main()
{
	int ca, cb = 0;
	int arr[3] = { 0 };
	int arr2[3] = { 0 };
	int  a, b;
	scanf("%d %d", &a, &b);

	int i = 0;
	while (a != 0)
	{
		arr[i] = a % 10;
		a /= 10;
		i++;
	}
	
	i = 0;
	while (b != 0)
	{
		arr2[i] =b% 10;
		b /= 10;
		i++;
	}
	

	ca = 100*arr[0] + 10*arr[1] + arr[2];

	cb = 100*arr2[0] + 10*arr2[1] + arr2[2];

	if (ca > cb)
	{
		printf("%d", ca);
	}
	else
	{
		printf("%d", cb);
	}
	return 0;
}
