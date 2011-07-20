/* Fig 4.9: fig04_09.c
   Using the do/while repitition statement */
#include <stdio.h>

/* function main begins program execution */
int main( void )
{
   int counter = 1; /* initialize counter */

   do {
      printf( "%d  ", counter ); /* display counter */
   } while( ++counter <= 10); /* end do...while */

   printf( "\n" ); /* newline character at the end of processing */

   return 0; /* indicates that the program ended successfully */

}  /* end function main */
