#include <stdio.h>

int main ()
{

    int sum = 0;
    for (int i=1; i <= 10; i++)
    {
        printf("1 * %d\n", i);
        sum = sum + i; 
        printf("sum = %d\n ", sum); 
    }
    printf("\nTotal: %d\n", sum);
    return 0;

}