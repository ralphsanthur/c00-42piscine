#include <unistd.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_numbers(void)
{
	char a = '1';
	while(a <= '9');
	{
	ft_putchar(a);
	ft_putchar('\n');
	a++;
	}
}

int main(void)
{
	ft_numbers();
}
