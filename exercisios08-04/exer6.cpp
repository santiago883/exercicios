#include<iostream>
int main(){

    int ano;

    printf("digite um ano para ver se ele é bissexto! ");
    scanf("%d", &ano);

    if(ano % 4 == 0 && ano % 100 != 0 || ano % 100 != 0 && ano % 400 == 0 ){
        printf("o ano é bissexto! ");
    }else{
        printf("o ano não é bissexto! ");
    }

    return 0;
}