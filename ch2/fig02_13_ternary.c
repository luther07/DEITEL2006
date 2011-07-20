/* Fig. 2.13: fig02_13.c
   Using if statements, relational
   operators, and equality operators */
#include <stdio.h>

/* function main begins program execution */
int main( void )
{
   int num1; /* first number to be read from user */
   int num2; /* second number to be read from user */

   printf( "Enter two integers, and I will tell you\n" );
   printf( "the relationship they satisfy: " );

   scanf( "%d%d", &num1, &num2 ); /* read two integers */

   
   printf( "%d is %s equal to %d\n", num1, num1 == num2 ? "" : "not", num2 );
   /* conditional operator (?:) */

   printf( "%d is %s than %d\n", num1, num1 > num2 ? "greater" : "less", num2 );
   /* conditional operator (?:) */

   printf( "%d is %s than or equal to %d\n", num1, num1 >= num2 ? "greater" : "less", num2 );
   /* conditional operator (?:) */

   return 0;   /* indicate that program ended successfully */

} /* end function main */
