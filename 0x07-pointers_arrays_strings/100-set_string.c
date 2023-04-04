#include "main.h"

/**
 * set_string - sets value of pointer to char
 * @s: pointer to pointer that we need to set to
 * @to: string to set
 */
void set_string(char **s, char *to)
{
	*s = to;
}
