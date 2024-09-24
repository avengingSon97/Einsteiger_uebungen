#include <stdio.h>

int main ()
{
    int num;

    while (num  == 100 || num < 0)
    {
        printf("Enter a number between 0 and 99: ");
        scanf("%d", &num);

        if (num >= 0 && num < 100)
        {
            printf("the provided number %d is smaller than 100\n", num);

        }
        else if (num > 100)
        {
            printf("the provided number %d is NOT smaller than 100\n", num);
        
        }
        else
        {
            printf("provided number is exactly 100\n");
            continue;

        }
    }
    return 0;
}



