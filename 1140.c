#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void Maiuscula(char *);

int main()
{
	char vFrase[1100];
	int i, spc=0, Y=0, N=0;

	fgets(vFrase, 1100, stdin);

	/* loop while encerra programa quando usuário inserir '*' como input */
	while(vFrase[0]!='*')
	{
		spc = Y = N=0;
		/* variavel comp guarda a primeira letra + todas as letras em maiusculas*/
		Maiuscula(vFrase);
		/* loop em todos os elementos da string vFrase */
		for (i = 0; i < strlen(vFrase); i++)
		{

			if (vFrase[i] == 32)
			{
				spc++;
				if (vFrase[i+1]==vFrase[0])
				{
					Y++;
				}
			}
		}
		if (Y == spc)
			printf("Y\n");
		else
			printf("N\n");

		fgets(vFrase, 1100, stdin);
	}
	return 0;
}

void Maiuscula(char *p)
{
	int c=0;
	
	while (p[c] != '\0') /* '\0' = null */
	{
		p[c] = tolower(p[c]);
		c++;
	}
}
