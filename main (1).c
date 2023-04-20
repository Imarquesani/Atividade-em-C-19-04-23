/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i, vet_1631[7]= {0,1,2,3,4,5,6};
    for (i = 0; i < 7; i ++)
    printf("emdereço: %p\tConteudo: %d\n ", vet_1631 + i, *(vet_1631 + i));
    return 0 ;
    
}
