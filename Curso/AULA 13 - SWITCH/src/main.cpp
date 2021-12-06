#include <iostream>

using namespace std;

int main() {
    
    int a;
    cout << "\nDigite um numero de 1 a 3: ";
    cin >> a;

    switch(a){

        case 1:
            cout<<"\nOpção 1 selecionada!";
            break;
        case 2:
            cout<<"\nOpção 2 selecionada!";
            break;            
        case 3:
            cout<<"\nOpção 3 selecionada!";
            break;
        default:
            cout<<"\nNenhuma opção selecionada!";
    }
}