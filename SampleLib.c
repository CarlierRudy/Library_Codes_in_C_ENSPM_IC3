#include <string.h>

#include "SampleLib.h"

#define MAX 500
// Définition d'une fonction de calcul de factorielle.
unsigned int fact(unsigned int value) {
	unsigned int result = 1;
	while(value > 1) {
		result *= value;
		value--;
	}
	return result;
}
// Définition d'une fonction d'élévation à une puissance données.
int power(int value, unsigned int pow) {
	if(pow == 0) return 1;
	if(pow == 1) return value;
	int accumulator = 1;
	while(pow > 0) {
		accumulator *= value;
		pow--;
	}
	return accumulator;
}
//TD programmation en C
//exercice1
void Bonjour() {
	printf("Bonjour !\n");
}
//exercice2
char inversion(char tab[MAX]) {
	int i;
	for(i = strlen(tab); i >= 0; i--) {
		printf("%c", tab[i]);
	}
	printf("\n");
}
//exercice3
float produit(float x, float y) {
	return x * y;
}
//exercice4
void parity(int n) {
	if(n % 2 == 0) {
		printf("Votre nombre est paire !\n");
	} else {
		printf("Votre nombre est impaire !\n");
	}
}
//exercice5
void comparing(int a, int b) {
	if(a > b) {
		printf(" La plus grande valeur est : %d \n", a);
	} else if(a < b) {
		printf(" La plus grande valeur est : %d \n", b);
	} else if(a == b) {
		printf(" Les deux valeurs sont egales.\n");
	}
}
//exercice6
void ShortToLongRange(int tab[2]) {
	int i, j, temp, index[2];
	for(i = 0; i <= 2; i++) {
		for(j = 0; j <= 2; j++) {
			if(tab[i] < tab[j]) {
				temp = tab[j];
				tab[j] = tab[i];
				tab[i] = temp;
			}
		}
	}
	printf("Les nombres ranges dans l\'ordre croissant seront : ");
	for(i = 0; i <= 2; i++) {
		printf(" %d ", tab[i]);
	}
	printf("\n");
}
//exercice16
void swap(char * a, char * b) {
	char temp;
	temp = * a;* a = * b;* b = temp;
	printf(" Apres la permutation : Caractere 1 = %c, Caractere 2 = %c \n", * a, * b);
}
//exercice17
int Somme(int a, int b) {
	return a + b;
}
