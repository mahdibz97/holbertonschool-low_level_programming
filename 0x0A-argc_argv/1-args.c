#include <stdio.h>
/**
 * main - print number of arg
 * @argc: number of arg
 * @argv: dkf
 *
 * Return: zero
 */
int main(int argc, __attribute__((unused)) char **argv)
{
argc -= 1;
printf("%d\n", argc);
return (0);
}
