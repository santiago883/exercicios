#include <iostream>



int main(){
    char frase[20];

    std::cout<<"escreva uma frase!\n";
    std::cin.getline(frase, 20);
    
    int vogais = 0;
    int i = 0;


    char caracter = frase[i];
    
    while (i < sizeof(frase))
    {
        if (frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u'|| frase[i] == 'A' || frase[i] == 'E' || frase[i] == 'I' || frase[i] == 'O' || frase[i] == 'U'){
            vogais++;
            i++;
        }
        else
        {
            i++;
        }
        
    }
     
    

    std::cout<<"Na sua frase tem "<<vogais<<" vogais"<<std::endl;


    return 0;

}