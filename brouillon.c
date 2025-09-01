#include <unistd.h>
void ft_print(char c){
    write(1, &c, 1); 
}


void ft_printnumber(void){
    int i  = 0 ;
    int j ; 
    while(i<2){
        j =  0; 
        while (j<2)
        {
             ft_print('0' + j);
              ft_print('\n'); 
              j++; 
        }
        ft_print('0' + i); 


        i++; 
        
        
    }
   
}


int main(){
    ft_printnumber(); 
}