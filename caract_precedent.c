#include <stdio.h>
#include <ctype.h>
#define LIMITE_H_H 2 
#define LIMITE_H_M 15
#define LIMITE_F_H 2
#define LIMITE_F_M 35

int main(){
     char Sexe; 
      int Heures, Minutes; 
      int Selection_Homme, Selection_Femme;   
      float MeilleurTemps, LimiteH, LimiteF; 

      LimiteH = LIMITE_H_H + (LIMITE_H_M/60.0); 

      LimiteF = LIMITE_F_H + (LIMITE_F_M/60.0); 

      printf("Homme , ou Femme  (H/F) : "); 
      scanf("%c", &Sexe); 
      printf("Meilleure performance (2h15m) : "); 
      scanf("%d %d", &Heures, &Minutes); 

      MeilleurTemps =  Heures+(Minutes/60.0); 
    /* Utilisation de deux  booleens*/
     Selection_Homme  = (Sexe == 'H') && (MeilleurTemps <= LimiteH); // les 2 doivent etre vrai pour que l'homme soit selectionné 
     Selection_Femme   = (Sexe == 'F') && (MeilleurTemps <= LimiteF);// les 2 doivent etre vrai pour que la femme soit selectionné

     if(Selection_Homme || Selection_Femme){
         printf("Vous êtes selectionnés pour les JO\n"); 
     }else{
        printf("Vous n'êtes pas selectionnés pour les JO\n"); 
     }
}