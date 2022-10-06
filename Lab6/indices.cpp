/*#include <iostream>

using namespace std;

void bubblesort( int *A, int n ) {
    bool trocou = true;
    for ( int i = 0; i < n && trocou ; i ++) {
        trocou = false ;
        for ( int j = n -1; j > i ; j--){
            if ( A[j] < A [j -1]) {
            swap ( A[ j ] , A[j -1]) ;
            trocou = true;
            }
        }
    }
}

int indices(int vet1[], int a, int n){
    for (int i = 0; i < n; i++){
        if(a==vet1[i]){
            return i;
        }
    }
}

int main(){
    int n;
    cin >> n;
    int vet[n];
    for(int i = 0; i < n; i++){
        cin >> vet[i]; 
    }
    int vetOrin[n];
        for(int i = 0; i < n; i++){
        vetOrin[i]==vet[i]; 
    }
    bubblesort(vet, n);
    
    int vetInd[n];

    for (int i = 0; i < n; i++)
    {
        vetInd[i]=indices(vetOrin, vet[i], n);
        cout<<vetInd[i]<<" ";
    }
    
}*/

#include <iostream>

using namespace std;

void bubblesort(int *a, int n){
    int aux;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - 1; j++){
            if (a[j] > a[j + 1]){
                aux = a[j];
                a[j] = a[j + 1];
                a[j + 1] = aux;
            }
        }
    }
}

int main(){
int n = 0;
cin >> n;
int a[n];
for (int i = 0; i < n; i++){
    cin >> a[i];
}
int auxiliar[n];
for (int i = 0; i < n; i++){
    auxiliar[i] = a[i];
}
bubblesort(auxiliar, n);
for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
        if(a[i] == auxiliar[j]){
            if(i == n - 1){
                cout << j << endl;
            }else{
                cout << j << " ";
            }
        }
    }
}
}