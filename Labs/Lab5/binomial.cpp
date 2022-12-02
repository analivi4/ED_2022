#include <iostream>

using namespace std;

int binomial(int n, int k){
    if (k==0 || k==n){
        return 1;
    }
    int aux;
    aux=binomial(n-1, k-1)+binomial(n-1, k);
    return aux;
}

int main(){
    int k, n;

    cin>>n>>k;

    cout<<binomial(n, k)<<endl;

    return 0;
}