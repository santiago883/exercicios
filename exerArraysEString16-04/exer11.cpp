#include <iostream>
#include <string.h>


int main(){
    char palavra1[10];
    char palavra2[10];

    std::cout<<"digite uma palavra: \n";
    std::cin>>palavra1;
    std::cout<<"digite outra palavra: \n";
    std::cin>>palavra2;

    int resultado = strcmp(palavra1, palavra2);

    if (resultado > 0){
        std::cout << "A palavra 1 é maior que a Palavra 2 \n";
    }
    else if (resultado == 0){
        std::cout << "A Palavra 1 e a 2 são iguas \n";
    }
    else{
        std::cout << "A Palavra 2 é maior que a Palavra 1 \n";
    }

    


    return 0;

}