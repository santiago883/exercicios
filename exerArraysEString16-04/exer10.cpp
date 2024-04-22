#include <iostream>


int main(){
    std::string dias[7];
    int numero;


    dias[0] = "segunda";
    dias[1] = "terça";
    dias[2] = "quarta";
    dias[3] = "quinta";
    dias[4] = "sexta";
    dias[5] = "sabado";
    dias[6]= "domingo";

    std::cout<<"digite um numero de 1 a 7"<<std::endl;
    std::cin>>numero;
    numero--;
    std::cout<<dias[numero]<<std::endl;


    return 0;

}