#include <iostream>

int main(){
    int leads;

    printf("digite o numero de lids \n");
    scanf("%d", &leads);
    
    if(leads <= 5){
        printf("quantidade é baixa \n");
    }else if (leads > 5 && leads <= 10){ 
        printf("quantidade é esperada\n");
    }else if (leads > 11){ 
        printf("quantidade é alta\n");
    }


    

    return 0;

}