#ifndef __MY_MATH_LIB_H
#define __MY_MATH_LIB_H
#include "SampleLib.c"
// Définition d'une fonction de calcul de factorielle.
unsigned int fact( unsigned int value );
// Définition d'une fonction d'élévation à une puissance données.
int power( int value, unsigned int pow );
// Definition d'une procédure qui affiche le message : Bonjour !
void Bonjour();
// Definition d'une fonction qui inversion l'ordre d'affichage d'une chaine de caractere (si entre 123, on retoune 321)
char inversion(char tab[]);
// Definition d'une fonction qui affiche le produit de deux réels avec une précision de trois (03) chiffres après la virgule
float produit (float x, float y);
// Definition d'une procédure qui precise la parité d'une nombre entré
void parity(int n);
// Definition d'une procédure qui compare deux nombres et précise celui qui est plus ou s'ils sont égaux
void compare(int a, int b);
// Definition d'une procédure qui range dans l'ordre croissant trois nombres entrés
void ShortToLongRange(int tab[2]);
// Definition d'une procédure qui permute deux carctères entrées 
void swap(char * a, char * b);
//Definition d'une fonction qui renvoie la somme de deux valeurs
int Somme(int a, int b);
#endif

