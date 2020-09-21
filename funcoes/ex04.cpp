
#include<iostream>
using namespace std;
int soma(int a, int b){
            int res;
            res = a +b;
            cout << " O resultado é: "<< res;
        return res;
        }
int sub(int a, int b){
            int res;
            res = a +b;
            cout << " O resultado é: "<< res;
        return res;
        }
int mult(int a, int b){
            int res;
            res = a +b;
            cout << " O resultado é: "<< res;
        return res;
        }
int di(int a, int b){
            int res;
            res = a +b;
            cout << " O resultado é: "<< res;
            return res;
        }

int main(){
int n1, n2, op;
    cout <<"\n Digite o primeiro número: ";
    cin >> n1;
    cout << "\n Digite o segundo valor ";
    cin >> n2;
    cout <<"\n Digite o que deseja fazer: \n '1' => soma \n '2'=> subtração \n '3' => multiplicação \n '4' => Divisão";
    cin >> op;
    
    switch(op){
        case 1:
            soma(n1,n2);
         break;
    
        case 2:
            sub(n1,n2);
        break;
        case 3:
            mult(n1,n2);
        break;
        case 4:
            di(n1,n2);
        break;
    }
return 0;
}

