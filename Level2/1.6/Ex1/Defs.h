/*
 * Level 2 - 1.6 Exercise 1 (Defs.h)
 * Define the macros PRINT1(a) and PRINT2(a,b).
 * Guard against multiple inclusion.
*/
#include <stdio.h>
#ifndef DEFS_H
#define DEFS_H

#define PRINT1(a) printf("Value of a: %d\n", a)
#define PRINT2(a, b) printf("Value of a: %d, Value of b: %d\n", a, b)

#endif /* DEFS_H */
