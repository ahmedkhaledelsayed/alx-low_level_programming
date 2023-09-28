#include "main.h"
#include "0-binary_to_uint.c"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned int n;

    n = binary_to_uint("1100010");
    printf("final result = %u\n", n);
    return (0);
}