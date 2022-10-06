/*#include<iostream>
#include <math.h>
#include <iomanip>

using namespace std;

struct ponto{
    float x;
    float y;
};

struct retangulo{
    ponto es;
    ponto di;
};

void inorout(retangulo a, ponto b){
    if (b.x>a.es.x && b.x<a.di.x && b.y<a.es.y && b.y>a.di.y)
        cout<<"Ponto dentro do retângulo"<<endl;
    else
       cout<<"Ponto fora do retângulo"<<endl;    
}

int main(){
    retangulo retan;
    ponto pt;

    cin>>retan.es.x>>retan.es.y;
    cin>>retan.di.x>>retan.di.y;

    cin>>pt.x>>pt.y;

    inorout(retan, pt);
}*/

#include <iostream>
using namespace std;
struct ponto{
    float x;
    float y;
};
struct retangulo{
    ponto pontes;
    ponto pontid;
};

void dentrofora(retangulo a, ponto b){
    if(b.x>=a.pontes.x && b.x<=a.pontid.x && b.y<=a.pontes.y && b.y>=a.pontid.y){
        cout<<"Ponto dentro do retângulo"<<"\n";
    }else{
        cout<<"Ponto fora do retângulo"<<"\n";
    }
    
}

int main(){
    retangulo ret;
    cin >> ret.pontes.x>> ret.pontes.y;
    cin >> ret.pontid.x>> ret.pontid.y;    
    ponto p;
    cin >> p.x>>p.y;
    dentrofora(ret, p);
}