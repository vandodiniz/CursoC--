#include <iostream>
#include <vector>

using namespace std;

int main() {

    int i;

    //tamanho predeterminado
    vector<int> vec1(3);
    vec1[0]=1;
    vec1[1]=1;
    vec1[2]=1;
    for(i=0;i<3;i++){
        cout<<vec1[i]<< " ";
    }
    cout << endl;

    //tamanho dinamico
    vector<int> vec2;
    vec2.push_back(2);
    vec2.push_back(2);
    vec2.push_back(1);
    vec2[2]=2;
    int tam = vec2.size();

    for(i=0;i<tam;i++){
        cout<<vec2[i]<< " ";
    }
    cout << endl;    

    //inversão de vetores
    vec1.swap(vec2);
    for(i=0;i<3;i++){
        cout<<vec1[i]<< " ";
    }
    cout << endl;
    for(i=0;i<tam;i++){
        cout<<vec2[i]<< " ";
    }
    cout << endl;

    //front,back e at;
    vec2[0]=0;
    vec2[2]=2;
    cout << "primeiro valor de vec 2 = "  << vec2.front()<<endl;

  //cout << "valor do meio = "  << vec2[1]                <<endl;
  //cout << "valor do meio = "  << vec2.at(1)             <<endl;
    cout << "valor do meio = "  << vec2.at(vec2.size()/2) <<endl;

    cout << "ultimo valor de vec 2 = "  << vec2.back()<<endl;

    //insert e erase 
    
    vector<int> vec3;
    vec3.push_back(1);
    vec3.push_back(2);
    vec3.push_back(3);

    vec3.insert(vec3.begin()+1,0);
    tam = vec3.size();

    for(i=0;i<tam;i++){
        cout<<vec3[i]<< " ";
    }
    cout << endl;

    vec3.erase(vec3.begin()+1);
    tam = vec3.size();

    for(i=0;i<tam;i++){
        cout<<vec3[i]<< " ";
    }
    cout << endl;

    //esvaziamento
                                 /* while(!vec3.empty()){
                                        vec3.pop_back();
                                    }
                                */
    vec3.clear();
    tam = vec3.size();
    cout << tam;
}