#include <iostream>

int main(){
    int lado1, lado2, lado3;

    printf("digite 3 numeros para formar um triangulo\n");
    scanf("%d", &lado1);
    scanf("%d", &lado2);
    scanf("%d", &lado3);


    if( lado1 == lado2 && lado2 == lado3) {
        printf("O triangulo e Equilátero\n");
    }else if(lado1 == lado2 || lado2 == lado3 || lado1 == lado3){
        printf("O triangulo e Isósceles\n");
    }else{
        printf("O triangulo e Escaleno\n");
    }

    return 0;


}