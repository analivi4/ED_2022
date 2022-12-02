#include<iostream>
#include<vector>

using namespace std;

class matrix
{
private:
    int m, n;
    vector<vector<double>> mat;
public:
    
matrix(int n, int m);
~matrix();
double acessar(int i, int j);
void atribuirvalor(int i, int j, double valor);
int numeroLinhas();
int numeroColunas();
void imprimir();
bool comparar(matrix m1, matrix m2);
};
