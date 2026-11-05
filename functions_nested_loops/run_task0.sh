#!/bin/bash
set -e

cd ~/holbertonschool-low_level_programming

mkdir -p functions_nested_loops
echo "# C - Functions, nested loops" > functions_nested_loops/README.md

cat << 'CFILE' > functions_nested_loops/main.h
#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);

#endif /* MAIN_H */
CFILE

cat << 'CFILE' > functions_nested_loops/_putchar.c
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
CFILE

cat << 'CFILE' > functions_nested_loops/0-putchar.c
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char str[] = "_putchar\n";
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);

	return (0);
}
CFILE

cd functions_nested_loops
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 0-putchar.c -o 0-putchar
./0-putchar
rm -f 0-putchar _putchar.c

cd ~/holbertonschool-low_level_programming
git add functions_nested_loops/
git commit -m "Task 0: print _putchar"
git push origin main
git push origin main:refs/heads/master -f
