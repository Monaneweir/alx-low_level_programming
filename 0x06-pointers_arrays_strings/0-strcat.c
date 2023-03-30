#include "main.h"
#include <stdio.h>

/**
 * _strcat - concat hates two strings
 * @dest; the destination string
 * @src ; the source string
 * Return; Apointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)

{
	int c,c2;

	c=0;

	while (dest[c])  
               c++;
	for (c2 =0; scr[c2];c2++)
		dest[c++]=src[c2];
	return[dest]
}

