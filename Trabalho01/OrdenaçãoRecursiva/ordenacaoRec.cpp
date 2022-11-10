#include <bits/stdc++.h>
#include "ordenacaoRec.h"

using namespace std;

void bubllesort(vector<int>& vetor, int tamanho, int i){
    if (i==tamanho)
    return;
    bool controle = true;

    for (int j = tamanho-1; j > i; j--){
        if (vetor[j] < vetor[j-1]){
                swap(vetor[j], vetor [j-1]);
                controle = false;
        }
    }
    
    if(controle)
    return; 

    bubllesort(vetor, tamanho, i+1);
}

void insertionsort(vector<int>& vetor, int tamanho, int j){
    if(tamanho==1 || j==tamanho)
    return;
   
    int i=j-1;
    int aux=vetor[j];

    while (i>=0 && vetor[i]>aux){
    vetor[i+1]=vetor[i];
    i--;
    }
    vetor[i+1]=aux;
    insertionsort(vetor, tamanho, j+1);
}

void selectionsort(vector<int>& vetor, int tamanho, int i){
    if (tamanho == 1 || i == tamanho){
        return;
    }
    int indice = i;
    for (int j = i+1; j < tamanho; j++){
        if (vetor[j] < vetor[indice]){
            indice = j;
        }   
    }
    swap(vetor[i], vetor[indice]);
    selectionsort(vetor, tamanho, i+1);
}

void intercala(vector<int>& vetor, int inc, int meio, int fim){
    vector<int> vec_aux;
    int p = inc;
    int q = meio + 1;

    while (p <= meio && q <= fim){
        if (vetor[p] <= vetor[q]){
            vec_aux.push_back(vetor[p]);
            p++;
        }else{
            vec_aux.push_back(vetor[q]);
            q++;
        }
    }
    while (p <= meio){
        vec_aux.push_back(vetor[p]);
        p++;
    }
    while (q <= fim){
        vec_aux.push_back(vetor[q]);
        q++;
    }
    
    for (size_t i = 0; i < vec_aux.size(); i++)
    {
        vetor[inc+i]=vec_aux[i];
    }
    
}
 
void mergesort(vector<int>& vetor, int inc, int fim){
    if (inc < fim)
    {
        int meio = (inc+fim)/2;
        mergesort(vetor, inc, meio);
        mergesort(vetor, meio+1, fim);
        intercala(vetor, inc, meio, fim);
    }
    
}

int separa(vector<int>& vetor, int inc, int fim){
    int pivo = vetor[fim];
    int aux = inc;
    for (int i = inc; i < fim; i++)
    {
        if (vetor[i] <= pivo)
        {
            swap(vetor[i], vetor[aux]);
            aux++;
        }  
    }
vetor[fim] = vetor[aux];
vetor[aux] = pivo;
return aux;    
}

void quicksort( vector<int>& vetor, int inc , int fim){
    if (inc < fim ){
    int posPivo = separa (vetor, inc, fim);
    quicksort(vetor, inc, posPivo-1);
    quicksort(vetor, posPivo+1, fim);
    }
}