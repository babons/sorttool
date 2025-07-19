#include <stdio.h>
#include <string.h>

void swapstring(char *s[], int i, int j);
void acompare(char i, char j);
void lsort(char *s[], int nlines)
{
	int sorted = 0; // check integer

	while (!sorted) {
		sorted = 1;
		for (int i = 0; i < nlines - 1; i++) {
			if (strlen(s[i]) > strlen(s[i + 1])) {
				swapstring(s, i, i + 1);
				sorted = 0;
			}
		}
	}
}

void asort(char *s[], int nlines)
{
	int sorted = 0;
	char cmpA, cmpB;

	while (!sorted) {
		sorted = 1;
		for (int i = 0; i < nlines - 1; i++) {
			cmpA = s[i][0];
			cmpB = s[i+1][0];
			if (cmpA >= 'A' && cmpA <= 'Z') {
				cmpA += 32;
			}
			if (cmpB >= 'A' && cmpB <= 'Z') {
				cmpB += 32;
			}
			if (cmpA > cmpB) {
				swapstring(s, i, i+1);
				sorted = 0;
			}
		}
	}
}

void swapstring(char *s[], int i, int j)
{
	char *store;
	store = s[i];
	s[i] = s[j];
	s[j] = store;
}
