#include <iostream>
#include <locale.h>
using namespace std;


int compara(int a, int b);
    int main(){
    int n1, n2, res;
    cout <<"Digite dois valores separados por espaço:\n";
    cin >>n1;
    cin >>n2;

    res = compara(n1, n2);
    cout << "O menor número é " << res;
    return 0;
}

int compara(int a, int b){
    if (a > b) {
        return b;
    }else{
         return a;
    }
}
