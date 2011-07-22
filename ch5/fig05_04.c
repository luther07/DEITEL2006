/* Fig 5.4: fig05_04.c
   Finding the maximum of three integers */
#include <stdio.h>

int maximum( int x, int y, int z ); /* function prototype */

/* function main begins program execution */
int main( void )
{
   int number1; /* first integer  */
   int number2; /* second integer  */
   int number3; /* third integer  */

   printf( "Enter three integers: " );
   scanf( "%d%d%d", &number1, &number2, &number3 );

   /* number1, number2, and number3 are arguments to the maximum
      function call */
   printf( "Maximum is: %d\n", maximum( number1, number2, number3 ) );

   return 0; /* indicates that the program ended successfully */

}  /* end function main */

/* maximum function definition returns square of parameter  */
int maximum( int x, int y, int z ) /* if y is larger than max, assin y to max  */
{
   int max = x; /* assume x is largest */

   if( y > max )
      max = y;
   if( z > max )
      max = z;

   return max;

} /* end function maximum */
