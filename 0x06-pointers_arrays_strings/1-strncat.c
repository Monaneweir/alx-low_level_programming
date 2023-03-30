#include <stdio.h>
/**
 * _strcat -concatenates two strings using at most
 *
 * an inputted number of by tes from src. 
 *
 * @dest: The string to be appended upon. 
 *
 * @src: The string to be appended to dest. 
 *
 * @n : The number of bytes from src to be appended to dest. 
 *
 * Return: A pointer to dest. 
 */
char *_strncat(char *dest, char *src, int n);

{
  int index =0,dest-len=0;
  
  while(dest[index++])  
	 dest-len++;
  for( index =0;src[index]&& index<n; index++)
	  dest[dest-len++]=src[index];
  return[dest];
}
