#include <stdio.h>

// Prototype : déclaration de la fonction traitement().
// Cela indique au compilateur que cette fonction existe plus bas.
void traitement();

int main(){
    int i; // Variable pour contrôler la boucle for

    // Boucle for qui va exécuter traitement() 3 fois
    for(i = 0 ; i < 3 ; i++)
        traitement(); // Appel de la fonction traitement()
}

void traitement(){
    // Variable locale statique : créée une seule fois
    // et conserve sa valeur entre les appels à traitement().
    static int k = 0;

    // Variable locale classique : recréée à chaque appel,
    // initialisée à 0 au début de la fonction.
    int j = 0;

    // On incrémente d'abord j et k, puis on les affiche.
    // ++j → j passe de 0 à 1 avant l'affichage
    // ++k → k est augmenté à chaque appel, donc il garde la valeur d'avant
    printf("j = %d , k = %d\n", ++j, ++k);
}

