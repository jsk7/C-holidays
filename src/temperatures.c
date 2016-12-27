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

#define MIN 0
#define MAX 300
#define STEP 20

int main(void) {

	int fahr = 0;

	printf("Fahrenheit\tCelsius \n");
	for (fahr = MAX; fahr >= MIN; fahr = fahr - STEP) {
		printf("%10d\t%7.2f \n", fahr, 5.0 * (fahr-32.0) / 9.0);
	}

	return 1;
}
