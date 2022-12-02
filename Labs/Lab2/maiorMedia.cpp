/*Crie uma estrutura representando um aluno de uma disciplina. Essa estrutura deve conter o número de 
matrícula do aluno, seu nome e as notas de três provas. Agora, escreva um programa que leia os dados de
 cinco alunos e os armazena nessa estrutura. Em seguida, exiba o nome e as notas do aluno que possui a
  maior média geral dentre os cinco.

Obs.: deve-se imprimir com precisão de duas casas decimais.*/
#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm> 

using namespace std;

struct Aluno
{
    int numMatricula;
    string nome;
    float nota1;
    float nota2;
    float nota3;
};

// void lerDados();

float fazerMedia(Aluno a){
    float media;
    media=(a.nota1+a.nota2+a.nota3)/3;
    return media;
}

void print(Aluno maior){
    cout<<fixed<<setprecision(2);
    cout<<"Nome: "<<maior.nome<<endl;
    cout<<"Nota01 "<<maior.nota1<<endl;
    cout<<"Nota02 "<<maior.nota2<<endl;
    cout<<"Nota03 "<<maior.nota3<<endl;
}

int main(){

    Aluno a1, a2, a3, a4, a5;
    float m1, m2, m3, m4, m5;

    /*lerDados(a1);
    lerDados(a2);
    lerDados(a3);
    lerDados(a4);
    lerDados(a5);*/

    cin>>a1.nome>>a1.numMatricula>>a1.nota1>>a1.nota2>>a1.nota3;
    cin>>a2.nome>>a2.numMatricula>>a2.nota1>>a2.nota2>>a2.nota3;
    cin>>a3.nome>>a3.numMatricula>>a3.nota1>>a3.nota2>>a3.nota3;
    cin>>a4.nome>>a4.numMatricula>>a4.nota1>>a4.nota2>>a4.nota3;
    cin>>a5.nome>>a5.numMatricula>>a5.nota1>>a5.nota2>>a5.nota3;

    m1=fazerMedia(a1);
    m2=fazerMedia(a2);
    m3=fazerMedia(a3);
    m4=fazerMedia(a4);
    m5=fazerMedia(a5);

    float vet[]={m1, m2, m3, m4, m5};
    float aux{0};

    for (int i = 0; i < 5; i++)
    {
        if (vet[i]>aux)
        aux=vet[i];
    }

    if(aux==m1){
        print(a1);
        return 0;
    }
    if(aux==m2){
        print(a2);
        return 0;
    }
    if(aux==m3){
        print(a3);
        return 0;
    }
    if(aux==m4){
        print(a4);
        return 0;
    }
    print(a5);
    
}