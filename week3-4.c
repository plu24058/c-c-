#include <stdio.h>

int main()
{
    int temp;
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);

    temp = b;
    while (temp != 0)
    {
        printf("%d\n ", a*(temp%10));
        temp /= 10;
    }
    printf("%d\n", a*b);
}
