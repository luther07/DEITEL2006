/* Fig 4.6: fig04_06.c
   Calculating compound interest 
   Requires: cc -lm fig04_06.c.
   That is the -lm compile option for Linux/UNIX C Compilers.
   I don't know why. */
#include <stdio.h>
#include <math.h>

/* function main begins program execution */
int main( void )
{
   double amount;              /* initialize amount */
   double principal = 1000.0;  /* starting principal */
   double rate = .05;          /* annual interest rate */
   int year;                   /* year counter */

   /* output table column head */
   printf( "%4s%21s\n", "Year", "Amount on deposit" );

   /* calculate amount on deposit for each of ten years */
   for( year = 1; year <= 10; year++ ) {
      
   /* calculate new amount for specified year */
   amount = principal * pow( 1.0 + rate, year );

   /* output one table row */
   printf( "%d%21.2f\n", year, amount );
   } /* end for */  

   return 0; /* indicates that the program ended successfully */

}  /* end function main */
