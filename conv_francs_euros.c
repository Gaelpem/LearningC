
#include "mes_directives.h"
int main(){
    float Euros; 
    float Francs; 
    printf("Entrez la valeur en Francs : "); 
    scanf("%f", &Francs); 
    Euros = (floor((Francs / TAUX))/ 100); 
    printf("Valeur en Euros : %f\n", Euros); 
}