void	ft_putchar(char c);

void	ft_putline(char end, char fill, int hlength)
{
	ft_putchar(end);
	while (hlength > 2)
	{
		ft_putchar(fill);
		hlength--;
	}
	if (hlength == 2)
		ft_putchar(end);
	ft_putchar('\n');
}

void	rush(int x, int y)
{	
	int	vlength;

	vlength = y;
	if (x <= (0) || y <= (0))
	{
		return ;
	}
	while (vlength >= 1)
	{
		if (vlength == y || vlength == 1)
		{
			ft_putline('o', '-', x);
		}
		else
		{
			ft_putline('|', ' ', x);
		}
		vlength--;
	}
}
