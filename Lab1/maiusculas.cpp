#include <iostream>
#include <cstring>
#include <cctype>
#include <string>

using namespace std;
void minusculo(char* str){
    char c;
    for(int i=0;i<strlen(str);i++){
        c=toupper(str[i]);
        cout<<c;
    }
}
/*  */
int main(){
    string frase;
    getline(cin, frase);
    char* str;
    str=&frase[0];
    minusculo(str);
    cout<<endl;
    return 0;
}