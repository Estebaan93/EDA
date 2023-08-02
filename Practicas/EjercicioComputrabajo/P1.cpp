#include <iostream>
#include <cmath>
using namespace std;

double solucion(int n) {
    int a=1, b=1, c=1, d=1;
    double r;

    for(int i=0; i<n; i++){
        r=3 * d + 1 * c + 4 * b + 1 * a;
        a = b;
        b = c;
        c = d;
        d = r;
    }
    return d% 10000000000;
}

int main (){
cout<<solucion(10)<<endl;
cout<<solucion(100)<<endl;
cout<<solucion(pow(2023,100))<<endl;


system("pause");
}
