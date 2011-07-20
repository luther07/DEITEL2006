/* Fig 3.13: fig03_13.c
   Preincrementing and postincrementing	 */
#include <stdio.h>

/* function main begins program execution */
int main( void )
{
   int c;    /* define variable */

   /* demonstrate post-increment */
   c = 5;                  /* assign 5 to c */
   printf( "%d\n", c );    /* print c */
   printf( "%d\n", c++ );  /* print c then postincrement */
   printf( "%d\n", c );    /* print c */

   /* demonstrate pre-increment */
   c = 5;                  /* assign 5 to c */
   printf( "%d\n", c );    /* print c */
   printf( "%d\n", ++c );  /* preincrement then print c */
   printf( "%d\n", c );    /* print c */

   return 0; /* indicates that the program ended successfully */

}  /* end function main */
