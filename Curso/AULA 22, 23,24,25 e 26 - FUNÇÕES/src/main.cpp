#include <iostream>
using namespace std;

//ARGUMENTO PADRÃO - PRECISA PROTOTIPAR
int arg(int a=0,int b=0);
int arg(int a,int b){
    return a+b;
}

//SOBRECARGA DE FUNÇÕES:
void texto(){
    cout << "Função print!\n";
}

void texto(int a){
    cout << a << endl;
}

//COMUNICAÇÃO ENTRE FUNÇÕES:
int soma(int a,int b){
    int c;
    c = a+b;
    texto(c);
    return c;
}

//RECURSIVIDADE - FUNÇOES QUE CHAMAM ELA MESMA
void contador(int cont, int num){
    cout << cont << endl;
    cont++;
    if(num >=cont)
        contador(cont,num);
}

int fatorial(int a){
    
    if(a==1 || a==0)
        return 1;

    if(a>1)
        return a * fatorial(a-1);
}

int fibonacci(int a){
    if(a==1)
        return 0;
    else if(a==2)
        return 1; 
    else if(a>2)
        return fibonacci(a-1) + fibonacci(a-2);
}

int main() {

    int a;

    texto();

    a = soma(10,10);
    cout << a << endl;

    a = arg();
    cout << a << endl;

    contador(0,20);

    a = fatorial(5);
    cout << a << endl;

    a=fibonacci(7);
    cout << a << endl;
}