#include <iostream>


int main(){
    std::string cores[7];
    int numero;


    cores[0] = "laranja";
    cores[1] = "verde";
    cores[2] = "vermelho";
    cores[3] = "lilas";
    cores[4] = "roxo";
    cores[5] = "blak";
    cores[6]= "white";

    std::cout<<"digite um numero de 1 a 7"<<std::endl;
    std::cin>>numero;
    numero--;
    std::cout<<cores[numero]<<std::endl;


    return 0;

}