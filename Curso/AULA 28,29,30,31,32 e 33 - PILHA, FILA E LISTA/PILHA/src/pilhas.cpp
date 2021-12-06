#include <iostream>
#include <stack>            //biblioteca pra trabalhar com pilhas


/*

push(): adiciona elemento
top():  retorna o elemento do topo
pop():  remove o elemento do topo
size(): retorna o tamanho
empty(): verifica se esta vazio

*/

using namespace std;

int main() {

    stack <string> cartas;        //criação da pilha do tipo string


//inclusão de elementos na pilha:
    cartas.push("Zap");            
    cartas.push("7 de Copas");       
    cartas.push("Espadilha"); 
    cartas.push("7 de Ouros");

//checagem do tamanho da pilha:
    cout << "Tamanho = " << cartas.size() << endl;

//visualizar elemento do topo:
    cout << "Carta do topo = " << cartas.top()<<endl;

//Retirada de elementos na pilha:
    cartas.pop();

    cout << "Tamanho = " << cartas.size() << endl;
    cout << "Carta do topo = " << cartas.top()<<endl;

//Ver se a pilha está vazia
    if(cartas.empty())
        cout << "Pilha Vazia" << endl;
    else
        cout << "Pilha com " << cartas.size() << " cartas" <<endl; 

//Esvaziamento de pilha
    while(!cartas.empty()){
        cout << "Carta retirada: " << cartas.top(); 
        cartas.pop();
        cout << " | Tamanho = " << cartas.size() << endl;
    }

}