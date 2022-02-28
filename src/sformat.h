/** **********************************
* *[author] Diogo André (git-hub : das-dias)
* *[date] 25-02-2022
* *[filename] sformat.h
* *[summary] String formatting library for ease of error logging.
 ***********************************
*/
#ifndef SFORMAT_H
#define SFORMAT_H

#pragma once

#include <stdio.h>
#include <stdarg.h>

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
const char* sformat(const char*, ...);

#endif // !SFORMAT_H