/*Implemente a seguinte função usando ponteiros:

char *strcpy(char *destino, char *origem)

Essa função copia a string origem em destino. Ela também supõe que o tamanho de destino é maior ou igual ao de origem. 

O valor retornado é destino.

Obs.: Deve-se copiar byte a byte. Não pode usar nenhuma função auxiliar.*/

#include <iostream>

using namespace std;

char *strcpy(char *destino, char *origem){
    int i=0;
    while (*origem!='/0')
    {
      *(destino+i)=*(origem+i);
      i++; 
    }
    return destino;    
}

int main(){

}