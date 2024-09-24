
#include <stdio.h>

float main()
{
    float width = 0;
    float height = 0;

    printf("Enter width: ");
    scanf("%f", &width);
    printf("%.2f\n", width);

    printf("Enter height: ");
    scanf("%f", &height);
    printf("%.2f\n", height);

    printf("\nDie Berechnug des Umfangs erfolgt anhand"
    " der Formel (2*width)+(2*height). Das Ergebnis lautet ");
    printf("%.2f\n", (width*2) + (height*2));


}



// return a + b