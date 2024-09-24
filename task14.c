#include <stdio.h>

int main (void)
{

    int a = 0;
    int b=0;
    int c=0;
    int sum = a + b + c;
    
    printf("Enter a number for a: ");
    scanf("%d", &a);

    printf("Enter a number for b: ");
    scanf("%d", &b);

    printf("Enter a number for c: ");
    scanf("%d", &c);

    int num = 0;
    while (sum < 1000000)
    {   
        sum = sum + a + b + c;
        
        printf("%d\n", sum);
         num ++;
        printf("\nNumber of iterations: %d\n", num); 
    }
    return 0;
}





