#include <iostream>
using namespace std;

int main() {

    cout << "\nDigite uma palavra: ";

    string resposta;
    int tam;
    int vidas = 3;
    int acertos = 0;
    bool pass;
    int i;

    cin >> resposta;
    system("clear");

    tam = resposta.length();
    char palpite[tam];
    char mortos[vidas-1];
    
    for(i=0; i<tam; i++)
        palpite[i] = '_';
    for(i=0; i<vidas-1; i++)
        mortos[i] = ' ';
    

    char tent;

    while(vidas > 0 && acertos!=tam){

        cout << "letras mortas: ";
        for(i=0; i<2; i++)
            cout << mortos[i] << " ";
            
        cout << "\nvidas = " << vidas << endl <<endl;

        for(i=0;i<tam;i++)
            cout << palpite[i] << " ";
        
        cout << "\n\nDigite uma letra: ";
        cin >> tent;

        for(i=0, pass=0;i<tam;i++){
            
            if(resposta[i]==tent){
                palpite[i]=tent;
                pass=1;
                acertos++;
            }
        }
        if(pass==0){
            vidas--;
            mortos[2-vidas] = tent;
        }
        
        system("clear");

        if(acertos == tam)
            cout << "Parabens, voce ganhou";
        if(vidas == 0)
            cout << "Voce perdeu :((";
        
    }
}