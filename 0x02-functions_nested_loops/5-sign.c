#include "main.h"
/**
 * print_sign - function to check for a sign of a number
 * @n: is the int that will use for the argument of the function
 * Return: 0
 */
int print_sign(int n)
{
if (n > 0)
{

putchar('+');
return (1);

}
else if (n < 0)
{

putchar(45);
return (-1);
}
else
{

putchar(48);
return (0);
}


}

