#include <iostream>
#include <fstream>
#include <stdlib.h>             //função malloc
#include <stdio.h>  
#include <string>

using namespace std;

int main() {
    
    char op;
    string string;
    fstream arquivo;
    arquivo.open("blacklist_do_lolzin.txt",ios::out|ios::app);
    
    cout << "Voce deseja incluir mais algum condenado? ";
    cin >> op;

   while(op=='s' || op =='S'){
        getline(cin,string);
    

        cout << "Nome: ";
        getline(cin,string);
        arquivo << "Nome: " << string << endl;
        
        cout << "Motivo: ";
        getline(cin,string);
        arquivo << "Motivo: " << string << endl << endl;

        cout << "\nVoce deseja incluir mais algum condenado? ";
        cin >> op;
   }
    arquivo.close();

    system("cls");
    arquivo.open("blacklist_do_lolzin.txt",ios::in);

    if(arquivo.is_open()){
       while(getline(arquivo,string)){
           cout << string << endl;
       }
        arquivo.close();
    }
    else{
        cout << "erro ao abrir o arquivo";
    }
    arquivo.close();

    cout << "\n\nPressione qualquer tecla para fechar";
    cin >> op;
}