#include <iostream>
#include <fstream>
#include <stdio.h>

using namespace std;

int main() {

    char seps[]=",";

    int camisa, pool;
    string linha;
    char *nome, *func;
    int maiorPool = 0;
    string maiorNome;


    fstream arquivo;
    arquivo.open("clash.txt",ios::in);

    if(arquivo.is_open()){

        while(!arquivo.eof()){
            getline(arquivo,linha);
            camisa = atoi(strktok(&linha[0],seps));
        }
        arquivo.close();
    }
    else
        cout << "Erro ao abrir arquivo";
}