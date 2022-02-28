#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>

int main()
{
	int t;
	int s;
	int x;
	char arr[20] = { '\0'};
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		scanf("%d", &s);
		scanf("%s", arr);
		x = 0;
		for (int j = 0; j<strlen(arr); j++)
		{
			
			for (int k = 0; k < s; k++)
			{
				printf("%c", arr[x]);
				
			}
			x++;
			
		}
		printf("\n");
	}
	return 0;
}
//문자열 
