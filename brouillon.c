#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>



#include <unistd.h>


void ft_putchar(char c){
     write(1,&c,1); 
}


void ft_putnumber(int n ){
       if(n >= 10){
           ft_putchar('0' + n/10); 
       }
        ft_putchar('0' + n%10); 
  
}

void ft_print_number(void){
     int i = 0; 
     while(i<= 15){
          ft_putnumber(i); 
          i++; 
     }
}

int main(){
     ft_print_number(); 
}