/*implemente uma função recursiva que calcula a 
multiplicação de dois inteiros usando apenas soma.*/
#include<iostream>

int mul(int a, int b){
    if( a == 0 || b == 0)
        return 0;

    if(b == 1)
     return a;

    int soma;
    soma = a + mul(a, b-1);
    return soma;
}

int main (){
    int aa = 5;
    int bb = 8;
    std::cout<< mul(aa, bb)<<'\n';
}