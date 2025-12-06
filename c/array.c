#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int x[100] = {[4] = 10, [89] = 50};
	for (int i = 0; i < 100; i++)
		printf("%i, ", x[i]);
	printf("\n");
	return (0);
}