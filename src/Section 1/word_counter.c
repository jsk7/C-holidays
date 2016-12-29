/*
 * word_counter.c
 *
 *  Created on: 27 dic. 2016
 *      Author: juanostroski
 */

#include <stdio.h>

#define IN 1
#define OUT 0

// Counts any sequence of chars that does not have any tabs, whitespaces or newlines in it

int main(int argc, char **argv) {

	int c, nl, nw, nc, state;

	state = OUT;
	nl = nw = nc = 0;

	while( (c = getchar()) != EOF ) {
		++nc;
		switch (c) {
			case '\n':
				++nl;
				state = OUT;
				break;
			case ' ':
				state = OUT;
				break;
			case '\t':
				state = OUT;
				break;
			default:
				state = IN;
				break;
		}

		if (state == OUT) {
			++nw;
		}

		/* Instead of the switch we could use the following (described in the book),
		 * I prefer the expressiveness of the switch
		 *
		if (c == '\n')
			++nl;
		if (c == ' ' || c == '\n' || c == '\t')
			state = OUT;
		else if (state == OUT) {
			state = IN;
			++nw;
		}
		*/
	}

	printf("Number of Lines: %d\n"
			"Number of Words: %d\n"
			"Number of Chars: %d\n", nl, nw, nc);
}

