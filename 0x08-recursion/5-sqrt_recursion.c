#include "main.h"

int actual_sqrt_recursion(int a, int x);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @a: number to calculate the square root of
 *
 * Return: the resulting square root
 */
int _sqrt_recursion(int a)
{
	if (a < 0)
		return (-1);
	return (actual_sqrt_recursion(a, 0));
}

/**
 * actual_sqrt_recursion - recurses to find the natural
 * square root of a number
 * @a: number to calculate the sqaure root of
 * @x: iterator
 *
 * Return: the resulting square root
 */
int actual_sqrt_recursion(int a, int x)
{
	if (x * x > a)
		return (-1);
	if (x * x == a)
		return (x);
	return (actual_sqrt_recursion(a, x + 1));
}

