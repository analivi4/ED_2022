/*Crie uma estrutura para representar as coordenadas de um ponto no plano (posições X e Y). Em seguida,
 declare e leia do teclado um ponto e exiba a distância dele até a origem das coordenadas,
 isto é, a posição (0,0).
Dica: A distância entre dois pontos $P(x_p,y_p)$ e $Q(x_q,y_q)$, é dada pela fórmula
dist(P,Q) = \sqrt{(x_q-x_p)^2+(y_q-y_p)^2}.
Obs.: deve-se imprimir com precisão de duas casas decimais.*/
#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

struct pontoDoPlano
{
    float x;
    float y;
};

float distancia(pontoDoPlano p)
{
    float dist;
    dist = sqrt(pow(p.x, 2) + pow(p.y, 2));
    return dist;
}

int main()
{
    pontoDoPlano ponto;

    cin >> ponto.x >> ponto.y;

    cout << "A distancia é: ";
    cout << fixed << setprecision(2) << distancia(ponto) << endl;
    return 0;
}