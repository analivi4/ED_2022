#include<iostream>

using namespace std;

int somadigito(int a){

    if(a==0)
        return a;

    int soma;
    soma=(a%10)+somadigito(a/10);
    return soma;
}

int main (){
    int num = 136;
    cout<<somadigito(num)<<endl;
}