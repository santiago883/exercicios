#include <iostream>

int main(){
    int num, avaliador;

    printf("digite 1 se quiser converter Celsius para Fahrenheit  ou 2 para converter de Fahrenheit para Celsius: \n");
    scanf("%d", &avaliador);
    printf("digite a temperatura a ser convertida \n");
    scanf("%d", &num);

    if(avaliador == 1 ){
        num =  (num * 1.8) + 32;
        printf("%d Fahrenheit \n", num);

    }else if(avaliador == 2){
        num =((num - 32) / 1.8);
        printf("%d Celsius \n", num);
    }
    

    return 0;


}