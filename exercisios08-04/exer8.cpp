#include <iostream>

int main(){
    float peso, altura, imc;

    printf("digite seu peso e altura para calcular o indice de massa corporal: \n");
    scanf("%e", &peso);
    scanf("%e", &altura);

    imc = (peso / (altura * altura));

    if (imc < 18.5){
        
        printf("%.2lf\n Categoria: Abaixo do peso \n", imc);
    }else if( imc > 18.5 && imc < 25){
        printf("%.2lf\n Categoria: Peso normal \n", imc);
    }
    }



   Se o IMC for menor que 18.5, imprima "Categoria: Abaixo do peso".
Se o IMC estiver entre 18.5 e menor que 25, imprima "Categoria: Peso normal".
Se o IMC estiver entre 25 e menor que 30, imprima "Categoria: Sobrepeso".
Se o IMC for 30 ou maior, imprima "Categoria: Obeso".


}