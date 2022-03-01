# C-SFORMAT

Version: 1.0

SFormat, or "String Formatter", is a library written in C to allow the production of console-silent, "printf" style formatted strings.

## Dependencies:
- stdio.h (Standard C Input/Output Library)
- stdarg.h (Standard C variable function input parameter handling library)

## Examples:

### (Code Snippet) libtest.c:
```C
#include "sformat.h"

int main(void)
{
    printf("This is a %s %s !\n", "formatted", "string");
    
    /* declare a string using sformat */
    char* s = (char*) sformat("This is also a %s %s !! \n", "formatted", "string");

    /* and print it! :) */
    printf("%s",s);
}
```
### Output: 
```
This is a formatted string !
This is also a formatted string !! 
```
