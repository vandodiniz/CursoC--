#include <iostream>
using namespace std;

/*
argc = numero de parametros
argv[] = parametros em si

argv[0] = sempre é o nome do programa

passagem de parametros no cmd:

nome.exe a b c ----> 'a' é o segundo parametro, 'b' é o terceiro, etc

*/

int main(int argc,char *argv[]) {               
   
    int i;

    cout << "Numero de argumentos no programa = " << argc << "\n\nArgumentos:\n";
    for(i=0;i<argc;i++){
        cout << argv[i] << endl;
    }
}