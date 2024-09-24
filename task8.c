
#include <stdio.h>

float main()
{
    float a = 0;
    float b = 0;

    printf("Enter value for a: ");
    scanf("%f", &a);
    printf("%.2f\n", a);


    printf("Enter value for b: ");
    scanf("%f", &b);
    printf("%.2f\n", b);

    

    printf("\nDie Berechnug der Fläche erfolgt anhand"
    " der Formel a*b. Das Ergebnis lautet ");
    printf("%.2f\n", a*b);


}



// return a + b