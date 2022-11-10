#include <bits/stdc++.h>

using namespace std;


int separa(vector<int>& vetor, int inc, int fim){
    int pivo = vetor[fim];
    int aux = inc;
    for (int i = inc; i < fim; i++)
    {
        if(pivo%2!=0){
        if (vetor[i]%2!=0 && vetor[i] <= pivo){
            swap(vetor[i], vetor[aux]);
            aux++;
        } 
        }else{
            if(vetor[i]%2!=0 || vetor[i]>= pivo){
                swap(vetor[i], vetor[aux]);
                aux++;
            }
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