#include <stdio.h>
    int main(){
        int N1, i, resto, c=0;
        printf("digite um numero inteiro positivo:");
        scanf("%d", &N1);
        

    for(i=1; i<=N1; i++){
        resto = N1%i;
        if(resto == 0){
            c=i;
            
        }

       
        printf("%d\n", c); 

        }
        
       
        return 0;
    }