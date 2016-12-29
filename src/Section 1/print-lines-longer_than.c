/*
 * print-lines-longer_than.c
 *
 *  Created on: 29 dic. 2016
 *      Author: juanostroski
 */

#include <stdio.h>
#define MAXLINESIZE 1000
#define MAXLENGTH 80

int getLine(char[], int);
void copy(char[], char[]);


int main() {

	char line[MAXLINESIZE];
	int lineSize;

	while( lineSize = getLine(line, MAXLINESIZE)) {
		if(lineSize > MAXLENGTH) {
			printf(line);
		}
	}

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

void copy(char to[], char from[]) {
	int i;
	i = 0;

	while( (to[i] = from[i]) != '\0') {
		i++;
	}
}

int isLongerThan(int length, char string[]) {

	return 1;
}
