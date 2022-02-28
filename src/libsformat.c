/** **********************************
* *[author] Diogo André (git-hub : das-dias)
* *[date] 25-02-2022
* *[filename] sformat.c
* *[summary] String formatting library for ease of error logging.
* ************************************
*/
#include "sformat.h"
/**
* [name] sformat
* *[description] Formats an indefinite number of arguments into a returning string
* ?[input]
* @par format (const char*) : string containing the positions to
* @                             which the arguments will be formatted into
* @par ... (va_list) : list of arguments of any basic type to be formatted into string
* ![output]
* @par string (char*) : string resulting from  the formatting operation
*/
const char* sformat(const char* format, ...)
{   
    char* string;
    va_list args;
    va_start(args, format);
    if ( vasprintf(&string, format, args) < 0 )
        string = NULL;
    va_end(args);
    if(string)
        return string;
    else
        printf( "Incorrect formatting.");
    return NULL;
}