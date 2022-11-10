#include <bits/stdc++.h>

using namespace std;

void insertionsort_int(vector<int>& vetor, int tamanho){
    int i,j,aux;
    for ( int j = 1; j < tamanho; j++)
    {
        aux = vetor[j];
        i = j-1;
        if(aux%2!=0){
        while (i >=0 && vetor[i]>aux){
            vetor[i+1] = vetor[i];
            i--;
        }
        vetor[i+1]=aux;
        }
        if(aux%2==0){
        int k=j-1;
        while (k > i && vetor[k]<aux){
            vetor[k+1] = vetor[k];
            k--;
        }
        vetor[k+1]=aux;
        }    
    }
    
}

void selection(vector<int>& vetor, int tamanho){
    for (int i = 0; i < tamanho -1; i++)
    {
        int indice = i;
        for (int j = i+1; j < tamanho; j++)
        {
            if (vetor[indice]%2!=0){
            if(vetor[j]%2!=0 && vetor[j]<vetor[indice])
                indice =j;
            }

            if (vetor[indice]%2==0){
            if(vetor[j]>vetor[indice] || vetor[j]%2!=0)
                indice = j;
            }
            
        }
        swap(vetor[i], vetor[indice]);
        
    }   
}

void selection_rec(vector<int>& vetor, int tamanho, int i){
    if (tamanho == 1 || i == tamanho){
        return;
    }
    int indice = i;
        for (int j = i+1; j < tamanho; j++)
        {
            if (vetor[indice]%2!=0){
            if(vetor[j]%2!=0 && vetor[j]<vetor[indice])
                indice =j;
            }
            
            if (vetor[indice]%2==0){
            if(vetor[j]>vetor[indice] || vetor[j]%2!=0)
                indice = j;
            }
            
        }   
    swap(vetor[i], vetor[indice]);
    selection_rec(vetor, tamanho, i+1);
}

