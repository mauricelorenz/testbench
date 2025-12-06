#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct{
	char	c;
	int		i;
} s_test;

int	main(void)
{
	s_test bla;

	bla.c = 'c';
	bla.i = 42;
	printf("%c %i\n", bla.c, bla.i);
	return (0);
}