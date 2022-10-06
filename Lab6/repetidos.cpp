#include <iostream>

using namespace std;


void repeticao(int *vet, int n){
    int repeticao = 0;
    for(int i = 0; i < n; i++){
        int j=i+1;
        while(j<n){
            if(vet[i] == vet[j]){
                repeticao++;
                break;
            }
            j++;
        }
    }
    cout << repeticao << endl;
}
int main(){
    int n;
    cin >> n;
    int v[n];
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    repeticao(v, n);
}