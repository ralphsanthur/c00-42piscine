#include <unistd.h>

void    ft_putchar(char c)
{
	        write (1, &c, 1);
}


int main()
{
	char a = 'z';
	while (a >= 'a')
	{
		ft_putchar(a);
		ft_putchar('\n');
		a--;
	}
	return (0);
}
