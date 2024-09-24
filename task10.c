
#include <stdio.h>

float Fläche();
float Umfang();
float main()
{
    char u;
    char a;

    printf("To calculate Umfang enter u; to calculate area enter a: ");
    scanf("%c", &u);

    printf("%c\n", u);

    if(u == 'u')
    {
        Umfang ();
        return 0;
    } if(u == 'a')
    {
        Fläche();
    }
}

float Fläche()
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

float Umfang()
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

// return a + b