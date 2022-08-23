#include <unistd.h>

void ft_putchar(char c)
{
	write (1, &c, 1);
}

void ft_putnbr(int i)
{
	i[ ];
	int y;
	char x[ ];
	y = 0;
	while (i[y] == 48)
	{
		x[y] = i[y];
		ft_putchar (x[y]);
		y++;
	}
	x[(y - 1)] = 0;
}

int main()
{
	ft_putnbr(90);
}
		
			
