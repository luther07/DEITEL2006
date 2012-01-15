/* Fig 2.1: fig02_01.c
	A first program in C */
#include <stdio.h>

/* function main begins program execution */
int main( void )
{
   int y = 5;
   int *yPtr = &y;

   printf( "Welcome to C!\n" );
   printf( "Integer y equals %d\n" , y ); /* print y */
   printf( "Pointer yPtr points to address: %p\n", yPtr ); /* print the hex address stored in variable yPtr */
   printf( "The value stored at yPtr's address is: %d\n", *yPtr ); /* print value stored in the address that yPtr contains */
   printf( "Change value held by y to 7...\n" ); /* output */

   y = 7;

   printf( "Integer y equals %d\n", y ); /* print y */
   printf( "Pointer yPtr points to address: %p\n", yPtr ); /* print the hex address stored in variable yPtr */
   printf( "The value stored at yPtr's address is: %d\n", *yPtr ); /* print value stored in the address that yPtr contains */

   printf( "What does it look like when you initialize a pointer to 0?\n" ); /* output */

   int *zeroPtr = 0; /* initialize pointer to 0 */

   printf( "Pointer zeroPtr points to address: %p\n", zeroPtr ); /* print the hex address stored in variable zeroPtr */
   // printf( "The value stored at zeroPtr's address is: %d\n", *zeroPtr ); /* seg fault */
   printf( "Trying to dereference a NULL pointer causes seg fault. Initializing to 0 is equivalent to initializing a pointer to NULL.\n" );

   printf( "What does it look like when you initialize a pointer to NULL?\n" ); /* output */

   int *nullPtr = NULL; /* initialize pointer to NULL */

   printf( "Pointer nullPtr points to address: %p\n", nullPtr ); /* print the hex address stored in variable zeropointer */
   // printf( "The value stored at nullPtr's address is: %d\n", *nullPtr ); /* seg fault */
   printf( "Trying to dereference a NULL pointer causes a seg fault.\n" );

   return 0; /* indicates that the program ended successfully */

}  /* end function main */
