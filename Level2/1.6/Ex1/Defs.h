/*
 * Objective:
 *   Header for Macro.c. I put two print macros in here: PRINT1(a) prints
 *   one int and PRINT2(a, b) prints two. The include guard makes sure the
 *   header only gets processed once, even if it's included more than once.
 */

#include <stdio.h>

/* Include guard so this file only gets processed once */
#ifndef DEFS_H
#define DEFS_H

/* Prints one int */
#define PRINT1(a) printf("Value of a: %d\n", a)

/* Prints two ints on the same line */
#define PRINT2(a, b) printf("Value of a: %d, Value of b: %d\n", a, b)

#endif /* DEFS_H */
