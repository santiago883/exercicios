#include <iostream>

using namespace std;


int main(){
    char produtos[20][50];
    float precos[20];
    int i = 0;

        while (i != 20)
        {
            cout<<"Digite um nome"<<endl;
            cin>>produtos[i];
            cout<<"Digite uma idade"<<endl;
            cin>>precos[i];
            i++;
        }
        
        
        
    i = 0;
    
    while(i != 20){
        cout<<produtos[i]<<" idade "<<precos[i]<<endl;
        i++;

    }
    


    return 0;
}