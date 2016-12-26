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

	int fahr = 0, celsius;

	int min, max, step;

	min = 0;
	max = 300;
	step = 20;

	while ( fahr <= max ) {
		celsius = 5 * (fahr-32) / 9;
		printf("%d\t%d\n", fahr, celsius);
		fahr = fahr + step;

	}

	return 1;
}
