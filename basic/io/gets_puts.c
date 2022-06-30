#include <stdio.h>
#include <stdlib.h>

#define STRSIZE 32

int main()
{
    char str[STRSIZE];
    
    gets(str); //gets(): Dangerous! No check for buffer overrun is performed.Use fgets() instead.
    puts(str); 

    exit(0);
}