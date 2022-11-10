#include "ordenacaoip.h"
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vetor{85, 04, 07, 70, -7, 13, 44, 04};
    int tam = vetor.size(), num;

    cout << "\nOrdenação Impar ou Par\nSelecione o Algoritmo de Ordenação Recursivo ou interativo\n"<< endl << endl;
    cout << "Recursivo--1 \nInterativo--2\n";
    
    int escolha;

    cin>>escolha;

    int num;

    switch (escolha)
    {
    case 2:
        cout << "\nOrdenação Interativa\nSelecione o Algoritmo de Ordenação"<< endl<< endl;
        cout << "\nBubble Sort -- 1\nIncertion Sort -- 2\nSelection Sort -- 3\nMerge Sort -- 4\n";

        cin>>num;

        switch (num)
        {
        case 1:
            bubllesort_int(vetor, tam);
            break;
        case 2:
            insertionsort_int(vetor,tam);
            break;
        case 3:
            selectionsort_int(vetor, tam);
            break;
        case 4:
            mergesort_int(vetor, 0, tam-1);
            break;
        }
        for (auto elem : vetor)
        {
            cout << elem << " ";
        }
        break;
    
    case 1:
        cout << "\nOrdenação Recursiva\nSelecione o Algoritmo de Ordenação"<< endl<< endl;
        cout << "\nBubble Sort -- 1\nIncertion Sort -- 2\nSelection Sort -- 3\nMerge Sort -- 4\nQuick Sort -- 5\n";

        cin>>num;

        switch (num)
        {
        case 1:
            bubllesort_rec(vetor, tam, 0);
            break;
        case 2:
            insertionsort_rec(vetor,tam,0);
            break;
        case 3:
            selectionsort_rec(vetor, tam, 0);
            break;
        case 4:
            mergesort_rec(vetor, 0, tam-1);
            break;
        case 5:
            quicksort(vetor, 0, tam-1);
            break;
        
        }
        for (auto elem : vetor)
        {
            cout << elem << " ";
        }
        break;
    }
}