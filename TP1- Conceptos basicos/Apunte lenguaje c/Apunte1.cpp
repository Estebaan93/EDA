/*APUNTE LENGUAJE C*/
#include <iostream>
using namespace std;

int main(){

    ///PALABRA CLAVE unsigned, solo me almacena numeros positivos incluye el 0.
    ///4.2.2.1. Declaración de una variable de tipo entero (integer)
    cout<<"PALABRA CLAVE UNSIGNED:"<<endl;
    unsigned int n=-10;
    cout<<n<<endl;
    n=10;
    cout<<n<<endl;

    unsigned int n1 = 123U;
    cout<<n1<<endl;

    cout<<endl;
/////////////////////////////////////////////////////////////////////////////////////////
    ///4.3.3.1. Código ASCII
    cout<<"CODIGO ASCII:"<<endl;
    char A1 = 'a';
    char A2 = 97; //El valor decimal de Ascii que representa la A
    char A3 = 0x61; // Ver que va el cero y x antes !!
    char A4 = '\x61';
    char A5 = '\141';

    cout<<A1<<endl;
    cout<<A2<<endl;
    cout<<A3<<endl;
    cout<<A4<<endl;
    cout<<A5<<endl;

    cout<<endl;

    char opc0='A'; //Ascii de A expresado como Caracter
    char opc1=65 ; //Ascii de A expresado en Decimal
    char opc2= 0101; //Ascii de A expresado en Octal
    char opc3 = 0x41; //Ascii de A expresado en Hexadecimal
    cout << opc0 <<endl;
    cout << opc1 <<endl;
    cout << opc2 <<endl;
    cout << opc3 <<endl;

    cout<<endl;
//////////////////////////////////////////////////////////////////////////////////////////
    ///5.1.1.2. Operadores '++' y '--'
    cout<<"OPERADOR ++:"<<endl;
    int e=100, f=10, g;
    g=e+++f;
    cout<<"Pre-incremento ++f: "<<g<<endl;

    g=e+f++;
    cout<<"Post-incremento f++: "<<g<<endl;
    cout<<endl;
//////////////////////////////////////////////////////////////////////////////////////////
    ///5.5. Operador "sizeof"
    cout<<"OPERADOR SIZEOF:"<<endl;
    cout<<"sizeof de entero: "<<sizeof(int)<<" bytes"<<endl;
    cout<<"sizeof de float: "<<sizeof(float)<<" bytes"<<endl;
    cout<<"sizeof de double: "<<sizeof(double)<<" bytes"<<endl;
    cout<<"sizeod de char: "<<sizeof(char)<<" byte"<<endl;
    cout<<"sizeof de boolean: "<<sizeof(bool)<<" byte"<<endl;
    cout<<"sizeof de string: "<<sizeof(string)<<" bytes"<<endl;
    cout<<endl;
//////////////////////////////////////////////////////////////////////////////////////////
    ///6.3. Ejercicios con operadores y expresiones
    /*x = 2; y = 6; z = 9; r = 100; s = 10; a = 15; b = 3;*/
    cout<<"OPERADORES Y EXPRESIONES:"<<endl;
    int x=2, y=6, z=9, r=100, s=10, a=15, b=3;
    x+=10;
    cout<<"x="<<x<<endl;
    x=2;
    s*= b;
    //r/=0;   ///ERROR NO SE PUEDE DIVIDIR POR 0
    y+=x+10;
    z-=a*b;

    cout<<"s="<<s<<endl;
    //cout<<"r="<<r<<endl;
    cout<<"y="<<y<<endl;
    cout<<"z="<<z<<endl;




    cout<<endl;
    system("pause");
return 0;
}
