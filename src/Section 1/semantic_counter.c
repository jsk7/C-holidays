/*
 * count_lines.c
 *
 *  Created on: 27 dic. 2016
 *      Author: juanostroski
 */

#include <stdio.h>

int main(int argc, char **argv) {

	int c, nlines = 0, ntabs = 0, nspaces = 0;

	while(( c = getchar() ) != EOF) {
		switch (c) {
			case '\n':
				nlines++;
				break;
			case ' ':
				nspaces++;
				break;
			case '\t':
				ntabs++;
				break;
			default:
				break;
		}
	}

	printf("\nTotal de Lineas: %d"
			"\nTotal de Sangrias: %d"
			"\nTotal de Espacios: %d", nlines, ntabs, nspaces);
}

