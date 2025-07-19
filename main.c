#include <stdio.h>
#include "io.h"
#include "sort.h"

#define MAXLINES 5000

char *lineptr[MAXLINES];

int main() {
	int nlines = 0;
	int opt;

	for (;;) {
		printf("\nPlease select an option listed below: \n");
		printf("1 - Input Lines\n");
		printf("2 - Write Lines\n");
		printf("3 - Sort Lines\n");
		printf("4 - Exit\n");
		if (scanf("%i", &opt) == EOF) {
			printf("EOF -- exiting");
			break;
		}
		while (getchar() != '\n' && getchar() != EOF);

		if (opt == 1) {
			printf("Enter your lines below. Enter '#' when done: \n");
			nlines += readlines(lineptr, MAXLINES, nlines);
			if (nlines < 0) {
				printf("\nerror: input too big");
				return 1;
			}
		} else if (opt == 2) {
			printf("\nYou entered:\n");
			writelines(lineptr, nlines);
		} else if (opt == 3) {
			printf("Please select an option below: \n");
			printf("1 - Length Sorting\n2 - Alphabetical Sorting\n");
			scanf("%i", &opt);
			while (getchar() != '\n' && getchar() != EOF);
			if (nlines <= 0) {
				printf("No lines.\n");
			} else if (opt == 1) {
				lsort(lineptr, nlines);
				printf("Sorted!\n");
			} else if (opt == 2) {
				asort(lineptr, nlines);
				printf("Sorted!\n");
			}
		} else if (opt == 4) {
			printf("Bye!!!\n");
			return 0;
		} else {
			printf("wat\n");
		}
		opt = 0;

		while (getchar() != '\n' && getchar() != EOF);
	}

	return 0;
}
