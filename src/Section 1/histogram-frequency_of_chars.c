/*
 * histogram-frequency_of_chars.c
 * Exercise 1-14 . Page 24
 *  Created on: 29 dic. 2016
 *      Author: juanostroski
 */

#include <stdio.h>

#define TOTAL_LETRAS_EN_ABECEDARIO 26
// Nota, solamente contará caracteres estándares del inglés
// Nota2, de plus contará tanto mayus como minus


int main() {

	int caracteres[TOTAL_LETRAS_EN_ABECEDARIO];
	int c;

	for (int i = 0; i < TOTAL_LETRAS_EN_ABECEDARIO; ++i) {
		caracteres[i] = 0;
	}

	while( (c = getchar()) != EOF) {
		if(c >= 'a' && c <= 'z') {
			++caracteres[c - 'a'];
		} else if (c >= 'A' && c <= 'Z') {
			++caracteres[c - 'A'];
		}
	}

	for (int i = 0; i < TOTAL_LETRAS_EN_ABECEDARIO; ++i) {
		printf("%c: ",'A' + i );
		for (int j = 0; j < caracteres[i]; ++j) {
			putchar('|');
		}
		putchar('\n');
	}


}
