/*
	N define o número de casos de teste

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main () {
	int n, i=1, sum=0, x, count;

  printf("Informe iteracoes: ");
  scanf("%d",&n);

	for (count = 0; count < n; count++)
	{
	  printf("Informe um numero: ");
	  scanf("%d",&x);
		i=1;
		sum=0;
	  while(i < x)
		{
	    if(x % i == 0)
			{
	      sum = sum + i;
			}
			i++;
	  }
	  if(sum == x)
	    printf("%d is a perfect number\n",i);
	  else
	    printf("%d is not a perfect number\n",i);
	}

	return 0;
}
