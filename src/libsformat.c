/*
* ***************************************************************************
* *[author] Diogo André (git-hub : das-dias)
* *[date] 25-02-2022
* *[filename] libsformat.c
* *[summary] String formatting library for ease of error logging.
* MIT License

Copyright (c) 2022 Diogo André Silvares Dias

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
* ******************************************************************************
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