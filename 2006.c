/*
Dado o tipo de chá real e as respostas fornecidas, determinar o número de participantes que receberam a resposta correta.

Entrada
A primeira linha contém um inteiro T representando o tipo de chá (1 ≤ T ≤ 4). A segunda linha contém cinco inteiros A, B, C, D e E, que indica a resposta dada por cada competidor (1 ≤ A, B, C, D, E ≤ 4).

Saída
A saída contém um inteiro representando o número de concorrentes que obtiveram a resposta correta.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main () {
	int T, A, B, C, D, E, votos[6];

	printf("\ninforme cha correto\n");
	scanf("%d\n", T);

	printf("\ninforme participante 1\n");
	scanf("%d\n", A);
	printf("\ninforme participante 2\n");
	scanf("%d\n", B);
	printf("\ninforme participante 3\n");
	scanf("%d\n", C);
	printf("\ninforme participante 4\n");
	scanf("%d\n", D);
	printf("\ninforme participante 5\n");
	scanf("%d\n", E);

	return 0;
}
