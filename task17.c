#include <stdio.h>

int main ()
{


    for (int i = 1; i <= 50; i++)
    {
        if (i%2 == 0)
        {
            printf("%d\n", i);
        }
      /*  else if (i%5 == 0)
        {
            printf("%d\n", i);
        }*/
    }

    printf("\n");

    for (int i = 1; i <= 50; i++)
    {
        if(i%5 == 0)
        {
            printf("%d\n", i);
        }
    }
    return 0;


}


