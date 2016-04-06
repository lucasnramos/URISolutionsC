#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int main ()
{
	int I, J1, c, J2;

	I = 1;
	J1 = 7;
	J2 = J1;

	for (c = 1; c <= 3; c++) {
		printf("I=%d J=%d\n", I, J2);
		J2--;
	}
	I+=2;
	J1+=2;
	J2 = J1;
	for (c = 1; c <= 3; c++) {
		printf("I=%d J=%d\n", I, J2);
		J2--;
	}
	for (c = 1; c <= 3; c++) {
		printf("I=%d J=%d\n", I, J2);
		J2--;
	}
	I+=2;
	J1+=2;
	J2 = J1;
	for (c = 1; c <= 3; c++) {
		printf("I=%d J=%d\n", I, J2);
		J2--;
	}
	for (c = 1; c <= 3; c++) {
		printf("I=%d J=%d\n", I, J2);
		J2--;
	}
	I+=2;
	J1+=2;
	J2 = J1;
	for (c = 1; c <= 3; c++) {
		printf("I=%d J=%d\n", I, J2);
		J2--;
	}
	for (c = 1; c <= 3; c++) {
		printf("I=%d J=%d\n", I, J2);
		J2--;
	}
	I+=2;
	J1+=2;
	J2 = J1;
	for (c = 1; c <= 3; c++) {
		printf("I=%d J=%d\n", I, J2);
		J2--;
	}
	return 0;
}
