#include <stdio.h>

int main()
{
    int n, i, j;
    printf("enter a no.");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        // Print leading spaces
        for(j = 1; j < i; j++)
        {
            printf(" ");
        }

        // Print asterisks
        for(j = 1; j <= 2*(n-i)+1; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}