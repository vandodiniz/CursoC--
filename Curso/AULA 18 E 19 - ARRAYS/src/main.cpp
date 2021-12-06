#include <iostream>
using namespace std;

int main() {
    int i,j;

    int v[3]={1,2,3}; // declaração de um vetor completo
   
    for(i=0;i<3;i++){
        cout << v[i]<<endl;
    }


    int vetor[5]; //declaração de um vetor vazio

    vetor[0]=0;
    vetor[1]=1;
    vetor[2]=2;   //FORMA TOSCA DE PREENCHER
    vetor[3]=3;
    vetor[4]=4;

    for(i=0;i<5;i++){
        cout << vetor[i]<<endl;
    }


    int tam = 5;
    int vector[tam];

    for(i=0;i<tam;i++){           //FORMA TOP DE PREENCHER --- sizeof(vector)/4 tb funciona
        vector[i] = 10*i;
        cout << vector[i]<<endl; 
    }
    
    //array bidimensional:

    int matriz[3][4];
    int l,c;
    i = 0;
    for(l=0;l<3;l++){
        for(c=0;c<4;c++,i++){
            matriz[l][c] = i;
            cout<<matriz[l][c]<<" ";
        }
        cout << endl;
    }   
}