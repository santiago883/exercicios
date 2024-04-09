#include <iostream>

int main(){
    int num;

    printf("digite um numero: \n");
    scanf("%d", &num);

    if (num % 3 == 0 && num % 5 == 0 ) {
        printf("O número é divisivel por 3 e 5. \n");
    }else{
        printf("O número não é divisivel por 3 e 5. \n");
    }

    return 0;


}