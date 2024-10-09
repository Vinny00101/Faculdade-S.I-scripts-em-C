#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main(){
    int matriz1[4][4];
    int matriz2[4][4];
    int somaMatriz[4][4];
    printf("Informe valores a ser colocado em uma matriz 1\n");
    for (int i = 0; i <= 3; i++){
        printf("\n");
        for (int j = 0; j <= 3; j++){
            scanf("%d",&matriz1[i][j]);
        }
    }
    printf("Informe valores a ser colocado em uma matriz 2\n");
    for (int l = 0; l <= 3; l++){
        printf("\n");
        for (int k = 0; k <= 3; k++){
            scanf("%d",&matriz2[l][k]);
        }
    } 
    for (int in = 0; in <= 3; in++){
        printf("\n");
        for (int jn = 0; jn <= 3; jn++){
            somaMatriz[in][jn] = matriz1[in][jn] + matriz2[in][jn];
            printf("%d,",somaMatriz[in][jn]);
        }   
    }
    
}