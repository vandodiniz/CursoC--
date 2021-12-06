#include <iostream> //BIBLIOTECAS

#include <iomanip>

using namespace std; //namespace std pra n precisar usar std antes das funçoes

int main() {

    int num = 10;

    cout << "Olá, mundo!" << endl;          // 'endl' quebra linha
    cout << "Olá, mundo!\n";                // '\n' quebra linha
    cout << "\tOlá, mundo!\tOlá, mundo!" <<endl;                // '\t' efeito TAB
    cout << "Olá, mundo!\a" <<endl;                //  '\a' emite som de alerta
    cout << "\\ Olá, mundo!" <<endl;                // '\\' printa o barra
    cout << " \"Olá, mundo!\" \n" <<endl;                // '\"' printa as aspas
    cout << "valor = " << num << endl;
    cout << "valor = " << setw(10) << num << endl;
    cout << "valor = " << setw(10) << setfill('x') << num << endl;
    cout << flush;                          // 'flush' esvazia o buffer de saída

    //EXERCICIO 1:
    cout << "O primeiro programa a gente nunca esquece!\n" << endl;

    //EXERCICIO 2:
    cout << "Vando Carlos Diniz Reis\nRua Santa Teresinha\n31.365.180\n31 999161900\n" << endl;

    //EXERCICIO 3:
    cout << "Vando Carlos Diniz Reis" << endl << "Rua Santa Teresinha" << endl <<"31.365.180"<<endl<<"31 999161900\n" << endl;

    //EXERCICIO 4:
    cout << "A arte é um antídoto\n" << endl;

    //EXERCICIO 5:
    cout << "e ai, bora jogar lol?\n" << endl;

    //EXERCICIO 6:
    cout << "Conseguir um emprego\n" << endl;

    //EXERCICIO 7:
    cout << "xxxxx\nx   x\nx   x\nx   x\nxxxxx\n" << endl;

    //EXERCICIO 8:
    cout << "ALUNO(A)\tNOTA\n========\t====\nMARIO   \t9.0\nJOAO    \t10.0\nALICE   \t7.0\n" << endl;

    //EXERCICIO 9:
    cout << "CCCCC\nC\nC\nC\nC\nCCCCC\n" << endl;

    //EXERCICIO 10:
    cout << "0 - FIM\n1 - INCLUI \n2 - ALTERA \n3 - EXCLUI \n4 - CONSULTA \nOPÇÃO:\n" << endl;

    //EXERCICIO 11:
    cout << "  x\n xxx\nxxxxx\n  x\n xxx\n" << endl;



    return 0;
}