#include <iostream>
#include <iomanip>

using namespace std;

struct Ponto
{
    float x;
    float y;
};

void troca(Ponto *p1, Ponto *p2){
    Ponto aux;
    aux.x=p1->x;
    aux.y=p1->y;
    p1->x=p2->x;
    p1->y=p2->y;
    p2->x=aux.x;
    p2->y=aux.y;
   
    /*float aux;
    aux=p1->x;
    p1->x=p2->x;
    p2->x=aux;
    aux=p1->y;
    p1->y=p2->y;
    p2->y=aux;*/
}

int main (){
    Ponto a, b;

    cin>>a.x>>a.y;
    cin>>b.x>>b.y;

    troca(&a, &b);

    cout<<fixed<<setprecision(1);
    cout<<a.x<<"-"<<a.y<<endl;
    cout<<b.x<<"-"<<b.y<<endl;
}