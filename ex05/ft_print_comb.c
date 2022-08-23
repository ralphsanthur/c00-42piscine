#include <unistd.h>

void ft_putchar (char c)
{
	write (1, &c, 1);
}

void ft_print_comb (void)
{
	
	char a,b,c;
	
	a= '0';
	b= '1';
	c= '2';

	while (a <= '7')
	{
		while (b <= '8')
		{
			while (c <= '9')
			{
				ft_putchar (a);
				ft_putchar (b);
				ft_putchar (c);
				ft_putchar (' ');
				c++;

			}
		c = b + 2;	
		b++;
		}
	b = a + 1;	
	a++;
	}	
	ft_putchar ('\n');
}

int main ()
{
	ft_print_comb();
}
