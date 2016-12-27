/*
 ============================================================================
 Name        : C-holidays.c
 Author      : Juan Ignacio Biltes
 Version     :
 Copyright   : MIT
 Description : Temperaturas, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int fahr = 0;

	int min, max, step;

	min = 0;
	max = 300;
	step = 20;

	printf("Fahrenheit\tCelsius \n");
	for (fahr = max; fahr >= min; fahr = fahr - step) {
		printf("%10d\t%7.2f \n", fahr, 5.0 * (fahr-32.0) / 9.0);
	}

	return 1;
}
