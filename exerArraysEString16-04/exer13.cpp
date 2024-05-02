#include <iostream>
#include<cstring>

using namespace std;


int main(){
    char texto[50];
    char * texto2;
    int i = 0;
    int achaA = 0;
    std::cout<<"escreva uma um texto!\n";
    std::cin.getline(texto, 50);
    
    texto2 = (char*)memrchr(texto,'a',strlen(texto));

    if (texto2!=NULL){
        cout<<"o a esta na "<<texto2-texto+1<<"º"<<" posição!"<<std::endl;
    }else{
        cout<<"Não tem nenhum a em seu texto"<<std::endl;
    }
    


    //sou muito burro fiz isso ai embaixo para descobrir que tem um metodo muito mais rapido e facil ai complica lksksksksks rindo para não chorar
    


    // while ( i < sizeof(texto))
    // {
    //     std::cout<<"teste!\n";
    //     std::cout<<i;
    //     if((texto[i] == 'a') || (texto[i] == 'A')){
    //         achaA++;
    //         break;
    //     }else{
    //         i++;
    //     }
        
        
    // };

    // resul = std::strchr(str, ch);

    // std::cout<<achaA;

    // if(achaA > 0 ){
    //     std::cout<<"o a esta na "<<i+1<<"º"<<" posição!"<<std::endl;

    // }else{
    //     std::cout<<"Não tem nenhum a em seu texto"<<std::endl;
        
    // }

    




    return 0;
}
