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
 * main - simple calculator entry point with menu loop and addition
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
		else if (choice == 1)
		{
			printf("A: ");
			if (scanf("%d", &a) != 1)
				break;
			printf("B: ");
			if (scanf("%d", &b) != 1)
				break;
			printf("Result: %d\n", a + b);
		}
		else if (choice < 0 || choice > 4)
		{
			printf("Invalid choice\n");
		}
	}

	return (0);
}
