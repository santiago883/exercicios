#include <iostream>

int main(){
    int num;

    printf("digite um numero: \n");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("O número e par. \n");
    }else{
        printf("O número e impar. \n");
    }

    return 0;


}