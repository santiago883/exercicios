#include <iostream>

int main(){
    int notat, notaR, presenca, notaf;

    printf("digite sua nota trimestral \n");
    scanf("%d", &notat);

    printf("digite sua nota da recuperação \n");
    scanf("%d", &notaR);
    

    printf("digite a porcetagem da sua preseça \n");
    scanf("%d", &presenca);

    

    
    if(presenca >= 75 || notat < 50){

        notaf = ( notat + notaR);


        if (notaf <= 99){
            printf(" Você não conseguiu recuperar\n");
        }else {
            printf("aprovado ");
        }
        
    }else { 
        printf("você não tem direito a recuperação presença insuficiente\n");
    }


    

    return 0;

}