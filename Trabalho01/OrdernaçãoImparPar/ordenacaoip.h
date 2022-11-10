#include <bits/stdc++.h>

using namespace std;

void bubllesort_int(vector<int>& vetor, int tamanho);

void bubllesort_rec(vector<int>& vetor, int tamanho, int i);

void insertionsort_int(vector<int>& vetor, int tamanho);

void insertionsort_rec(vector<int>& vetor, int tamanho, int j);

void selectionsort_int(vector<int>& vetor, int tamanho);

void selectionsort_rec(vector<int>& vetor, int tamanho, int i);

void intercala(vector<int>& vetor, int inc, int meio, int fim);
 
void mergesort_rec(vector<int>& vetor, int inc, int fim);

void mergesort_int(vector<int>& vetor, int inc, int fim);

int separa(vector<int>& vetor, int inc, int fim);

void quicksort( vector<int>& vetor, int inc , int fim);