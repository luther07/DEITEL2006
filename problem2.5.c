/* Problem 2.5 Calculate the product 
   of three integers */
#include <stdio.h>

/* function main begins program execution */
int main( void )
{
   int x; /* first number to be input by user */
   int y; /* second number to be input by user */
   int z; /* third number to be input by the user */
   int sum;

   printf( "Enter three integers: " ); /* prompt */
   scanf( "%d%d%d" , &x, &y, &z );          /* read an integer */ 

   sum = x * y * z; /* assign total to sum */

   printf( "The product is %d\n", sum); /* print product */

   return 0; /* indicates that the program ended successfully */

}  /* end function main */
