/* Fig 2.1: fig02_01.c
	A first program in C */
#include <stdio.h>

/* function main begins program execution */
int main( void )
{
   int y = 5;
   int *yPtr = &y;

   printf( "Welcome to C!\n" );
   printf( "Integer y equals %d\n" , y); /* print y */
   printf( "Pointer yPtr points to address: %p\n", yPtr); /* print the hex address stored in variable yPtr */
   printf( "The value stored at yPtr's address is: %d\n", *yPtr); /* print value stored in the address that yPtr contains */

   return 0; /* indicates that the program ended successfully */

}  /* end function main */
