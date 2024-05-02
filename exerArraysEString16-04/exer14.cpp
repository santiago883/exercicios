#include <iostream>

using namespace std;


int main(){
    char palavra[10];
    char palavrainv[10];
    int fim = 0;

    

    cout<<"Digite uma palabra \n";
    fgets(palavra, 10, stdin);

    while (palavra[fim] != '\0' && palavra[fim] !='\n')
    {
        fim++;
    }

    int i = fim;
    int j = 0;

    while (j <= fim){
        palavrainv[j] = palavra[i];
        i--;
        j++;
    }

    palavrainv[fim+1]= '\0';
        
    cout<<palavrainv<<endl;
    


    return 0;
}
