#include"matrix.hpp"

matrix::matrix(int n, int m)
{
    this->m = m;
    this->n = n;

    for (int i = 0; i < n; i++)
    {
        vector<double> linha;
        for (int j = 0; j < m; j++)
        {
            linha.push_back(0);
        }
        mat.push_back(linha);
    }
}

matrix::~matrix()
{
}

double matrix::acessar(int i, int j)
{
    return this->mat[i][j];
}

void matrix::atribuirvalor(int i, int j, double valor)
{
    this->mat[i][j] = valor;
}

int matrix::numeroLinhas()
{
    return this->n;
}

int matrix::numeroColunas()
{
    return this->m;
}

void matrix::imprimir()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << this->mat[i][j] << " ";
        }
        cout << endl;
    }
}

bool matrix::comparar(matrix m1, matrix m2)
{
    if (m1.numeroLinhas() != m2.numeroLinhas() || m1.numeroColunas() != m2.numeroColunas())
    {
        return false;
    }
    else
    {
        for (int i = 0; i < m1.numeroLinhas(); i++)
        {
            for (int j = 0; j < m1.numeroColunas(); j++)
            {
                if (m1.acessar(i, j) != m2.acessar(i, j))
                {
                    return false;
                }
            }
        }
    }
    return true;
}