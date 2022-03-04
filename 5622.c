#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>

int main()
{
	int a = 0;
	char arr[16];
	scanf("%s", arr);

	for (int i = 0; i < strlen(arr); i++)
	{
			if (arr[i] >= 65 && arr[i] <= 67)
			{
				a += 3;
			}
			else if (arr[i] >= 68 && arr[i] <= 70)
			{
				a += 4;
			}
			else if (arr[i] >= 71 && arr[i] <= 73)
			{
				a += 5;
			}
			else if (arr[i] >= 74 && arr[i] <= 76)
			{
				a += 6;
			}
			else if (arr[i] >= 77 && arr[i] <= 79)
			{
				a += 7;
			}
			else if (arr[i] >= 80 && arr[i] <= 83)
			{
				a += 8;
			}
			else if (arr[i] >= 84 && arr[i] <= 86)
			{
				a += 9;
			}
			else if (arr[i] >= 87 && arr[i] <= 90)
			{
				a += 10;
			}
		
		
	}
	printf("%d", a);
	return 0;
}
