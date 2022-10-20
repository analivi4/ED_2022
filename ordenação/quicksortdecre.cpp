#include <iostream>

using namespace std;

int separa ( int *A , int p , int r ) {
    int c = A[r];
    int j = p ;
    for ( int k = p ; k < r ; k ++) {
        if ( A [ k ] >= c ) {
        swap ( A [ k ] , A [ j ]) ;
        j++;
        }
    }
    A [ r ] = A [ j ];
    A [ j ] = c ;
    return j ;
}

void quicksort ( int *A, int p , int r ) {
    if ( p < r ) {
    int i = separa (A , p , r ) ;
    quicksort (A , p , i -1) ;
    quicksort (A , i +1 , r ) ;
    }
}

int main(){

    int v[]={10, 12, 4, -4, 15, 33};
    int a=0, b=5;

    quicksort(v,a,b);

    for (int i = 0; i < 6; i++)
    {
        cout<<v[i]<<" ";
    }
    


}

