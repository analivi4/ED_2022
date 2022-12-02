#include "Queue.h"
const int MAX = 10;

using namespace std;

void tirar_negativos(Queue& fila) {
    int tam = fila.size();
    for(int i = 0; i < tam; i++){
        Item aux=fila.front();
        if(aux < 0){
            fila.pop_front();
        }else{
            fila.pop_front();
            fila.push_back(aux);
        }
    }
}

int main(){
    Queue fila(MAX);

    srand(time(NULL));

    for (int i=0; i<50; i++){
         if(!fila.full())
            fila.push_back(rand()%21-10);
    }

    cout << "Fila original: " << endl;

    for (int i=0; i<MAX; i++){
        Item aux=fila.front();
        cout << aux << endl;
        fila.pop_front();
        fila.push_back(aux);
    }

    tirar_negativos(fila);

    cout << "Fila sem negativos: " << endl;

    while (!fila.empty()) { 
        cout << fila.front() << endl;
        fila.pop_front();
    }
    
}