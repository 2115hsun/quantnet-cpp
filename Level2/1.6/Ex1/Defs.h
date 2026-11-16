/*
 * Objective:
 *   Header for Macro.c with two print macros: PRINT1(a) prints one int
 *   and PRINT2(a, b) prints two. The include guard stops the contents
 *   from being processed twice if the header is included more than once.
 */

#include <stdio.h>

/* Include guard */
#ifndef DEFS_H
#define DEFS_H

/* Print one int value */
#define PRINT1(a) printf("Value of a: %d\n", a)

/* Print two int values on one line */
#define PRINT2(a, b) printf("Value of a: %d, Value of b: %d\n", a, b)

#endif /* DEFS_H */
