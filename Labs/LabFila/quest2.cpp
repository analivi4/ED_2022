#include "Queue.h"
#include <stdlib.h> 
#include <time.h>

using namespace std;

void combina_filas(Queue& f_res, Queue& f1, Queue& f2){
    int tam1 = f1.size();
    int tam2 = f2.size();
    int tam = tam1 + tam2;
    for(int i = 0; i < tam; i++){
        if(f1.empty() && f2.empty())
            break;

        if(f1.empty()){
            f_res.push_back(f2.front());
            f2.pop_front();
        }else if(f2.empty()){
            f_res.push_back(f1.front());
            f1.pop_front();
        }else{
            f_res.push_back(f1.front());
            f1.pop_front();   
            f_res.push_back(f2.front());
            f2.pop_front();
        }   
        
    }
}

int main(){

    int tam = 10;
    Queue fila1(tam), fila2(tam), fila_res(2*tam);

    srand(time(NULL));

    for (int i=0; i<50; i++){
        if(!fila1.full())
            fila1.push_back(rand()%10);
        if(!fila2.full())
            fila2.push_back(rand()%10);
    }

    cout << "Fila 1: " << endl;

    for (int i=0; i<tam; i++){
        Item aux=fila1.front();
        cout << aux << endl;
        fila1.pop_front();
        fila1.push_back(aux);
    }   

    cout << "Fila 2: " << endl;

    for (int i=0; i<tam; i++){
        Item aux=fila2.front();
        cout << aux << endl;
        fila2.pop_front();
        fila2.push_back(aux);
    }

    combina_filas(fila_res, fila1, fila2);

    cout << "Fila resultante: " << endl;

    while (!fila_res.empty()) { 
        cout << fila_res.front() << endl;
        fila_res.pop_front();
    }
}