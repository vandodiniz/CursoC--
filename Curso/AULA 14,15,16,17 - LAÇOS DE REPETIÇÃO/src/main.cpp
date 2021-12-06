#include <iostream>

using namespace std;

int main() {
    int a,b,c,d;
    a=0;
    b=0;
    
   //while porco
   while(1){
       cout<<a<<endl;
       a++;
       if(a==10)
        break;
   }

   //while
   while(b<10){
       cout<<b<<endl;
       b++;
   }

   //do while
   do{
       cout<<b<<endl;
       b++;
   }while(b<10);

   //for
   for(c=0; c<10; c++){
       cout<<c<<endl;
   }

    //for mais complexo
   for(c=0, d=1; c<=10 && d<5 ; c++, d+=2){
       cout<<c<<" - "<<d<<endl;
   }
}