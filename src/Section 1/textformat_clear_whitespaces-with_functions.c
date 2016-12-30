/*
 * textformat_clear_whitespaces-with_functions.c
 * Ex 1.18. Pag 31
 *  Created on: 30 dic. 2016
 *      Author: juanostroski
 */

#include <stdio.h>

#define MAXLINESIZE 1000
#define EMPTY_LINE 0
#define IN_TRAILING 1
#define OUT_TRAILING 0

int removeTrailings(char[], int);
int getLine(char string[], int lim);


int main() {

	char line[MAXLINESIZE];
	int c, line_size;

	while( (line_size = getLine(line, MAXLINESIZE)) != EOF ) {
		if(line_size == EMPTY_LINE) {
			;
		} else {
			removeTrailings(line, MAXLINESIZE);
			printf(line);
		}

	}
}

/* function for removing trailings of whitespace/tab/nlines
 * string is an input and output parameter
*/
int removeTrailings(char string[], int string_size) {
	#ifndef IN_TRAILING
	#define IN_TRAILING 1
	#define OUT_TRAILING 0
	#endif

	int c, i_not_trailing;
	int state;

	for(int i = i_not_trailing = 0; i < string_size; i++) {
		c = string[i];
		if ( c == ' ' || c == '\n' || c == '\t' ) {
			if(state == IN_TRAILING) { // If the state was already trailing some whitespace/tab/nline...
				; // we'll move forward and ignore this char
			} else {
				// Then there was just one whitespace/tab/nline and c is a character
				string[i_not_trailing++] = string[i];
				state = IN_TRAILING;
			}
		} else {
			string[i_not_trailing++] = string[i];
			state = OUT_TRAILING;
		}

	}

	return 1;
}

int getLine(char string[], int lim) {
	int c,i;

	for( i = 0; i<lim-1 && (c = getchar()) != EOF && c != '\n'; i++)
		string[i] = c;

	if (c == '\n') {
		string[i] = c;
		i++;
	}

	string[i] = '\0';
	return i;

}
