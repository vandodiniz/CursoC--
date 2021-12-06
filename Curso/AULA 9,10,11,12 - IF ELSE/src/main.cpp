#include <iostream>

using namespace std;

int main() {

    int a,b,c;
    cin >> a;
    cin >>b;

    //operadores lógicos: >, <, >=, <=, ==, !=
    //                    && (and), || (or), !x (not x)

    if(a>b){
        cout << "\nA é maior que B";
    }
    else if(a<b){
        cout << "\nA é menor que B\n";
    }
    else
        cout << "\nA é igual a B\n";

    //operador ternário

    (a>b) ? c = 1 : c = 0;
    cout << c;

}