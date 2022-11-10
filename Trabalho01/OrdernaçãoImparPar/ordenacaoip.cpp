#include <bits/stdc++.h>
#include "ordenacaoip.h"

using namespace std;


void bubllesort_int(vector<int>& vetor, int tamanho){
    bool controle = true;
    int limiteImpar=0;
    
    for (int i = 0; i < tamanho-1 && controle; i++)
    {
        controle = false;        
        for (int j = tamanho-1; j > i; j--)
        {
            if (vetor[j]%2!=0)
            {   
                if(vetor[j-1]%2==0 || vetor[j-1]>vetor[j]){
                swap(vetor[j], vetor [j-1]);
                controle = true;
                }
            }else if (vetor[j-1]%2==0 && vetor[j-1]<vetor[j]){
                swap(vetor[j], vetor [j-1]);
                controle = true;   
            }
        }
    } 

}

void bubllesort_rec(vector<int>& vetor, int tamanho, int i){
    if (i==tamanho)
    return;
    bool controle = true;

    for (int j = tamanho-1; j > i; j--){

        if (vetor[j]%2!=0){   
                if(vetor[j-1]%2==0 || vetor[j-1]>vetor[j]){
                swap(vetor[j], vetor [j-1]);
                controle = false;
                }
        }else if (vetor[j-1]%2==0 && vetor[j-1]<vetor[j]){
                swap(vetor[j], vetor [j-1]);
                controle = false;   
        }
    }
    
    if(controle)
    return; 

    bubllesort_rec(vetor, tamanho, i+1);
}

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

void selectionsort_int(vector<int>& vetor, int tamanho){
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

void selectionsort_rec(vector<int>& vetor, int tamanho, int i){
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
    selectionsort_rec(vetor, tamanho, i+1);
}

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
 
void mergesort_rec(vector<int>& vetor, int inc, int fim){
    if (inc < fim)
    {
        int meio = (inc+fim)/2;
        mergesort_rec(vetor, inc, meio);
        mergesort_rec(vetor, meio+1, fim);
        intercala(vetor, inc, meio, fim);
    }
    
}

void mergesort_int(vector<int>& vetor, int inc, int fim) {
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