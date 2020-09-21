#include <iostream>
using namespace std;

int absoluto(int n);

int main(){
int numero, i;
    
 for(i = 1; i < 5; i++){
    cout <<"\n digite o "<<i<<"º número: ";
    cin >> numero;
    cout <<"\n Valor absoluto de "<< numero <<" é "<<absoluto(numero);
 }
 return 0;
}

int absoluto(int n){
     if(n < 0){
        return n*-1;
     }
 return n;
}
