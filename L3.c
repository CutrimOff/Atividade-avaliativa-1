#include <stdio.h>
    int main (){
        float A, V, pi, R;
        pi = 3.14159;

        printf("Digite um valor para o Raio, sendo esse necessario para calcular a Area e Volume de uma esfera");
        printf("\nRaio:");
        scanf("%f", &R);
       

        A = 4*pi*(R*R);
        V = (4/3.00)*pi*(R*R*R);

        printf("O valor da area eh: %.2f\nO valor do volume eh:%.2f", A, V);

        return 0;
    }