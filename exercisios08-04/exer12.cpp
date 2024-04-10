#include <iostream>

int main(){
    int nota1, nota2, nota3, presenca, notaf;

    printf("digite suas 3 notas \n");
    scanf("%d", &nota1);
    scanf("%d", &nota2);
    scanf("%d", &nota3);

    printf("digite a porcetagem da sua preseça \n");
    scanf("%d", &presenca);

    notaf = (nota1 + nota2 + nota3)/ 3;

    
    if(notaf >= 70){

        if (presenca == 100 ){
            printf("sua nota é %d você foi aprovado parabénspor estar com 100 de frequencia \n",notaf);
        }else if (presenca > 75){
            printf("sua nota é %d você foi aprovado\n",notaf);
        }else if(presenca < 75){
             printf("sua nota é %d mas você foi reprovado por presença\n",notaf);
        } 
        
    }else if (notaf < 69 && notaf >= 50 ){ 
        printf("sua nota é %d presisa participar da recuperação\n",notaf);
    }else if (notaf < 50){ 
        printf("sua nota é %d covê foi reprovado\n",notaf);
    }


    

    return 0;

}