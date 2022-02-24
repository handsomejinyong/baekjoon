#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>

int main()
{
    int avg = 0;
    int arr[1000] = { 0 };
    int a, b;
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        double per = 0;
        double cnt = 0;
        double add = 0;

        scanf("%d", &b);

        for (int j = 0; j < b; j++)
        {
            scanf("%d", &arr[j]);
            add += arr[j];
        }
        
        avg = add / b;
        
        for (int k = 0; k < b; k++)
        {
            if (arr[k] > avg)
            {
                cnt++;
            }
        }
        
        per = cnt /b;
        
        printf("%.3lf%%\n", per*100);
    }


    return 0;
}
