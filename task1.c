#include <stdio.h>



int main(void)
{
    char name[128];
    
    printf("What is your name: ");
    scanf("%s", name);
    printf("My name is: %s\n", name);

}


 // no data type 'string'. Different ways to creaate a string
 // one where the 'string literal' is without out size
 //--> char str [].
 /*string literals assigned with predefined size. one
 extra char for the null character.
 do when the size n of the string is known.
 Here the string was assigned with a predefined size.
 128 char can be stored, spaces do count(?).
 in this case no & inside scanf --> & used to provide
 the address in the memory to scanf. Here the string is
 actually an array of char which already provides the address
 in memory to scanf. 
 */