#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

struct aluno
{
    string nome;
    int matricula; 
};

int separa_matricula(vector<aluno>& vetor, int inc, int fim){
    int pivo = vetor[fim].matricula;
    string nomeDoPivo = vetor[fim].nome;
    int aux = inc;
    for (int i = inc; i < fim; i++)
    {
        if (vetor[i].matricula <= pivo)
        {
            swap(vetor[i], vetor[aux]);
            aux++;
        }  
    }
vetor[fim] = vetor[aux];
vetor[aux].matricula = pivo;
vetor[aux].nome = nomeDoPivo;
return aux;    
}

void quicksort_matricula( vector<aluno>& vetor, int inc , int fim){
    if (inc < fim ){
    int posPivo = separa_matricula(vetor, inc, fim);
    quicksort_matricula(vetor, inc, posPivo-1);
    quicksort_matricula(vetor, posPivo+1, fim);
    }
}

int separa_nome(vector<aluno>& vetor, int inc, int fim){

    string pivo = vetor[fim].nome;
    int matriculaPivo = vetor[fim].matricula;
    int aux = inc;
    for (int i = inc; i < fim; i++)
    {
        if (vetor[i].nome <= pivo)
        {
            swap(vetor[i], vetor[aux]);
            aux++;
        }  
    }
vetor[fim] = vetor[aux];
vetor[aux].nome = pivo;
vetor[aux].matricula = matriculaPivo;
return aux;    
}

void quicksort_nome(vector<aluno>& vetor, int inc , int fim){
    if (inc < fim ){
    int posPivo = separa_nome(vetor, inc, fim);
    quicksort_nome(vetor, inc, posPivo-1);
    quicksort_nome(vetor, posPivo+1, fim);
    }
}

int main(){

    vector<aluno> turma;

    int tamTurma;

    cout<<"Qual o tamanho da turma?"<<endl;
    cin>>tamTurma;
    turma.reserve(tamTurma);

    for(int i=1; i<=tamTurma; i++){
        aluno aux;
        cout<<"Digite o nome do aluno "<< i <<":"<< endl;
        cin.ignore();
        getline(cin,aux.nome);
        transform(aux.nome.begin(), aux.nome.end(), aux.nome.begin(),
                [](unsigned char c){ return toupper(c); });
        cout<<"Digite a matricula do aluno "<< i <<":"<<endl;
        cin>>aux.matricula;
        turma.push_back(aux);

    }
    
    cout<<"Escolha a forma para ordenar:"<<endl;
    cout<<"1- Ordenar por matrícula.\n2- Ordenar por nome.\n";
    int ecolha;
    cin>>ecolha;

    switch (ecolha)
    {
    case 1:
        quicksort_matricula(turma, 0, tamTurma-1);
        for(auto elem : turma){
        cout<<elem.matricula<<"-"<<elem.nome<<endl;
        }
        break;
    
    case 2:
        quicksort_nome(turma, 0, tamTurma-1);
        for(auto elem : turma){
        cout<<elem.nome<<"-"<<elem.matricula<<endl;
        }
        break;
    }
    return 0;
}