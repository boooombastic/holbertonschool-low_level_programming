#include <stdio.h>

/**
 * print_menu - displays the calculator menu
 *
 * Return: void
 */
void print_menu(void)
{
	printf("Simple Calculator\n");
	printf("1) Add\n");
	printf("2) Subtract\n");
	printf("3) Multiply\n");
	printf("4) Divide\n");
	printf("0) Quit\n");
}

/**
 * print_div_result - prints floating-point result without trailing zeros
 * @res: result to format and print
 *
 * Return: void
 */
void print_div_result(double res)
{
	if (res == (long)res)
		printf("Result: %ld\n", (long)res);
	else
		printf("Result: %g\n", res);
}

/**
 * main - simple calculator entry point supporting all operations
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int choice;
	int a, b;
	int running = 1;

	while (running)
	{
		print_menu();
		printf("Choice: ");

		if (scanf("%d", &choice) != 1)
			break;

		if (choice == 0)
		{
			printf("Bye!\n");
			running = 0;
		}
		else if (choice >= 1 && choice <= 4)
		{
			printf("A: ");
			if (scanf("%d", &a) != 1)
				break;
			printf("B: ");
			if (scanf("%d", &b) != 1)
				break;

			if (choice == 1)
				printf("Result: %d\n", a + b);
			else if (choice == 2)
				printf("Result: %d\n", a - b);
			else if (choice == 3)
				printf("Result: %d\n", a * b);
			else if (choice == 4)
			{
				if (b == 0)
					printf("Error: division by zero\n");
				else
					print_div_result((double)a / b);
			}
		}
		else
		{
			printf("Invalid choice\n");
		}
	}

	return (0);
}
