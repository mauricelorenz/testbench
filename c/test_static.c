#include <stdio.h>

int	test_static(void)
{
	static int	x = 0;
	int			i;

	i = 0;
	while (i < 5)
	{
		i++;
		x++;
	}
	return (x);
}

int	main(void)
{
	int	x;
	int	y;

	x = test_static();
	y = test_static();
	printf("%i %i\n", x, y);
}
