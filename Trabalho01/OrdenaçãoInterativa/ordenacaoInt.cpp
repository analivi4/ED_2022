#include <bits/stdc++.h>
#include "ordenacaoInt.h"

using namespace std;


void bubllesort(vector<int>& vetor, int tamanho){
    bool controle = true;
    for (int i = 0; i < tamanho-1 && controle; i++)
    {
        controle = false;
        for (int j = tamanho-1; j > i; j--)
        {
            if (vetor[j] < vetor[j-1])
            {
                swap(vetor[j], vetor [j-1]);
                controle = true;
            }
        }
    }  
}

void insertionsort(vector<int>& vetor, int tamanho){
    int i,j,aux;
    for ( int j = 1; j < tamanho; j++)
    {
        aux = vetor[j];
        i = j-1;
        while (i >=0 && vetor[i]>aux)
        {
            vetor[i+1] = vetor[i];
            i--;
        }
        vetor[i+1]=aux;
        
    }
    
}

void selectionsort(vector<int>& vetor, int tamanho){
    for (int i = 0; i < tamanho -1; i++)
    {
        int indice = i;
        for (int j = i+1; j < tamanho; j++)
        {
            if (vetor[j] < vetor[indice])
            {
                indice = j;
            }
            
        }
        swap(vetor[i], vetor[indice]);
        
    }   
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

void mergesort(vector<int>& vetor, int inc, int fim) {
    int i, bloco;
    for(bloco = 1; bloco <= fim-inc; bloco = 2*bloco){
        for(i = inc; i <= fim-bloco; i += 2*bloco){
            int final = i+(2*bloco)-1;
            if(final>fim)
            final=fim;
            intercala(vetor, i, i+bloco-1, final);
        }
    }
}