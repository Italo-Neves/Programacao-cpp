#include <iostream>
using namespace std;

int potencia(int base, int expoente);

int main(){
int b, e, res;
    cout<<"Digite a base: ";
    cin >> b;

    cout <<"Digite o expoente: ";
    cin >> e;


    res = potencia(b, e);
    cout <<"O expoente" << b <<" elevado a "<< e <<" é igual a" << res;
    return 0;
}

int potencia(int base, int expoente){
    int tmp, i;
    tmp = 1; 

    while(i < expoente){
        tmp *= base;
        i++;
    }
    return tm;
}
