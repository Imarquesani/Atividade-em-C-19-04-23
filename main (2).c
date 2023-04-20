#include <stdio.h>
//matricula 1631
void main()
{
    int n1_31=3;
    int *p=&n1_31;
    
    int n2_31=1;
    int *p2=&n2_31;

    
    if (p>p2){
        printf("o maior Endereço e variave com o resultado: %d Endereço %p",n1_31,p);
    }else{
      printf("o maior Endereço e variave com o resultado: %d Endereço %p",n2_31,p2);  
    }
    

}