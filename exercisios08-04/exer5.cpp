#include <iostream>

int validar_operador(char x){
    switch(x){
    case  '+':
       return 1;
        break;
    case '-':
        return 1;
        break;
    case '*' || 'x':
        return 1;
        break;
    case '/':
        return 1;
        break;
     default:
        return 2;
        break;
     }
}

int outroNumero(int num2){
    printf("digite outro numero \n");
    scanf("%d", &num2);
    return num2 = num2;
}

int main(){
    int num1, num2, v, resul;
    char ope;

    // printf("digite um operador matematico '+ - * /':  \n ");
    // scanf("%c", &ope);

    printf("digite um numero: ");
    scanf("%d", &num1 );

    printf("digite um operador matematico '+ - * /':  \n ");
    scanf(" %c", &ope);
    
    
    v = validar_operador(ope);
    num2 = outroNumero(num2);

    
    if(v = 1){
        switch(ope){
    case  '+':
       resul = num1 + num2;
       printf("resultado: %d \n", resul);

        break;
    case '-':
        resul = num1 - num2;
        printf("resultado: %d \n", resul);

        break;
    case '*' :
        resul = num1 * num2;
        printf("resultado: %d \n", resul);

        break;
    case '/':
        resul = num1 / num2;
        printf("resultado: %d \n", resul);

        break;
     default:
        
        break;
     
    }

    return 0;
    }

    }
    
    