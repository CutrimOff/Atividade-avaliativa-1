#include <stdio.h>
#include <stdlib.h>
int main (){
    int n1=0,n2=1,n3,x;
    printf("digite um valor maior ou igual a zero:");
    scanf("%d", &x);
    if(x<0){
        printf("valor invalido");
    }
    else{
        
       while(n2<x){
       n3=n2+n1;
       printf(" -%d", n3);
       n1=n2;
       n2=n3;
    }
    printf("\n");
    return 0;
}
}