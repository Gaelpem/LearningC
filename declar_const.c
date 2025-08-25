#include <stdio.h> // preprpocesseur il va chercher la bibliotheque standard d'entrée / sortie
#define PI 3.14159// le preprocesseur remplace le mot PI par sa valeur avant que le code ne parte au compilateur

int main()
{
    const int  COEFF = 4; //  on initialise la const coeff à 4 
    float surface, rayon ; // on declare de float 

    printf("Entrez un rayon d'une sphere : "); 

    scanf("%f",&rayon ); // on demande à l'utilisateur de saisir un float

    surface = COEFF * PI * rayon * rayon ; 
    printf("La surface est : %f\n ", surface); 
}