/*
 ============================================================================
 Name        : exe1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main() {

	int t[20];
	int n, s, i;
	float m;
	do {
		printf("donner la taille de tableau");
		scanf("%d", &n);
	} while (n > 20 || n <= 0);
	s = 0;
	for (i = 0; i <= n - 1; i++) {
		printf("donner un entier");
		scanf("%d", &t[i]);
		s = s + t[i];
	}
	m = (float)s / n;
	printf("donner la moyenne=%f", m);
	return 0;
}

