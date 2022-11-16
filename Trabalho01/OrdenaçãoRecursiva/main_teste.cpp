#include "ordenacaoRec.h"
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


    cout << "Ordenação Recursiva\nSelecione o Algoritmo de Ordenação"<< endl<< endl;
    cout << "Bubble Sort -- 1\nIncertion Sort -- 2\nSelection Sort -- 3\nMerge Sort -- 4\nQuick Sort--5\n";

    int escolha;
    cin>>escolha;

    auto comeco=now();

    switch (escolha)
    {
    case 1:
        comeco=now();
        bubllesort(vetor, tam, 0);
        cout<<"Demorou no Bublle Sort: "<< retornatempo(comeco) << endl;
        break;
    case 2:
        comeco=now();
        insertionsort(vetor,tam,0);
        cout<<"Demorou no Incerttion Sort: "<< retornatempo(comeco) << endl;
        break;
    case 3:
        comeco=now();
        selectionsort(vetor, tam, 0);
        cout<<"Demorou no Selection Sort: "<< retornatempo(comeco) << endl;
        break;
    case 4:
        comeco=now();
        mergesort(vetor, 0, tam-1);
        cout<<"Demorou no Merge Sort: "<< retornatempo(comeco) << endl;
        break;
    case 5:
        comeco=now();
        quicksort(vetor, 0, tam-1);
        cout<<"Demorou no Quick sort: "<< retornatempo(comeco) << endl;
        break;
    }

}