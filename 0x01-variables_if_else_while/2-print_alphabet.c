#include <stdio.h>
#include <stdlib.h>

/**
*main-Prints letters to lowercase
*
*Return:Always 0 (Success)
*/
int main(void)
{
    char c;
    
    for (c = 'a'; c <= 'z'; c++)
        putchar(c);
    
    putchar('\n');
    
    return 0;
}