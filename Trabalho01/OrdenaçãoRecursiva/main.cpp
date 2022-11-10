#include "ordenacaoRec.h"
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vetor{85, 04, 07, 70, -7, 13, 44, 04};
    int tam = vetor.size(), num;

    cout << "Ordenação Recursiva\nSelecione o Algoritmo de Ordenação"<< endl<< endl;
    cout << "Bubble Sort -- 1\nIncertion Sort -- 2\nSelection Sort -- 3\nMerge Sort -- 4\nQuick Sort--5\n";

    cin>>num;

    switch (num)
    {
    case 1:
        bubllesort(vetor, tam, 0);
        break;
    case 2:
        insertionsort(vetor, tam, 1);
        break;
    case 3:
        selectionsort(vetor, tam, 0);
        break;
    case 4:
        mergesort(vetor, 0, tam-1);
        break;
    case 5:
        quicksort(vetor, 0, tam-1);
        break;
    
    }
    for (auto elem : vetor)
    {
        cout << elem << " ";
    }


}