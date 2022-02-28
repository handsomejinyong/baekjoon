#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>

int main()
{
	int cnt = 0;
	char sts[1000000] = { '\0' };
	gets(sts);

	if (sts[0] == ' ')
	{
		cnt = -1;
	}
	for (int i = 0; i < strlen(sts); i++)
	{
		if (sts[i] == ' ')
		{
			cnt++;

			if (sts[i + 1] == '\0')
			{
				cnt--;
			}
		}
		
	}
	printf("%d", cnt+1);
	return 0;
}
