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


void insertionsort_rec(vector<int>& vetor, int tamanho, int j){
    if(tamanho==1 || j==tamanho)
    return;
        int i,k,aux;

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
        k=j-1;
        while (k > i && vetor[k]<aux){
            vetor[k+1] = vetor[k];
            k--;
        }
        vetor[k+1]=aux;
        }   

    insertionsort_rec(vetor, tamanho, j+1);
}
