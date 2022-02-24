#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int a;
    int b=0;
    int cnt = 0;
    int arr[42] = { 0 };
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a);
        arr[a % 42]++;
    }
    
    for (int k = 0; k <= 41; k++)
    {
        if (arr[k] > 0)
        {
            cnt++;
        }
    }
    printf("%d", cnt);

    
    return 0;
}
