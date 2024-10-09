#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

// Essa funcao tem como objetivo receber um valor do usuario e 
// verifica se esse valor esta na arrays.
// antes disso essa arrays estara recebendo um 
// valor aleatorio 1 a 100 atraves de rand()
// para depois verificar se o numero do usuario esta nesse vetor. 
int randVectorValidade(int numUser){
    int validade = 0;
    int valorT = 0, valorF = 0;
    int num[10];
    srand(time(NULL));
    for (int i = 0; i < 9; i++){
        num[i] = rand() % 100;
        printf("%d,",num[i]);
    }
    // loop para verifica se valor do usuario esta no vetor ou nao
    for (int j = 0; j < 9; j++){
        if(numUser == num[j]){
            valorT += 1;
        }
        else{
            valorF += 1;
        }
    }
    // condicao para atribuir um valor para uma variavel de retorno
    // aqui vai verifica se valor True(valorT) recebeu 1
    // se nao, vai verificar se valor falso(valorF) recebeu 1 ou mais.
    if(valorT == 1){
        validade = 1;
    }
    else if (valorT == 0 && valorF > 0){
        validade = 0;
    }
    return(validade);
}
// aqui na main sera passado um valor que o usuario ira digita
// depois esse valor vai para uma funcao.
int main(){
    int numUser, validade;
    scanf("%d",&numUser);
    validade = randVectorValidade(numUser);
    // aqui sera verificado se tem valor na arrays ou nao
    // depois exibir na tela se e true ou false
    if (validade == 1){
        printf("True");
    }
    else if (validade == 0){
        printf("false");
    }
}