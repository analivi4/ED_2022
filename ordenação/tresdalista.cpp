#include <iostream>

using namespace std;

void separa ( int A [] , int n , int k ) {
    int c = A [k];
    int j = 0 ;
    for ( int i = 0 ; i < n ; i++) {
        if ( A [ i ] <= c ) {
        std :: swap ( A [ i ] , A [ j ]) ;
        j ++;
    }
}
A [ n-1 ] = A [ j ];
A [ j ] = c ;
for (i=0;i<=k;i++){
     cout<<A[i]<<" ";
}
}