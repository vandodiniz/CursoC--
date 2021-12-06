#include <iostream>
#include <list>                 //biblioteca pra list

using namespace std;

/*

push_front():             adiciona elemento
push_back():              adiciona elemento
pop_front():              remove o primeiro elemento
pop_back():               remove o ultimo elemento
size():                   retorna o tamanho
empty():                  verifica se esta vazio
front():                  retorna o primeire elemento da fila
back():                   retorna o ultimo elemento da fila
sort():                   ordena os valores em ordem crescente
reverse():                inverte a ordem da lista
clear():                  esvazia a lista
merge(lista2)             mescla as duas listas


ITERATOR

begin()
advance(nome,posição):      avança o it praquela posição
insert(nome,valor):         insere o valor onde o iterator está
erase():                    remove o elemento da lista


*/


int main() {

    list<string> cartas;          //criação da list do tipo string


//inclusão de elementos na lista:
    cartas.push_front("Zap");            
    cartas.push_front("7 de Copas");       
    cartas.push_front("Espadilha"); 
    cartas.push_front("7 de Ouros");

//checagem do tamanho da lista:
    cout << "Tamanho = " << cartas.size() << endl;

//visualizar primeiro elemento:
    cout << "Primeira carta da Lista = " << cartas.front()<<endl;

//visualizar ultimo elemento:
    cout << "Ultima carta da Lista = " << cartas.back()<<endl<<endl;

//Retirada de elementos da lista:
    
    int i;
    for(i=0;!cartas.empty();i++){
        cout << "Carta da frente = " << cartas.front()<<endl;
        cout << "Carta de trás = " << cartas.back()<<endl;
        cout << "Tamanho = " << cartas.size() << endl <<endl;
        if(i%2==0)
            cartas.pop_front();
        if(i%2==1)
            cartas.pop_back();
        
        if(cartas.empty())
            cout << "lista vazia" << endl <<endl;
    }

//Inserção de elementos no meio da lista:

    cartas.push_front("Zap");            
    cartas.push_front("7 de Copas");       
    cartas.push_front("Espadilha"); 
    cartas.push_front("7 de Ouros");

    list<string>::iterator it;
    it=cartas.begin();
    advance(it,2);
    cartas.insert(it,"3");
    
   // cartas.sort();
    //cartas.reverse();

    cartas.erase(it);

    int tam = cartas.size();
    for(i=0; i<tam; i++){
        cout << cartas.front() <<endl;
        cartas.pop_front();
    }


//esvaziamento simples

    cartas.push_front("Zap");            
    cartas.push_front("7 de Copas");       
    cartas.push_front("Espadilha"); 
    cartas.push_front("7 de Ouros");

    cout << "\ntamanho = " << cartas.size();
    cartas.clear();
    cout << "\ntamanho = " << cartas.size() <<endl;

//mesclagem de listas

    list<string> cartas2;
    cartas.push_front("Zap");            
    cartas.push_front("7 de Copas");       
    cartas.push_front("Espadilha"); 
    cartas.push_front("7 de Ouros");
    
    cartas2.push_front("3");            
    cartas2.push_front("3");       
    cartas2.push_front("2"); 
    cartas2.push_front("K");

    cartas.merge(cartas2);

    tam = cartas.size();
    for(i=0; i<tam; i++){
        cout << cartas.front() <<endl;
        cartas.pop_front();
    }

}