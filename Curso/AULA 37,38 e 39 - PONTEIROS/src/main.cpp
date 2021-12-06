#include <iostream>

using namespace std;

void soma(int *a, int b){
    *a=*a+b;
}

void vec(int *v,int tam){
    int i;
    for(i=0;i<tam;i++)
        v[i]=0;
}

int main() {
    
    int var = 1;
    int *ponteiro = NULL;           //DECLARAÇÃO DE UM PONTEIRO

    ponteiro = &var;                //ASSOCIAÇÃO DE UM PONTEIRO A ALGUMA VARIAVEL

    cout << ponteiro <<endl;           //ENDEREÇO DE VAR
    cout << *ponteiro<<endl;          //VALOR DE VAR

    *ponteiro = 0;
    cout << *ponteiro<<endl;   
    cout << var<<endl;         

    //VETORES:
    int vetor[3] = {0,1,2};
    ponteiro = &vetor[0];      //ponteiro = vetor     também funciona

    cout << ponteiro <<endl;                //endereço do primeiro elemento do vetor
    cout << (ponteiro+1) <<endl;              //endereço segundo
    cout << (ponteiro+2) <<endl;              //endereço terceiro...

    cout << *ponteiro <<endl;                //primeiro elemento do vetor
    cout << *(ponteiro+1) <<endl;              //segundo
    cout << *(ponteiro+2) <<endl;              //terceiro...

    *ponteiro = 10;
    *(ponteiro+1)=20;
    *(ponteiro+2)=30;

    cout << *ponteiro <<endl;                //primeiro elemento do vetor
    cout << *(ponteiro+1) <<endl;              //segundo
    cout << *(ponteiro+2) <<endl;              //terceiro...

//FUNÇÕES
    soma(&var,10);
    cout << var <<endl;
    vec(vetor,3);
    cout << vetor[0] <<endl;          
    cout << vetor[1] <<endl;            
    cout << vetor[2] <<endl;              


}