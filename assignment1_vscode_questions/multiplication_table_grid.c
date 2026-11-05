#include <stdio.h>

int main()
{
    int n, i, j;
    printf("enter a no.");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n; j++)
        {
            printf("%d", i*j);

            if(j < n)
            {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}