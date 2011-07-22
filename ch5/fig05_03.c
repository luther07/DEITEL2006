/* Fig 5,3: fig05_03.c
   Creating and using a programmer-defined function	 */
#include <stdio.h>

int square( int y ); /* function prototype */

/* function main begins program execution */
int main( void )
{
   int x; /* counter */

   /* loop 10 times and calculate and ouput square of x each time  */
   for( x = 1; x <= 10; x++ ) {
      printf( "%d  ", square( x ) ); /* function call */
   } /* end for */  

   printf( "\n" );

   return 0; /* indicates that the program ended successfully */

}  /* end function main */

/* square function definition returns square of parameter  */
int square( int y ) /* y is a copy of argument to function  */
{
   return y * y; /* returns square of y as an int */

} /* end function square */
