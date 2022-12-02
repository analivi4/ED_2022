#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(){

    int num;
    double raiz;
    cin>>num;
    raiz=sqrt(num);
    for(int i=0;i<10;i++){
        cout<<fixed<<setprecision(i)<<raiz<<endl;
    }

    return 0;
}