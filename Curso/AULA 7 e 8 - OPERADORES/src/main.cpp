#include <iostream>

using namespace std;

int main() {
   
   // TIPOS DE OPERADORES: + , - , * , / , %(resto) , ()

   int a,b,c,res;
   a = 1;
   b = 10;
   c = 5;

    res = ((a+b)*c - ((b/c)-a))%2;

    cout << res << endl<<a<<endl;

    //FORMAS REDUZIDAS

    a+=2; //incrementa 2, a =3
    a-=1; //decrementa 1  a =2
    a++;  //incrementa 1  a =3
    a--;  //decrementa 1  a =2
    
    a*=2; //multiplica a por 2              a =4
    a/=4; //divide a por 4                  a =1
    a%=2;  //resto da divisão de a por 2    a =1
    
    cout <<++a <<endl;  //imprime 2, a = 2
    cout <<a++ <<endl;  //imprime 2, a = 3
    cout <<a;
}