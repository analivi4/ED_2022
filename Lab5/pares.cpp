#include <iostream>

using namespace std;

void imprimirPares(int i, int n){
    if(i==n){
        if (n%2==0)
            cout<<n<<endl;
        return;
    }else{
        if(i%2==0){
            cout<<i<<" ";
        }
        imprimirPares(i+1, n);
    }
}

int main(){
    int num;

    cin>>num;
    
    imprimirPares(1,num);

    return 0;
}