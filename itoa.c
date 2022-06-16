#include <stdio.h>

char	*ft_itoa(int n)
{
	char	buffer[12];
	char	*res;
	long	nb;
	int		i;

	i = 0;
	nb = n;
	if (n < 0)
	{
		buffer[i] = '-';
		i++;
		nb *= -1;
	}
	while (n /= 10)
	{
		i++;
		//printf ("i == %d and n == %d\n", i, n);
	}	
	buffer[i + 1] = '\0';
	while (nb != 0)
	{
		buffer[i--] = ((nb % 10) + 48);
		nb /= 10;
	}
	res = buffer;
	return (res);
}

int	main(void)
{
	int	num = 2147483647;
	char *str = ft_itoa(num);
	printf ("int in str == %s\n", str);
	return (0);
}