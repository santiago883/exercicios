#include <iostream>

int main(){
    int x, y;

    printf("digite um valor para atribuir o lugar no plano carteciano \n");
    scanf("%d", &x);
    scanf("%d", &y);

    if(x > 0 && y > 0){
    printf("você no primeiro quadrado \n");
    }else if(x > 0 && y < 0){
        printf("você no quarto quadrado \n");
    }else if(x < 0 && y > 0){
        printf("você no segundo quadrado \n");
    }else if(x < 0 && y < 0){
        printf("você no terceiro quadrado \n");
    }


    

    return 0;

}