#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>


void ft_print(char c){
   write(1,&c,1); 
}


void ft_putnumber(int n){
    if( n >= 10){
         ft_putnumber( n / 10); 
    }
    ft_print('0'+ n%10); 
}


int main(){
   
}

