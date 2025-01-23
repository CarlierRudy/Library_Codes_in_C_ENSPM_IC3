#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "progress.h"
#include "SampleLib.h"
#define MAX 500


int main( void ) {
 int t=1,x,y,i,n,result,Tab[MAX], choix;
 char tab[MAX];
 float a,b;
 
 system("color 70"); //Changer le fontColor et Background color
 while(t==1){
 

 
 printf("---------------------------------- Hello World ! -------------------------\n\n");
 printf("Veuillez choisir de numero l\'operation a effectuer :\n");
 
 printf(" => 1 : pour effectuer calcule de la puissance de la forme a^b \n");
 printf(" => 2 : pour effectuer calcule de la factoriel d\'un entier n \n");
 printf(" => 3 : pour afficher bonjour \n");
 printf(" => 4 : pour inverser une chaine de caractes \n");
 printf(" => 5 : pour calculer et afficher le produit de deux reels (precision de 03 chiffres apres la vigurle) \n");
 printf(" => 6 : pour preciser la parite d'un nombre \n");
 printf(" => 7 : pour preciser le max ou l\'egalite de deux nombres \n");
 printf(" => 8 : pour ranger dans l\'ordre croissant \n");
 printf(" => 9 : pour effetuer la permutation de deux nombres \n");
 printf(" => 10 : pour effectuer la somme de deux valeurs \n");
 printf("Choix : ");scanf("%d",&choix);
 switch(choix){
 	
 case 1:	
  printf("------------------------ EXCERCICE  : Calcule de la puissance de la forme a^b  -------------------\n");
 printf ("Entrer respectivement les valeurs de a et de b pour effectuer le calcul a^b (les separer par un espace): ");
 scanf("%d %d", &x,&y);
 result = power(x,y);
 printf("Operation en cours...\n");
 progressing(2000,50);
 printf("\n");
 printf( " Le resultat de %d^%d == %d\n",x,y, result );
 break;
 
 case 2:
 printf("------------------------ EXCERCICE  : Calcule de la factoriel d\'un entier n  -------------------\n");
 printf ("Entrer un entier positif n dont voulez calculer la facoriel : ");
 scanf("%d",&n);
 printf("Operation en cours...\n");
 progressing(2000,50);
 printf("\n");
 result = fact(n);
 printf( " Le resultat de %d! == %d\n",n ,result );
 break;
 
 case 3:
 printf("------------------------ EXCERCICE 1 : Afficher bonjour -------------------\n");
printf("Operation en cours...\n");
 progressing(2000,50);
 printf("\n");
 Bonjour();
 break;
 
 case 4:
 printf("------------------------ EXCERCICE 2 : Inverser une chaine de caractes -------------------\n");
 printf("Enter une chaine de caractere : ");
 gets(tab);
 printf("Inversion en cours...\n");
 progressing(2000,50);
 printf("\n");
 inversion(tab);
 break;
 
 case 5:
 printf("------------------------ EXCERCICE 3 : Afficher le produit de deux reels (precision de 03 chiffres apres la vigurle)--\n");
 printf("Entrer deux nombres reels :");
 scanf("%f %f", &a, &b);
 printf("Operation en cours...\n");
 progressing(2000,50);
 printf("\n");
 printf("Leur produit est : %.3f \n", produit(a,b));
 break;
 
 case 6:
 printf("------------------------ EXCERCICE 4 : Preciser la parite d'un nombre -------------------\n");
 printf("Entre le nombre dont on doit verifier la parite : ");
 scanf("%d", &n);
 printf("Operation en cours...\n");
 progressing(2000,50);
 printf("\n");
 parity(n);
 break;
 
 case 7:
 printf("------------------------ EXCERCICE 5 : Preciser le max ou l\'egalite d'un nombre -------------------\n");
 printf("Entrer vos deux nombres a comparer: ");
 scanf("%d %d", &x, &y);
 printf("Operation en cours...\n");
 progressing(2000,50);
 printf("\n");
 comparing(x,y);
 break;
 
 case 8:
 printf("------------------------ EXCERCICE 6 : Ranger dans l\'ordre croissant -------------------\n");
 printf("Entrer vos trois nombres a ranger : \n");
 for(i=0;i<=2;i++){
 	scanf("%d",&Tab[i]);
 }
 printf("Rangement en cours...\n");
 progressing(2000,50);
 printf("\n");
 ShortToLongRange(Tab);
 break;
 
 case 9:
 printf("------------------------ EXCERCICE 16 : Permutation de deux nombres -------------------\n");
 printf("Entrer les valeurs inverser : \n");
 printf(" Valeur 1 => "); scanf("%d", &x);
 printf(" Valeur 2 => "); scanf("%d", &y);
 printf("Permutation en cours...\n");
 progressing(2000,50);
 printf("\n");
 swap(&x,&y);
 break;
 
 case 10:
 printf("------------------------ EXCERCICE 17 : Definition et appel d'une fonction pour effectuer la somme de deux valeur --\n");
 printf("Entrer les deux nombres a sommer (les separer par un espace): ");
 scanf("%d %d", &x,&y);
 printf("La somme de %d et %d est egale a %d \n", x,y,Somme(x,y));
 break;
 
 default:
 	printf(" WARNING ! Saisi incorrect reessayer.\n\n");
 }
 printf("Voulez vous continuer ? OUI=1 | NO=0 :");
 scanf("%d",&t);
}
 

 system("\n\n pause");
 return EXIT_SUCCESS;
}
