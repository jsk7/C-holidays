/*
 ============================================================================
 Name        : C-holidays.c
 Author      : Juan Ignacio Biltes
 Version     : Exercise 1-15 . Page 27
 Copyright   : MIT
 Description : Temperaturas, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define MIN 0
#define MAX 300
#define STEP 20

double fahrToC(int);

int main(void) {

	int fahr = 0;

	printf("Fahrenheit\t Celsius \n");
	for (fahr = MAX; fahr >= MIN; fahr = fahr - STEP) {
		printf("%10d \t %7.2f \n", fahr, fahrToC(fahr));
	}

	return 0;
}

double fahrToC(int fahr) {
	return (5.0 * (fahr-32.0) / 9.0);
}
