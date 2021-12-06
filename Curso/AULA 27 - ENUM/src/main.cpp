#include <iostream>
using namespace std;

int main() {
    enum inv{primaria=1, secundaria, faca, granada};
    inv armaSel;
    armaSel = primaria;

    cout << armaSel;

    return 0;
}

