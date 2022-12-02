#include <math.h>
#include <iostream>

using namespace std;

int raizes(float a, float b, float c, float *x1, float *x2){
    float delta=(pow(b,2))-(4*a*c);
    if(delta<0)
        return -1;
    else{
        float raiz1=((-b+sqrt(delta))/(2*a)),
              raiz2=((-b-sqrt(delta))/(2*a));
        *x1=raiz1;
        *x2=raiz2;
        if(delta==0)
            return 1;
        else
            return 2;
    }
}

int main(){

    float a=0, b=0, c=0, x1=0, x2=0;
    float *p1=&x1, *p2=&x2;

    cin>>a>>b>>c;

    int raiz=raizes(a,b,c,p1,p2);

    cout<<raiz<<endl;

   switch (raiz)
   {
    case -1:
    cout<<"Não possui raizes reais!"<<endl;
    break;

    case 1:
    cout<<"x1="<<x1<<endl;
    break;
    
    case 2:
    cout<<"x1="<<x1<<"\n"<<"x2="<<x2<<endl;
    break;
   

   }
   
   /*
    if(raiz<0)
        cout<<"Não possui raizes reais!"<<endl;
    else if(raiz==1)
        cout<<"x1="<<x1<<endl;
    else
        cout<<"x1="<<x1<<"\n"<<"x2="<<x2<<endl; */

}