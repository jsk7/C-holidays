/*
 * reverse.c
 * Ex 1.19. Pag 31
 *  Created on: 30 dic. 2016
 *      Author: juanostroski
 */

#include <stdio.h>

#define MAXLINESIZE 100

int getLine(char string[], int lim);
void reverse(char string[]);

int main() {

	char line[MAXLINESIZE];
	int c;

	while( (c = getLine(line, MAXLINESIZE)) != EOF) {
		reverse(line);
		printf(line);
	}
}

void reverse(char string[]) {
    int length = strlen(string) ;
    int c, i, j;

    for (i = 0, j = length - 1; i < j; i++, j--)
    {
        c = string[i];
        string[i] = string[j];
        string[j] = c;
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
