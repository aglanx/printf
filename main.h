#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>

/**
 * struct flags - struct
 * @plus: for the plus
 * @space: for the space
 * @hash: for the hash
 */

typedef struct flags
{
	int plus;
	int space;
	int hash;
} flags_t;

int _printf(const char *format, ...);

#endif /* MAIN_H */
