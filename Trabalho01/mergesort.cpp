#include <bits/stdc++.h>

using namespace std;

void intercala(vector<int>& vetor, int inc, int meio, int fim){
    vector<int> vec_aux;
    int p = inc;
    int q = meio + 1;

    while (p <= meio && q <= fim){
        if(vetor[p]%2!=0){
            if(vetor[q]%2==0 || vetor[p] <= vetor[q]){
            vec_aux.push_back(vetor[p]);
            p++;
            }else{
            vec_aux.push_back(vetor[q]);
            q++;
            }
        }else if(vetor[q]%2==0 && vetor[p]>=vetor[q]){
            vec_aux.push_back(vetor[p]);
            p++;
        }else{
            vec_aux.push_back(vetor[q]);
            q++;
        }
    }
    while(p <= meio){
        vec_aux.push_back(vetor[p]);
        p++;
    }
    while(q <= fim){
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


void mergesortint(vector<int>& vetor, int inc, int fim) {
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