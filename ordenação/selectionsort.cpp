#include <iostream>
#include <vector>
#include <iomanip>
#include <chrono>


using namespace std;

int compara;

auto now(){
    return chrono::high_resolution_clock::now();
}

string retornatempo(chrono::_V2::system_clock::time_point comeco){
    auto duracao=chrono::duration_cast<chrono::milliseconds>(now()-comeco);
    stringstream ss;
    ss<<fixed<<setprecision(3)<<duracao.count()<<"ms";
    return ss.str();
}

void selectionsort(vector<int>& vetor, int tamanho, int i){
    if (tamanho == 1 || i == tamanho){
        return;
    }
    int indice = i;
    for (int j = i+1; j < tamanho; j++){
        compara++;
        if (vetor[j] < vetor[indice]){
            indice = j;
        }   
    }


    swap(vetor[i], vetor[indice]);
    selectionsort(vetor, tamanho, i+1);
}

int main()
{
    auto comeco = now();
    int escolha;

    cout << "escolha"<< endl<< endl;

    cin>>escolha;

    while(escolha!=1){
    compara=0;
    srand(0);
    int tam;

    cout<<"Escolha o tamanho do vetor: ";
    cin>>tam;

    vector<int> vetor(tam);
    for(int i=0; i<tam; i++){
        vetor[i]=rand()%tam;
    }
        comeco=now();
        selectionsort(vetor, tam, 0);
        cout<<"Demorou no Selection Sort: "<< retornatempo(comeco) << endl;
    
    cout<<"Comparações= "<<compara<<endl;
    cout << "escolha"<< endl<< endl;

    cin>>escolha;
    }


}