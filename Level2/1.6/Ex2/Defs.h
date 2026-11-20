/*
 * Objective:
 *   Same header as Exercise 1, now with two max macros. MAX2(x, y) gives
 *   the larger of two values and MAX3(x, y, z) gives the largest of three.
 */

#include <stdio.h>

/* Include guard so this file only gets processed once */
#ifndef DEFS_H
#define DEFS_H

/* Prints one int */
#define PRINT1(a) printf("Value of a: %d\n", a)

/* Prints two ints on the same line */
#define PRINT2(a, b) printf("Value of a: %d, Value of b: %d\n", a, b)

/* Larger of x and y. I wrapped everything in parentheses so it still
   works if I pass in something like a + 1. */
#define MAX2(x, y) ((x) > (y) ? (x) : (y))

/* Largest of three: take the bigger of x and y, then compare it with z */
#define MAX3(x, y, z) (MAX2(MAX2((x), (y)), (z)))


#endif /* DEFS_H */
