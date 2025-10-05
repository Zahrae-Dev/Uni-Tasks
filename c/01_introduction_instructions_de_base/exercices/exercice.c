/*Écrivez un programme qui :
 1. Demandez à l'utilisateur de saisir deux nombres entiers.
 2. Effectuez et affiche le résultat des 4 opérations arithmétiques de base 
(+, -, *, /) sur ces deux nombres.
 3. Utilisez le typecastingpour obtenir un résultat précis de la division.
 4. Utilisez la pré-incrémentationet la post-incrémentation pour modifier 
les valeurs.*/

//_ _ _ _ _ _ _ _ _ _ ATTENTATIVE_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _//

#include <stdio.h>
int main(){
    int x; 
    int y;
//1. Demandez à l'utilisateur de saisir deux nombres entiers.//
    printf("saisez le premier nombre souhaite svp ");
    scanf("%d",&x);
    printf("saisez le deuxieme nombre souhaite svp ");
    scanf("%d",&y);
/*2. Effectuez et affiche le résultat des 4 opérations arithmétiques de base 
(+, -, *, /) sur ces deux nombres.*/
    printf("%d,%d\n",x,y);
    printf("%d+%d=%d\n%d-%d=%d\n",x,y,x+y,x,y,x-y);
    printf("%d*%d=%d\n%d/%d=%d\n",x,y,x*y,x,y,x/y);
/* 3. Utilisez le typecastingpour obtenir un résultat précis de la division.*/
    float precise = (float) x/y ;
    printf("le resultat precis du division de %d par %d est %.2f\n",x,y,precise);
/*4. Utilisez la pré-incrémentationet la po st-incrémentation pour modifier 
les valeurs.*/
    int pre = ++x;
    printf("la valeur du premier nombre apres pre-incrementation est %d\n, et la variable incremente est %d\n",x,pre);
    int post = x++;
    printf("la valeur du premier nombre apres post-incrementation est %d\n, et la variable incremente est %d\n",x,post);
    return 0;
}