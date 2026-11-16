/*
 * Objective:
 *   Header with the print macros from Exercise 1 plus MAX2(x, y), which
 *   gives the larger of two values, and MAX3(x, y, z), which gives the
 *   largest of three.
 *
 * Changes from previous version (1.6 Exercise 1):
 *   - Added MAX2(x, y).
 *   - Added MAX3(x, y, z), built from MAX2 as the exercise requires.
 */

#include <stdio.h>

/* Include guard */
#ifndef DEFS_H
#define DEFS_H

/* Print one int value */
#define PRINT1(a) printf("Value of a: %d\n", a)

/* Print two int values on one line */
#define PRINT2(a, b) printf("Value of a: %d, Value of b: %d\n", a, b)

/* Larger of x and y. The parentheses keep the macro correct when an
   argument is an expression such as a + 1. */
#define MAX2(x, y) ((x) > (y) ? (x) : (y))

/* Largest of x, y and z: the larger of x and y, compared with z */
#define MAX3(x, y, z) (MAX2(MAX2((x), (y)), (z)))


#endif /* DEFS_H */
