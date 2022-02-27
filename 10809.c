#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>

int main()
{
	char arr[100] = { 0 };
	scanf("%s", arr);
	int arr2[200] = { 0 };

	for (int i = 97; i <=122; i++)
	{
		arr2[i] = -1;
	}

	for (int j = 0; j < strlen(arr); j++)
	{
		if(arr2[arr[j]]==-1)                  //중복 방지
        {
			arr2[arr[j]] = j;
        }
		
	}
	for (int k = 97; k <= 122; k++)
	{
		printf("%d ", arr2[k]);
	}
	return 0;
}
