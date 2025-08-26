#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>



#include <unistd.h>


void ft_putchar(char c){
     write(1,&c,1); 
}


void print_val(char i, char j){
      
}

void ft_print_comb(void){
   char  i ; 
   char  j; 
    j = '0';
    i = '0'; 
   while(i <='0'){
    ft_putchar(i); 
    ft_putchar(',');

      while(j<='2'){
          ft_putchar(j); 
     ft_putchar(',');

          j++; 
      }
      i++; 

    
    
   }

   

}


int main(){
   ft_print_comb(); 

}