#include<iostream>
using namespace std;

/*void selection(int *vetor, int tamanho){
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
    
}*/

void selection_rec(int *vetor, int tamanho, int i){
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
    selection_rec(vetor, tamanho, i+1);
}




int main(){
    int a[] = {40,50,30,10,20};
    int n = 5;
    selection_rec(a, n, 0);
    for (int i = 0; i < n; i++)
    {
        cout<< a[i] << " ";
    }
    
}