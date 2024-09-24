#include <stdio.h>

int main (void)
{
/*printf("Um diesen Text ausgeben zu koennen,"\
"muss ich das Escape Zeichen \ verwenden\n"
"und nach diesem Zeichen, die richtige Anweisung.\n");
*/

printf("Um diesen Text ausgeben zu koennen,\n"
"muss ich das Escape Zeichen \\ verwenden\n"
"und nach diesem Zeichen, die richtige Anweisung.\n");
}


// Without a \, special characters have a natural special meaning
// With a \ (e.g \\ to print one \; \n\ prints \n) the 
//special char
// is printed as they appear