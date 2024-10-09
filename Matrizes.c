#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int linha = 2, coluna = 3;
    int valor[linha][coluna];
    srand(time(NULL));
    for (int i = 0; i < linha; i++){
        for (int j = 0; j < coluna; j++){
            valor[i][j] = rand() % 100;
            printf("matriz dos valores %d\n",valor[i][j]);
        }
    }
    getch();
    return(0);
}