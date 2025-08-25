#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>
#include <unistd.h>


void ft_print_alphabet(void){
  for(char c = 'a'; c <= 'z'; c++){ write(1,&c, 1);}
 
}

int main(){
  ft_print_alphabet(); 
}
   
   
    


