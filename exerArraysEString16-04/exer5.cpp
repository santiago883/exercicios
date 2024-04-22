#include <iostream>
#include <string>

int main(){
    char frases[20];


    std::cout<<"digite uma frase"<<std::endl;
    std::cin.getline(frases, 20);


    std::cout<<frases<<std::endl;

    return 0;

}