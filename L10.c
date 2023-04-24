#include  <stdio.h>
    int main (){
        int x, i=1, n=0, media=0;
        printf("escreva 10 valores diferentes:");
        while(i<11){
            scanf("%d", &x);
            n = n+x;
            i++;
        }
        media = n/10;
    printf("a media eh:%d", media);
        return 0;
    }