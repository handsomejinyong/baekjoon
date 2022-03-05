#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>

int main()
{
	int a = 0;
	char arr[101];
	scanf("%s", arr);

	for (int i = 0; i < strlen(arr); i++)
	{
		a++;
	}
	for (int j = 0; j < strlen(arr); j++)
	{
		if (arr[j] == '=')
		{
			a--;
			if (arr[j - 1] == 'z' && arr[j - 2] == 'd')
			{
				a--;
			}
		}
		else if (arr[j] == '-')
		{
			a--;
		}
		if (arr[j] == 'j')
		{
			if (arr[j - 1] == 'l' || arr[j - 1] == 'n')
			{
				a--;
			}
		}
	}
	printf("%d", a);
	return 0;
}
