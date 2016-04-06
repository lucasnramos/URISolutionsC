#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main () {

	int X, Y, i, soma=0;

	scanf("%d%d", &X, &Y);

	/*verifica qual valor eh maior*/
	if (X < Y) {
		for (i = X; i <= Y; i++){
			if (i % 13 != 0){
				soma += i;
			}
		}
	}
	else {
		for (i = Y; i <= X; i++){
			if (i % 13 != 0){
				soma += i;
			}
		}
	}
	printf("%d\n", soma);

	return 0;
}
