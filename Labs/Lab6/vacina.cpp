#include <iostream>

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

void teste(int Tvaci[], int Tpaci[], int n){
    int quatidadeDeCuras=0;
    for(int i = 0, i<n, i++){
        if(Tvaci[i]>Tpaci[i])
            quatidadeDeCuras++
    }
    if(quatidadeDeCuras==n){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
}

int main (){
    int n;
    cin >> n;
    int vetVacinas[n];
    int vetPaci[n];
    for(int i = 0; i < n; i++){
        cin >> vetVacinas[i]; 
    }
    for(int i = 0; i < n; i++){
        cin >> vetPaci[i]; 
    }
    bubblesort(vetVacinas, n);
    bubblesort(vetPaci, n);

    teste (vetVacinas, vetPaci, n);
}