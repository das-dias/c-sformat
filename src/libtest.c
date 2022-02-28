#include "sformat.h"

int main(void)
{
    printf("This is a %s %s !\n", "formatted", "string");
    char* s = (char*) sformat("This is also a %s %s !! \n", "formatted", "string");
    printf("%s",s);
}