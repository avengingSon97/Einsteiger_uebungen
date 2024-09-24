
#include <stdio.h>

int calculate (int points);
int main()
{

    int score = 0;
    //printf("Punktzahl: ");
    //scanf("%d", &score);
    //printf("%d\n", score);

    calculate (score);
  

}


int calculate  (int points)
{

    while (points < 401 || points > 0)
    {
        printf("Enter a number between 0 and 400: ");
        scanf("%d", &points);
        
        if(points >=350 && points <=400)
        {
            printf("Note: Sehr Gut\n");
            break;
        

        }else if (points <350 && points>=300)
        {
            printf("Note: Gut\n");
            break;
            

        }else if (points <300 && points>=250)
        {
            printf("Note: Befriedigend\n");
            break;


        }else if (points <250 && points>=200)
        {
            printf("Note: Genügend\n");
            break;


        }else if (points <200 && points>=0)
        {
            printf("Note: Durchgefallen\n");
            break;
        }else 
        continue;
    
    }
    return 0;
}



