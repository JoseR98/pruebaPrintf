#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	/**int len;
    //int len2;
    
	//len = _printf("Let's try to printf a simple sentence.\n");
    //len2 = printf("Let's try to printf a simple sentence.\n");

	_printf("Length:[%d, %i]\n", 6, 7);
    //printf("Length:[%d, %i]\n", len2, len2);
    //_printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
	//_printf("Len:[%d]\n", len);
    //printf("Len:[%d]\n", len2);

	//_printf("Character:[%c]\n", 'H');
	//printf("Character:[%c]\n", 'H');
	//_printf("String:[%s]\n", "I am a string !");
	//printf("String:[%s]\n", "I am a string !");
	_printf("String:[%d]\n", 12345);*/
	_printf("%c\n");
	_printf("hol%c %s %i\n",'a', "como estas?", 234);

	_printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
	_printf("String:[%d]\n", 12345);
	return (0);
}
