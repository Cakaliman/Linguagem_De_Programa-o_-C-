#include <stdio.h>

//Entrada: um número n qualquer
//Saída: somatória dos n prmeiros termos da série de frações

float serie (int n);
int main(void){
    int x; 
    float y;
    scanf("%d", &x);
    y = serie(x);
    printf("%f", y);
    return 0;
}

float serie (int n){
    if (n==1) return 1.00;
    return serie(n-1) + (1/n);
}
