#include <iostream>

int main(){
    float peso, altura, imc;

    printf("digite seu peso e altura em metros para calcular o indice de massa corporal: \n");
    scanf("%e", &altura);
    scanf("%e", &peso);

    imc =   peso / (altura * altura)  ;

    if (imc < 18.5){
        
        printf("%.2lf\n Categoria: Abaixo do peso \n", imc);
    }else if( imc > 18.5 && imc <= 25){
        printf("%.2lf\n Categoria: Peso normal \n", imc);
    }else if(26 < imc && imc < 30){
        printf("%.2lf\n Categoria: Sobrepeso \n", imc);
    }else{
        printf("%.2lf\n Categoria: Obeso \n", imc);

    }

    return 0;

}



   

