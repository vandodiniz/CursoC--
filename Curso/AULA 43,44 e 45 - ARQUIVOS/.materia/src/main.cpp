#include <iostream>
#include <fstream>

using namespace std;

int main() {
    
//OFSTREAM - TIPO DE ARQUIVO DE SAIDA, ELE ESCREVE EM ARQUIVOS:

    ofstream arquivoO;                          

  //arquivo.open("teste.txt");                    sobscreve oq tem dentro do arquivo
    arquivoO.open("teste.txt",ios::app);         //adiciona coisas no arquivo

    arquivoO << "Vai tomar no cu, Corona1\n";

    arquivoO.close();

//IFSTREAM - TIPO DE ARQUIVO DE ENTRADA, ELE FAZ A LEITURA DE ARQUIVOS:    

    ifstream arquivoI;
    string string;
    arquivoI.open("teste.txt");

    if(arquivoI.is_open()){
       while(getline(arquivoI,string)){
           cout << string;
       }
        arquivoI.close();
    }
    else{
        cout << "erro ao abrir o arquivo";
    }


//FSTREAM - TIPO DE ARQUIVO DE ENTRADA E SAIDA

    

}