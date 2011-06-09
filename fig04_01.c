/* Fig 4.1: fig04_01.c
   Counter-controlled repitition	 */
#include <stdio.h>

/* function main begins program execution */
int main( void )
{
   int counter = 1; /* loop counter initialization & initial value */

   while( counter++ <= 10 ) /* repitition condition */
      printf( "%d\n", counter ); /* end while */   

   return 0; /* indicates that the program ended successfully */

}  /* end function main */
