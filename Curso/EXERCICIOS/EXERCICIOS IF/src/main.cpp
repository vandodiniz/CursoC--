#include <iostream>

using namespace std;

int main() {
    /*ex 1
    int a,b;
    cin >>a;
    cin >>b;

    if(a>b)
        cout<< "a > b\n";
    else if(a<b)
        cout<< "a < b\n";
    else if(a==b)
        cout<< "a = b\n";
    */

   //ex4

   int a,b,c,n1,n2,n3;
    cin >>a;
    cin >>b;
    cin >>c;

    if(a<b){
        if(a<c){
            n1=a;
            if(b<c){
                n2=b;
                n3=c;
            }
            else {
                n2=c;
                n3=b;
            }
        }
        if(a>=c){
            n1=c;
            n2=a;
            n3=b;
        }
    else{
        if(b<c){
            n1=b;
            if(a<c){
                n2=a;
                n3=c;
            }
            else{
                n2=c;
                n3=a;
            }
        } 
        if(c<=b){
            n1=c;
            n2=b;
            n3=a;
        } 
    }
    }   
    cout<<"\nordem crescente: "<< n1 << "," <<n2 << ","<< n3;
    cout<<"\nordem decrescente: "<< n3 << "," <<n2 << ","<< n1;
}