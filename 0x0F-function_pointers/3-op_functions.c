/*
 * File: 3-op_functions.c
 * Auth: Lawal Hamzat A
 */
#include "3-calc.h"
/**
  * op_add - adds two integers
  * @a: int to add
  * @b: int to add
  * Return: the sum of integers
  */

int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - subtracts two integers
  * @a: int to substract
  * @b: int to substract
  * Return: the difference of two integers
  */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
  * op_mul - multiplies two integers
  * @a: int to be multiplied
  * @b: int to be multiplied
  * Return: the product of integers
  */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
  * op_div - divide two integers
  * @a: int to be divided
  * @b: int to divide by
  * Return: the division of integers
  */

int op_div(int a, int b)
{
	return (a / b);
}
/**
  * op_mod - remainders of between two numbers
  * @a: int to be divided
  * @b: int to be divided by
  * Return: the mod of integers
  */

int op_mod(int a, int b)
{
	return (a % b);
}
