#include <stdio.h>
    int main (){
        int x, M=0, m;
        m=x;
printf("digite um valor:");
        while (x > 0){
            scanf("%d", &x);
            if(x > M){
                M = x;
            }
            else if (x < m){
                m = x;
            }



        }
        printf("O maior valor escrito foi:%d\nO menor valor escrito foi:%d", M, m);


        return 0;
    }