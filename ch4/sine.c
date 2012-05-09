/*  sine_print.c
    Print a sideways sine wave pattern using ASCII characters

  Requires: cc -lm fig04_06.c.
   That is the -lm compile option for Linux/UNIX C Compilers.
   I don't know why.

    Outputs an 80-byte array of ASCII characters (otherwise
    known as a string) 20 times, each time replacing elements
    in the array with an asterisk ('*') character to create a
    sideways plot of a sine function.
*/

#include <stdio.h>          /* for I/O functions            */
#include <math.h>           /* for the sine function        */
#include <string.h>         /* for the memset function      */

int main()
{
    /* local variable declarations */
    int  i;                 /* loop index counter           */
    int  offset;            /* offset into output string    */
    char sinstr[80];        /* data array                   */

    /* preload entire data array with spaces */
    memset(sinstr,0x20, 80);
    sinstr[79] = '\0';      /* append string terminator     */

    /* print 20 lines to cover one cycle */
    for(i = 0; i < 20; i++) {
        offset = 39 + (int)(39 * sin(M_PI * (float) i/10));

        sinstr[offset] = '*';
        printf("%s\n", sinstr);
        /* print done, clear the character */
        sinstr[offset] = ' ';
    }
}
