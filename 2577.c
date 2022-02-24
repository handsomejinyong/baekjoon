#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



int main()
{
    int arr[10] = { 0 };
    int a, b, c;
    int num, n;
    scanf("%d %d %d", &a, &b, &c);
    num = a * b * c;

    while (num>0)
    {
        n = num % 10;
        arr[n]++;
        num /= 10;

    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", arr[i]);
    }
    
    return 0;
}
