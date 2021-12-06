#include <iostream>
#include <fstream>

using namespace std;

int main() {

    int linhas,colunas,i,j;

    fstream arquivo;
    arquivo.open("matrizes.txt",ios::in);

    if(arquivo.is_open()){
        arquivo >> linhas >> colunas;
        int m1[linhas][colunas];
        int m2[linhas][colunas];

        //preenchimento das matrizes:
        for(i=0; i<linhas;i++){
            for(j=0;j<colunas;j++){
                arquivo >> m1[i][j];
            }
        }

        for(i=0; i<linhas;i++){
            for(j=0;j<colunas;j++){
                arquivo >> m2[i][j];
            }
        }

        // //impressão das matrizes:
        // for(i=0; i<linhas;i++){
        //     for(j=0;j<colunas;j++){
        //         cout << m1[i][j] << " ";
        //     }
        //     cout << endl;
        // }

        // for(i=0; i<linhas;i++){
        //     for(j=0;j<colunas;j++){
        //         cout << m2[i][j] << " ";
        //     }
        //     cout << endl;
        // }

        arquivo.close();

        arquivo.open("soma.txt",ios::out);
        arquivo << linhas << " " << colunas << endl;
        for(i=0;i<linhas;i++){
            for(j=0;j<colunas;j++)
                arquivo << m1[i][j] + m2[i][j] << " ";
            arquivo << endl;
        }
        arquivo.close();
    }
    else
        cout << "arquivo não encontrado";
    return 0;
}