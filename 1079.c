#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int main ()
{
	int N, i;
	float t1, t2, t3, MediaPonderada;

	printf("informe o numero de testes a serem executados:\n");
	scanf("%d", &N);

	for (i = 1; i <= N; i++) {
		scanf("%f", &t1);
		scanf("%f", &t2);
		scanf("%f", &t3);

		MediaPonderada = (t1*2 + t2*3+ t3*5)/10;

		printf("Media Ponderada do teste: %.1f\n", MediaPonderada);
	}

	return 0;
}
