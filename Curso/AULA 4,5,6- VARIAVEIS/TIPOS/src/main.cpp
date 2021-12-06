#include <iostream>

using namespace std;

int main() {
    int A = 0.2;
    float B = 2.49999999999;
    double C =  2.4999999999;
    char D = 'D';
    string E = "elementar";
    bool F = true;

    cout << "\nA = " << A; 
    cout << "\nB = " << B; 
    cout << "\nC = " << C; 
    cout << "\nD = " << D;
    cout << "\nE = " << E;  
    cout << "\nF = " << F;  

    cout << "\n\nDigite um valor para A: ";
    cin >> A;
    cout << "\n\nDigite um valor para B: ";
    cin >> B;
    cout << "\n\nDigite um valor para C: ";
    cin >> C;
    cout << "\n\nDigite uma letra para D: ";
    cin >> D;
    cout << "\n\nDigite um texto para E: ";
    cin >> E;
    cout << "\n\nDigite um valor para F: ";
    cin >> F;

    cout << "\n\nA = " << A; 
    cout << "\nB = " << B; 
    cout << "\nC = " << C; 
    cout << "\nD = " << D;
    cout << "\nE = " << E;  
    cout << "\nF = " << F; 

    return 0; 
}