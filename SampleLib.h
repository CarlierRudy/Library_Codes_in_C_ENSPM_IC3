#ifndef __MY_MATH_LIB_H
#define __MY_MATH_LIB_H
#include "SampleLib.c"
// D�finition d'une fonction de calcul de factorielle.
unsigned int fact( unsigned int value );
// D�finition d'une fonction d'�l�vation � une puissance donn�es.
int power( int value, unsigned int pow );
// Definition d'une proc�dure qui affiche le message : Bonjour !
void Bonjour();
// Definition d'une fonction qui inversion l'ordre d'affichage d'une chaine de caractere (si entre 123, on retoune 321)
char inversion(char tab[]);
// Definition d'une fonction qui affiche le produit de deux r�els avec une pr�cision de trois (03) chiffres apr�s la virgule
float produit (float x, float y);
// Definition d'une proc�dure qui precise la parit� d'une nombre entr�
void parity(int n);
// Definition d'une proc�dure qui compare deux nombres et pr�cise celui qui est plus ou s'ils sont �gaux
void compare(int a, int b);
// Definition d'une proc�dure qui range dans l'ordre croissant trois nombres entr�s
void ShortToLongRange(int tab[2]);
// Definition d'une proc�dure qui permute deux carct�res entr�es 
void swap(char * a, char * b);
//Definition d'une fonction qui renvoie la somme de deux valeurs
int Somme(int a, int b);
#endif

