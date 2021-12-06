#include <iostream>
#include <queue>            //biblioteca pra trabalhar com filas


/*

push():             adiciona elemento
pop():              remove o primeiro elemento
size():             retorna o tamanho
empty():            verifica se esta vazio
front():            retorna o primeire elemento da fila
back():             retorna o ultimo elemento da fila

*/

using namespace std;

int main() {

    queue <string> cartas;          //criação da fila do tipo string


//inclusão de elementos na fila:
    cartas.push("Zap");
    cartas.push("7 de Copas");
    cartas.push("Espadilha");
    cartas.push("7 de Ouros");

//checagem do tamanho da pilha:
    cout << "Tamanho = " << cartas.size() << endl;

//visualizar primeiro elemento:
    cout << "Primeira carta da fila = " << cartas.front()<<endl;

//visualizar ultimo elemento:
    cout << "Ultima carta da fila = " << cartas.back()<<endl<<endl;

//Retirada de elementos da fila:

    while(!cartas.empty()){
    cout << "Carta da frente = " << cartas.front()<<endl;
    cout << "Carta de trás = " << cartas.back()<<endl;
    cout << " | Tamanho = " << cartas.size() << endl <<endl;
    cartas.pop();

    if(cartas.empty())
        cout << "Fila vazia" << endl;
    }




}
