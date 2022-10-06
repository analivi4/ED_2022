#include <iostream>

using namespace std;

void bubblesort( int A [] , int n ) {
    bool trocou = true;
    int inter=0;
    for ( int i = 0; i < n && trocou; i ++) {
        trocou = false ;
        for ( int j = n -1; j > i ; j--){
            if ( A[j] < A [j -1]) {
            swap ( A[ j ] , A[j -1]) ;
            trocou = true;
            }
        }
        inter++;
        
    }
    cout<<inter<<endl;
}

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i]; 
    }
    bubblesort(a, n);
}