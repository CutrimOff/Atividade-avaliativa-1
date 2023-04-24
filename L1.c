#include <stdio.h>
    int main (){
        int V1, V2, V3, V4, diferenca;
        printf("Assuma valores para A, B; C e D respectivamente:");
        scanf ("%d%d%d%d", &V1, &V2, &V3, &V4);
        printf("\n\nA = %d\nB = %d\nC = %d\nD = %d\n", V1, V2, V3, V4);

        diferenca = ((V1*V2)-(V3*V4));

        printf("\n\nDiferenca = (%d*%d) - (%d*%d)", V1, V2, V3, V4);
        printf("\nDiferenca = %d", diferenca);

    return 0;
    }