/* Fig 4.5: fig04_05.c
   Summation with for	 
   Requires: cc -lm fig04_06.c.
   Compile option of -lm. 
   I don't know why */
#include <stdio.h>

/* function main begins program execution */
int main( void )
{
   int sum = 0; /* initialize sum */
   int number;  /* number to be added to sum */

   /*initialization, repitition condition, and increment
     are included in the for statement header */
   for( number = 2; number <= 100; number += 2 ) {
      sum += number; /* add number to sum */
   } /* end for */  

   printf( "Sum is %d\n", sum ); /* output sum */

   return 0; /* indicates that the program ended successfully */

}  /* end function main */
