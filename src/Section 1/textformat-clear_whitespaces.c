/*

 * word_counter.c
 *
 *  Created on: 27 dic. 2016
 *      Author: juanostroski
 */

#include <stdio.h>

int main(int argc, char **argv) {

	int c, last_c;

	while( (c = getchar()) != EOF) {
		if(c == last_c && c == ' ') {
			;
		} else {
			putchar(c);
		}

		last_c = c;
	}
}
