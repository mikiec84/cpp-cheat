/*
# Generic

    Compile time variable type inference!
*/

#include "common.h"

int main() {
#if __STDC_VERSION__ >= 201112L
#if defined(__GNUC__) && __GNUC__ >= 4 && __GNUC_MINOR__ >= 9
#define typename(x) _Generic((x), \
    int:     "int", \
    float:   "float", \
    default: "other")

    int i;
    float f;
    void* v;
    assert(strcmp(typename(i), "int")   == 0);
    assert(strcmp(typename(f), "float") == 0);
    assert(strcmp(typename(i), "other") == 0);
#endif
#endif
}
