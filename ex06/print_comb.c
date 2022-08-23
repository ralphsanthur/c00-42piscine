#include <unistd.h>

void f_putchar (char c)
{
	write (1, &c, 1);
}

int main ()
{
	int a, b;
	a = 0;
	b = 1;

	while (a < 99)
	{
		b = a + 1;
		
		while (b <= 99)
		{	
			f_putchar (48 + a/10);
			f_putchar (48 + a%10);
			f_putchar (' ');
			f_putchar (48 + b/10);
			f_putchar (48 + b%10);
			f_putchar (',');
			f_putchar (' ');
			b++;
		}
		a++;
	}
}
