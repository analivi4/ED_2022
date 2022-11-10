#include "selectionsort.cpp"
#include <iostream>
#include <vector>
#include <iomanip>
#include <chrono>

using namespace std;

auto now(){
    return chrono::high_resolution_clock::now();
}

string retornatempo(chrono::_V2::system_clock::time_point comeco){
    auto duracao=chrono::duration_cast<chrono::milliseconds>(now()-comeco);
    stringstream ss;
    ss<<fixed<<setprecision(3)<<duracao.count()<<"ms";
    return ss.str();
}

int main(){
    srand(0);   
    int tam;
    
    cout<<"Escolha o tamanho do vetor:"<<endl;
    cin>>tam;

    vector<int> vetor(tam);
    for(int i=0; i<tam; i++){
        vetor[i]=rand()%tam;
    }

   /* cout << "Ordenação Recursiva\nSelecione o Algoritmo de Ordenação"<< endl<< endl;
    cout << "Bubble Sort -- 1\nIncertion Sort -- 2\nSelection Sort -- 3\nMerge Sort -- 4\nQuick Sort--5\n";

    cin>>num;*/
    auto comeco=now();
    insertionsort_int(vetor, tam);
    cout<<"Demorou: "<< retornatempo(comeco) << endl;

    for(auto elem : vetor){
        cout<<vetor[elem]<<" ";
    }

}