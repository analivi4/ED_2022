#include <iostream>

using namespace std;

void mergeAB(int *v, int *a, int n, int *b, int m){
    
    int i, j, k=0;
    while (i<n && j<m){
        if (a[i]<=b[j]){
            v[k]=a[i];
            k++;
            i++;
        }else{
            v[k]=b[j];
            k++;
            j++;
        }
    }
    while(i<n){
        v[k]=a[i];
        k++; 
        i++;
    }
    while(j<m){
        v[k]=b[j];
        k++;
        j++;
    }

}

int main(){

int n,m;
cin >> n >> m;

int v[n+m];
int a[n];
int b[m];

for(int i=0;i<n;i++){
-4
cin >> a[i];
}

for(int i=0;i<m;i++){
cin >> b[i];
}

mergeAB(v, a, n, b, m);

for(int i=0;i<n+m;i++){
cout << v[i];
if(i!=n+m-1)
cout << " ";
}


cout << endl;

return 0;

}