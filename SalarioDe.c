#include <stdio.h>
#include <conio.h>
int main(){
    // entrada de dado.
    // observacao, tem um vetor ou arrays para quem nao sabe como e "salario"
    int i;
    float salario[10] = {2300, 1570, 1678, 4589, 5000, 4380, 6565, 7565, 5466, 4578};
    float valorInss;
    valorInss = 0;
    // aqui sera feito um loop para verificar todos os elementos da arrays
    // para ao final aplicar nos salarios o valor do inss
    for (i = 0; i <=9; i++){
        if (salario[i] <= 600){
            printf("Salario [%d] valor do salario INSS: %.1f\n",i,valorInss);
        }
        else if (salario[i] >= 600 && salario[i] <= 1200){
            valorInss = salario[i] - (0.20 * salario[i]);
            printf("Salario [%d] valor do salario INSS: %.1f\n",i,valorInss);
        }
        else if (salario[i] > 1200 && salario[i] <= 2000){
            valorInss = salario[i] - (0.25 * salario[i]);
            printf("Salario [%d] valor do salario INSS: %.1f\n",i,valorInss);
        }
        else if (salario[i] > 2000){
            valorInss = salario[i] - (0.30 * salario[i]);
            printf("Salario [%d] valor do salario INSS: %.1f\n",i,valorInss);
        }
    }
    getch();
    return(0);
}