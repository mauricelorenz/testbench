#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	if (argc != 2)
		return(printf("Usage: program string\n"), 1);
	int	i = 0;
	printf("0x");
	while (argv[1][i])
	{
		printf("%x", argv[1][i]);
		i++;
	}
	printf("\n");
	return (0);
}