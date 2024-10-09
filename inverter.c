#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){
    int inverso = 0, resto = 0, num;
    scanf("%d",&num);
    while (num > 0){
       resto = num % 10;
       inverso = resto + inverso*10;
       num = num/10;
    }
    printf("%d",inverso);
    getch();
    return(0);
}