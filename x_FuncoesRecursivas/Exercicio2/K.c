#include <stdio.h>

//Entrada: um número n qualquer
//Saída: somatória dos n prmeiros termos da série de frações

int serie (int n);
int main(void){
    int x, y;
    scanf("%d", &x);
    y = serie(x);
    printf("%d", y);
    return 0;
}

int serie (int n){
    if n==1 return 1;
    return serie(n-1) + 1/n;
}
