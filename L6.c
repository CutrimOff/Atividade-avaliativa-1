#include <stdio.h>
    int main (){
        int i, c=0;
        for(i=1; i<=1000; i++){
            
            if(i%3==0 && i%5==0){
                c=c+i;
            }
            
        }
         printf("a soma de todos os multiplos de 5 e 3 ate 1000 eh:%d", c);


        return 0;
    }