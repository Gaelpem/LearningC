// Affichage d'une expression 
// Il est possible de fournir une expression à la place d'une variable dans une instruction printf()

#include <stdio.h>

int main(){
    int a , b ; 
    printf("Entrez deux entiers : "); 
    scanf("%d %d", &a, &b); 
    printf("La somme %d + %d  = %d \n  ", a, b , a + b ); 

}