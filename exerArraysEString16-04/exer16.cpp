#include <iostream>

using namespace std;


int main(){
    char nomes[10][50];
    int idades[10];
    int i = 0;

        while (i != 10)
        {
            cout<<"Digite um nome"<<endl;
            cin>>nomes[i];
            cout<<"Digite uma idade"<<endl;
            cin>>idades[i];
            i++;
        }
        
        // cout<<"Digite um nome"<<endl;
        // cin>>nomes[0];
        // cout<<"Digite uma idade"<<endl;
        // cin>>idades[0];

        // cout<<"Digite outro nome e uma idade"<<endl;
        // cin>>nomes[1];
        // cin>>idades[1];

        // cout<<"Digite outro nome e uma idade"<<endl;
        // cin>>nomes[2];
        // cin>>idades[2];

        // cout<<"Digite outro nome e uma idade"<<endl;
        // cin>>nomes[3];
        // cin>>idades[3];
        
        // cout<<"Digite outro nome e uma idade"<<endl;
        // cin>>nomes[4];
        // cin>>idades[4];

        // cout<<"Digite outro nome e uma idade"<<endl;
        // cin>>nomes[5];
        // cin>>idades[5];

        // cout<<"Digite outro nome e uma idade"<<endl;
        // cin>>nomes[6];
        // cin>>idades[6];

        // cout<<"Digite outro nome e uma idade"<<endl;
        // cin>>nomes[7];
        // cin>>idades[7];

        // cout<<"Digite outro nome e uma idade"<<endl;
        // cin>>nomes[8];
        // cin>>idades[8];

        // cout<<"Digite outro nome e uma idade"<<endl;
        // cin>>nomes[9];
        // cin>>idades[9];
        
    i = 0;
    
    while(i != 10){
        cout<<nomes[i]<<" idade "<<idades[i]<<endl;
        i++;

    }
    


    return 0;
}
