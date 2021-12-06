COMANDOS PRA COMPILAR EM C++ NO PROMPT

cd "caminho"            //vai pro caminho inserido
        //ex: cd C:\Users\vando\OneDrive\Documentos\UFMG\C++\AULA 21 - FUNÇÃO MAIN\src


cd ..                   //retrocede um caminho
dir                     //mostra as pastas e arquivos do caminho atual

cls                     //limpa o cmd


g++ main.cpp                               //compila o arquivo e gera um a.exe
g++ main.cpp -o nome                       //compila o arquivo e gera um nome.exe
g++ -c modulo.cpp                          //compila mas gera um .o em vez de um .exe (util pra modulos)
g++ main.cpp modulo.o modulo2.o            //compula o main.cpp junto com as bibliotecas criadas (.o)
g++ main.cpp modulo.o modulo2.o -o nome    //compula o main.cpp junto com as bibliotecas criadas (.o) e gera um nome.exe
