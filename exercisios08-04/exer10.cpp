#include <iostream>

int main(){
    int saldo = 1000;
    int retirada;

    printf("digite um valor a ser retirado da conta \n");
    scanf("%d", &retirada);
    
    if(retirada > saldo || retirada < 0){
        printf("você não tem saldo sufisiente \n");
    }else{
        printf("você pode efetuar o saque\n");
    }


    

    return 0;

}