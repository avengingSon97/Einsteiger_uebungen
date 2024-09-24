#include <stdio.h>

int main (void)
{
    int min = 0;
    int max = 0;
    
    printf("Enter a number as min: ");
    scanf("%d", &min);

    printf("Enter a number as max: ");
    scanf("%d", &max);

    for (int i = min; i <= max; i++)
    {
        printf("%d\n", i);
    }

}

