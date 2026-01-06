#include <stdio.h>

int main()
{
    int n, i, flag = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n > 0)
        printf("The number is Positive.\n");
    else if (n < 0)
        printf("The number is Negative.\n");
    else
        printf("The number is Zero.\n");
    if (n % 2 == 0)
        printf("The number is Even.\n");
    else
        printf("The number is Odd.\n");
    if (n <= 1)
    {
        printf("The number is Not Prime.\n");
    }
    else
    {
        for (i = 2; i <= n - 1; i++)
        {
            if (n % i == 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
            printf("The number is Prime.\n");
        else
            printf("The number is Not Prime.\n");
    }

    return 0;
}
