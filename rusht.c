
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		nb = nb % 10;
	}
	if (nb < 10)
		ft_putchar(nb + 48);
}
void	calc_digits(int nb)
{
	int i;

	i = 0;

	while (nb > 0)
	{
		nb / 10;
		i++;
	}

	print("number %i", i);
}