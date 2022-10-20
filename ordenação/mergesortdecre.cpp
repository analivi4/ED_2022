#include <iostream>

using namespace std;

void intercala(int *v, int p, int q, int r){
    int *A=new int[r-p+1];
    int i=p, j=q+1, k=0;

    while(i<=q && j<=r){
        if (v[i]>=v[j]){
            A[k]=v[i];
            k++;
            i++;
        }else{
            A[k]=v[j];
            k++;
            j++;
        }
    }
    while(i<=q){
        A[k]=v[i];
        k++;
        i++;
    }
    while(j<=r){
        A[k]=v[j];
        k++;
        j++;
    }
    for (int i = p; i <=r; i++)
    {
        v[i]=A[i-p];

    }
    delete []A;
}

void merge( int *v, int p, int r){
    if (p<r){
        int q;
        q=(p+r)/2;
        merge(v,p,q);
        merge(v,q+1,r);
        intercala(v, p, q, r);
    }

}

int main(){

    int v[]={10, 12, 4, -4, 15, 33};
    int a=0, b=5;

    merge(v,a,b);

    for (int i = 0; i < 6; i++)
    {
        cout<<v[i]<<" ";
    }
    


}