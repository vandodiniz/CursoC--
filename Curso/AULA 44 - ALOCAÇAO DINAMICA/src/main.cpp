#include <iostream>
#include <stdlib.h>             //função malloc
#include <stdio.h>              //função gets


using namespace std;

int main() {

    //GASTA 50 ESPAÇOS DA MEMORIA, ALGUNS VAO FICAR VAZIOS
    char nome[50];
    fgets(nome,50,stdin);
    cout << nome <<endl;
    cout << nome[0] <<endl;
    cout << nome[49] <<endl;

    //alocação dinamica:

    char *nomeDin;
    nomeDin = (char *) malloc(sizeof(char));
    gets(nomeDin);
    cout << nomeDin <<endl;

    //tamnho do nosso novo vetor
    int i = 0;
    for(i=0;nomeDin[i]!='\0';i++);
    int tam = i+1;
    cout << tam;
    
    return 0;

}