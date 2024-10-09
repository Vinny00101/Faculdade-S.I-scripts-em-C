#include <stdio.h>
void converter(int segundos, int *d, int *h, int *m, int *s);
int main(){
    int d,h, m, s, segundos;
    printf("Digite um valor em segundos");
    scanf("%d", &segundos);
    converter(segundos,&d,&h,&m,&s);
    printf("Sao %.2dD %.2dh: %.2dm: %.2ds",d,h,m,s);
}
void converter(int segundos, int *d, int *h, int *m, int *s){
    *d = segundos / 86400;
    *h = (segundos % 86400) / 3600;
    *m = (segundos % 3600) / 60;
    *s = (segundos % 3600) % 60;
}