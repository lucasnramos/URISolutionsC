#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main ()
{
	int masc, fem, pares, N, caso=0, calcado;
	char e, letra;
	while (scanf("%d\n", &N) != EOF)
	{
		if (caso != 0)
			printf("\n");
		masc = fem = pares = 0;
		while(scanf("%d %c%c",&calcado,&letra,&e) == 3)
		{
			if (calcado == N)
			{
				pares++;
				if (letra == 77)
					masc++;
				else
					fem++;
			}
			if(e == '\n') break;
		}
		caso++;
		printf("Caso %d:\nPares Iguais: %d\nF: %d\nM: %d\n", caso, pares, fem, masc);
	}

	return 0;
}
