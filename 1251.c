#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	char letras[1000], i;
	
	fgets(letras, 1000, stdin);

	for (i = 0; i < sizeof(letras); ++i)
	{
		printf("\n%d ", letras[i]);
		printf("%c ", letras[i]);
	}
	printf("\n");

	return 0;
}

/*
	char letras[] = {67, 69, 83, 65, 82}, i;
	for (i = 0; i < sizeof(letras); ++i)
	{
		printf("\n%d ", letras[i]);
		printf("%c ", letras[i]);
	}
	printf("\n");
*/	
