#include <iostream>


int main(){
    std::string animais[10];
    char caractere;


    animais[0] = "tucano";
    animais[1] = "aguia";
    animais[2] = "lobo";
    animais[3] = "cachoro";
    animais[4] = "beija-flor";
    animais[5] = "gato";
    animais[6]= "papagaio";
    animais[7] = "formiga";
    animais[8]= "cavalo";
    animais[9]= "chacal";

    std::cout<<"digite uma letra"<<std::endl;
    std::cin>>caractere;

    if (caractere == 't' || caractere == 'a' || caractere == 'l' || caractere == 'c' || caractere == 'b' || caractere == 'g' || caractere == 'p' || caractere == 'f') {
    std::cout << "Animal: ";
    switch(caractere) {
        case 't':
            std::cout << animais[0];
            break;
        case 'a':
            std::cout << animais[1];
            break;
        case 'l':
            std::cout << animais[2];
            break;
        case 'c':
            std::cout << animais[3];
            std::cout << animais[8];
            std::cout << animais[9];
            break;
        case 'b':
            std::cout << animais[4];
            break;
        case 'g':
            std::cout << animais[5];
            break;
        case 'p':
            std::cout << animais[6];
            break;
        case 'f':
            std::cout << animais[7];
            break;
        }

    }


    return 0;

}