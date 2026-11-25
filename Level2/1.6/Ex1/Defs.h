/*
 * Objective:
 *   Header file holding the print macros used by Macro.c.
 *   PRINT1(a)    prints one integer variable.
 *   PRINT2(a, b) prints two integer variables.
 *   The #ifndef/#define/#endif guard stops the header from being
 *   processed more than once if it is included several times.
 */

#include <stdio.h>     

/* Include guard: only process this header the first time it is included */
#ifndef DEFS_H
#define DEFS_H

/* Print a single int value; expands to one printf() call */
#define PRINT1(a) printf("Value of a: %d\n", a)

/* Print two int values on one line; expands to one printf() call */
#define PRINT2(a, b) printf("Value of a: %d, Value of b: %d\n", a, b)

#endif /* DEFS_H */
