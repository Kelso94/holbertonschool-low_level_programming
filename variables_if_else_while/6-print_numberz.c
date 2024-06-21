include(stdio.h)

/**
 * main entry point 
 * Return Always 0
 */

int main(void)
{
	char a = '0';

	for (a = '0'; a <= '9'; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
