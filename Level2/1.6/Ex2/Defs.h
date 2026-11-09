/*
 * Level 2 - 1.6 Exercise 2 (Defs.h, extended from Exercise 1)
 * Keep PRINT1/PRINT2 and add MAX2(x,y) and MAX3(x,y,z), which return the
 * largest argument. MAX3 must use MAX2.
*/

#include <stdio.h>
#ifndef DEFS_H
#define DEFS_H

#define PRINT1(a) printf("Value of a: %d\n", a)
#define PRINT2(a, b) printf("Value of a: %d, Value of b: %d\n", a, b)
#define MAX2(x, y) ((x) > (y) ? (x) : (y))
#define MAX3(x, y, z) (MAX2(MAX2((x), (y)), (z)))


#endif /* DEFS_H */
