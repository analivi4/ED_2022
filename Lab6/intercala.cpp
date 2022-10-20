#include <iostream>

using namespace std;

void mergeAB(int *v, int *a, int n, int *b, int m){
    
    int i, j, k;
    while (k<(m+n)){
        while (i<n){
            while(j<m){
                if (a[i]<b[j]){
                    v[k]=a[i];
                    i++;
                }
            }
        }
    }

}
    }

}

int main(){

int v[100];
int a[50];
int b[50];

int n,m;
cin >> n >> m;

for(int i=0;i<n;i++){
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