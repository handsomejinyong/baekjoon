#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>

int main()
{
    char arr[80] = {'\0'};
    int n;
    int a = 0;
    int score = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {

        scanf("%s", arr);
        for (int j = 0; j < strlen(arr); j++)
        {
            if (arr[j] == 'O')
            {
                a++;
                score += a;
            }
            else if (arr[j] == 'X')
            {
                a = 0;
            }
        }

        printf("%d\n", score);
        score = 0;
        a = 0;
    }
    
    return 0;
}
