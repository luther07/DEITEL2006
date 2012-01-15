/* Fig. 7.14 fig07_14.c
   Attempting to modify a constant pointer to constant data */
#include <stdio.h>

int main( void )
{
   int x; /* define x */
   int y; /* define y */

   /* ptr is a constant pointer to a constant integer. ptr always
      points to the same location; the integer at that location
      cannot be modified */
   const int *const ptr = &x;

   *ptr = 7; /* error: *ptr is const; cannot assign new value */
   ptr = &y; /* error: ptr is const; cannot assign a new address */

   return 0; /* indicates successful termination */

} /* end main */
