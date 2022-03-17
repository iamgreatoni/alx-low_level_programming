#include <stdio.h>

/**
* main - Prints natural numbers below 1024 that are
* multiplies of 3 or 5
*
* Return: Always 0.
*/
int main(void)
{
long int n1 = 0, n2 = 1, n3, i;
for (i = 2; i <= 51; ++i)
{
n3 = n1 + n2;
printf("%ld", n3);
if (i < 51)
printf(", ");
n1 = n2;
n2 = n3;
}
return (0);
}
