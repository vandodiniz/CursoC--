#include <iostream>
using namespace std;

int main() {
    
    /*ex1
    int a,b;
    cin >> a;
    cin >> b;

    int n1,n2;
    if(a>b){
        n1=a;
        n2=b;
    }
    else{
        n1=b;
        n2=a;
    }
        

    while(n1!=n2){
        cout << endl << n1;
        n1--;
    }
    cout << endl <<n2;*/

    
    /*EX2
    int a;
    cout << "digite um valor de 0 a 10: ";
    cin >> a;
    while (a<0 || a>10){
        cout << "valor indisponivel, digite outro: ";
        cin >> a;
    }*/

    //EX3
    int a,i,j,k;
    cin >> a;
    for(i=1,j=1,k=1; i<=a; i++){
        
        while(j>0 && j<i){
            k++;
            cout << k;
            j++;
        }
        cout << endl;
        j=1;
    }
}