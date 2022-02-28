#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	int windex[26] = { 0 };
	char word[1000000];
	int max = 0;
	char sol;
	scanf("%s", word);

	for (int i = 0; word[i] != '\0'; i++)
	{
		for (int j = 'A'; j <= 'Z'; j++)
		{
			if (j == word[i])
			{
				windex[j - 65]++;
			}
		}
		for (int k = 'a'; k <= 'z'; k++)
		{
			if (k == word[i])
			{
				windex[k - 97]++;
			}
		}
	}
	for (int i = 0; i < 26; i++)
	{
		if (windex[i] > max)
		{
			max = windex[i];
			sol = i+65;
		}
		else if (windex[i] == max)
		{
			sol = '?';
		}
	}
	printf("%c", sol);
	return 0;
}
