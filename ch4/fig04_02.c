/* Fig 4.2: fig04_02.c
   Counter-controlled repitition with the for statement	 */
#include <stdio.h>

/* function main begins program execution */
int main( void )
{
   int counter; /* loop counter initialization */

   /*initialization, repitition condition, and increment
     are included in the for statement header */
   for( counter = 1; counter <= 10; counter++ ) {
      printf( "%d\n", counter );
   } /* end for */

   return 0; /* indicates that the program ended successfully */

}  /* end function main */
