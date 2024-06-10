#include "Matrix.h"

bool isDigits(string str) {
    return str.find_first_not_of("0123456789") == string::npos;
}

bool isBinary(string str) {
    return str.find_first_not_of("01") == string::npos;
}
