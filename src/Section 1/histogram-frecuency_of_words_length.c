/*
 * histogram-frequency_of_words_length.c
 * Exercise 1-13 . Page 24
 *  Created on: 29 dic. 2016
 *      Author: juanostroski
 */

#include <stdio.h>

#define PALABRA_MAS_LARGA_ESP 23 // Random fact: electroencefalografista

int main()
{
	int lengths[PALABRA_MAS_LARGA_ESP];
	int longitud_de_palabra = 0, c;

	for (int i = 0; i < PALABRA_MAS_LARGA_ESP; ++i)
		lengths[i] = 0;

	while ( (c = getchar()) != EOF ) {
		//This parser is going to get fancier later with an array
		if( c == '\n' || c == '\t' || c == ' ' || c == ',' || c == '.') {
			lengths[longitud_de_palabra - 1]++;
			longitud_de_palabra = 0;
		} else {
			longitud_de_palabra++;
		}
	}

	// Let's print the results as a graph
	for (int i = 0; i < PALABRA_MAS_LARGA_ESP; ++i) {
		printf("Longitud %2d: ", i+1);
		for (int j = 0; j < lengths[i]; ++j) {
			putchar('|');
		}
		putchar('\n');
	}

}

/*
 * Ejemplo:
 * Había una vez un leñador y su esposa que vivían en el bosque en una humilde cabaña con sus dos hijos, Hänsel y Gretel. Trabajaban mucho para darles de comer pero nunca ganaban lo suficiente. Un día viendo que ya no eran capaces de alimentarlos y que los niños pasaban mucha hambre, el matrimonio se sentó a la mesa y amargamente tuvo que tomar una decisión.
 */
