#include "main.h"

/**
*add: Adds integers
*Return: result(integer)
*/
int add(int a, int b)
{
    int res = a + b;
    return res;
}

/**
*sub: Subtracts two integers
*Return: result(integer)
*/
int sub(int a, int b)
{
    int res = a - b;
    return res;
}

/**
*mul: Multiplies integers
*Return: result(integer)
*/
int mul(int a, int b)
{
    int res = a * b;
    return res;
}

/**
*mod: modulus
*Return: result(integer)
*/
int mod(int a, int b)
{
    int res = a % b;
    return res;
}

/**
*div: Divides integers
*Return: result(integer)
*/
int div(int a, int b)
{
    if (b == 0)
        {
        return 0;
    }

    int res = a / b;
    return res;
}

