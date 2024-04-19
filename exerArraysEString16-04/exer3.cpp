#include <iostream>


int main(){
    std::string letra;

    std::cout<<"digite uma letra"<<std::endl; 
    std::cin>>letra;
    if(letra != "a" || letra != "e" || letra != "i" || letra != "o" || letra != "u" ){
        std::cout<<"sua letra "<<letra<<" é uma consoante"<<std::endl; 
    }else{
        std::cout<<"sua letra "<<letra<<" é uma BOGAL"<<std::endl; 
    }

    return 0;
}