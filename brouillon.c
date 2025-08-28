#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>



#include <unistd.h>

void ft_print(char c){
    write(1,&c,1); 
}

void ft_printnumber(){
     int i = 1; 
     int j, k,l; 
      
     while(i < 2){
        ft_print('0' + i); 
        ft_print('\n'); 
        j = 1 ; 
        while ( j< 3)
        {
         ft_print('0' + j);
         k = 1; 
         while (k < 4)
         {
             if( i < j && j < k ){
                ft_print('\n'); 
                ft_print('0' + i);
                ft_print('0' + j);
                ft_print('0' + k);
             
             }

             l = 1; 
             while (l < 5)
             {
                  if(i < j && j < k && k < l ){
                    ft_print('\n'); 
                ft_print('0' + i);
                ft_print('0' + j);
                ft_print('0' + k);
                 ft_print('0' + l);
             
                  }
                  l++;
             }
             
         k++; 
         }
         
           j++; 
        }
        i++; 
     }
     

    }

int main(){
    ft_printnumber(); 
}