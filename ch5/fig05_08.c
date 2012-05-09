/* Fig 5.8: fig05_08.c
   Roll a six-sided die 6000 times */
#include <stdio.h>
#include <stdlib.h>

/* function main begins program execution */
int main( void )
{
   int frequency1 = 0; /* rolled 1 counter */
   int frequency2 = 0; /* rolled 2 counter */
   int frequency3 = 0; /* rolled 3 counter */
   int frequency4 = 0; /* rolled 4 counter */
   int frequency5 = 0; /* rolled 5 counter */
   int frequency6 = 0; /* rolled 6 counter */

   int roll; /* roll counter, value 1 to 6000 */
   int face; /*represents 1 roll of the die, value 1 to 6 */

   /* loop 6000 times and summarize results */
   for( roll =1; roll <= 6000; roll++ ) {

      face = 1 + ( rand() % 6 ); /* random number from 1 to 6*/

      /* determine face value and increment appropriate counter */
      if( face == 1 ) 
         ++frequency1;
      else if( face == 2 )
         ++frequency2;
      else if( face == 3 )
         ++frequency3;
      else if( face == 4 )
         ++frequency4;
      else if( face == 5 )
         ++frequency5;
      else ++frequency6;
   } /* end for */

   /* display results in tabular format */
   printf( "%s%13s\n", "Face", "Frequency" );
   printf( "   1%13d\n", frequency1 );
   printf( "   2%13d\n", frequency2 );
   printf( "   3%13d\n", frequency3 );
   printf( "   4%13d\n", frequency4 );
   printf( "   5%13d\n", frequency5 );
   printf( "   6%13d\n", frequency6 );

   return 0; /* indicates that the program ended successfully */

}  /* end function main */

/* square function definition returns square of parameter  */
int square( int y ) /* y is a copy of argument to function  */
{
   return y * y; /* returns square of y as an int */

} /* end function square */
