#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}/*


int main()
{
	char a = 'a';
	while (a <= 'z')
	{
		ft_putchar(a);
		ft_putchar('\n');
		a++;
	}
	return (0);
}*\
