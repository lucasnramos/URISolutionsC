/*
A entrada tem várias linhas. A primeira tem um inteiro positivo N (1 ≤ N ≤ 100000). A seguir existem N linhas. Cada uma dessas N linhas tem um único inteiro não negativo T, que indica o número de As transcorridos até 2015 D.C. (0 ≤ T < 231).
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main ()
{
	int N, T, A, i;

	scanf("%d", &N );

	for (i = 0; i < N; i++) {
		scanf("%d", &T);
		if (2015 - T > 0) {
			A = 2015 - T;
			printf("%d D.C.\n", A);
		}
		else {
			A = (T + 1) - 2015;
			printf("%d A.C.\n", A);
		}
	}

	return 0;
}
