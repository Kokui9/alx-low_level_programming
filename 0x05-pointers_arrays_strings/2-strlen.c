#include <stdio.h>

/**
  *int__strlen - Returns the length of a string.
  * @str: The string to get the length of 
  * Return: The length of @str.
  */
int  size_t_strlen(const char *str)

{
    size_t length = 0;

    while (*str++)
    length++;    
    return (length);
}
