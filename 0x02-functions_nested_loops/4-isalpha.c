#include "holberton.h"
/**
 * _isaplha - tests whether a character is from the English alphabet.
 * @c: chararacter is an english character.
 * Return: 1 if the character is not an English character.
 * 0 if the character is not an english character.
 */
int _isalpha(int c)
{
	if ((c >= 'a" && c <= 'z') || (c >= 'A' && c <= 'z'))
		return (1);
	else
		return (0);

}
