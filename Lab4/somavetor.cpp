#include<iostream>
using namespace std;

int somavetor(int *v, int fim){
    int soma;
    if(fim==0){
        if(v[fim] > 0 ){
        return v[fim];       
    } 
    return 0;
    }

    if(v[fim] > 0 ){
        soma = v[fim] + somavetor(v, fim-1);
        return soma;       
    }
    return somavetor(v, fim-1);
}
int main(){
    int vec[]= {44, 13, -22, 26};
    int i = 3;
    cout<<somavetor(vec, i)<<'\n';
    
}