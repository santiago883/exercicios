#include <iostream>

using namespace std;


int main(){
    char frase[20];
    cout<<"Digite uma frase: \n";
    cin.getline(frase,20);
    int fim= 0;
    int i = 0;

    while(frase[fim] != '\0' && frase[fim] !='\n')
    {
        fim++;
    }
    
    cout << "Lista de nomes e idades:" << endl;

    while ( i != fim)
    {
        if (frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u'|| frase[i] == 'A' || frase[i] == 'E' || frase[i] == 'I' || frase[i] == 'O' || frase[i] == 'U'){
            frase[i] = '*';
            i++;
        }else{
            i++;
        }
    }

    cout<<frase<<endl;
    


    return 0;
}
