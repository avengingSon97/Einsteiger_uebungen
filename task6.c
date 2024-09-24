#include <stdio.h>

int main ()
{
    int num;

    while (num == 100 || num < 100 || num > 200)
    {
        printf("Enter a number between 0 and 200: ");
        scanf("%d", &num);

        if (num > 99 && num < 201)
        {
            printf("the provided number %d is greater than 99\n", num);
            return 0;
        }

    }
    return 0;
}



// return a + b