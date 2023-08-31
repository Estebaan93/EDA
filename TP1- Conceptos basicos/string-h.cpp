
#include <iostream>
#include <string.h>

using namespace std;

int main() {
  /* CREAR CADENA DE CARACTERES. */
  char palabra[] = "Pablo Poder";
  // char otraPalabra[] = { 'P', 'a', 'b', 'l', 'o'};
  char nombre[30];


  /* GUARDAR UNA CADENA*/
  cout << "Ingrese su nombre" << endl;

  cin.getline(nombre, 30, '\n');

  cout << "Saludos " << nombre << endl;


  /* LONGITUD DE PALABRA */
  int longitud = 0;
  longitud = strlen(nombre);
  cout << longitud << endl;


  /* COPIAR CADENAS | COPIAR CIERTA CANTIDAD */
  char cadena1[30] = "Hola Mundo";
  char cadena2[30] = "";
  char cadena3[30] = "";

  // strcpy(destino, origen)
  strcpy(cadena2, cadena1);
  strncpy(cadena3, cadena1, 4);

  cout << "Cadena 2: " << cadena2 << endl;
  cout << "Cadena 3: " << cadena3 << endl;


  /* COMPARAR CADENAS | CIERTA CANTIDAD*/
  char cadena4[] = "Auto";
  char cadena5[] = "Baile";
  int iguales = strcmp(cadena5, cadena4);
  // strncmp(str1, str2, 4); -> cuenta hasta ciertos caracteres.
  cout << iguales << endl;
  // 0: iguales, 
  // -1: cadena1 antes cadena2
  // 1: cadena1 después de cadena2


  /* CONCATENAR CADENAS */
  char cadena6[] = "Auto";
  char cadena7[] = "Rojo";
  char cadenaFinal[40] = "";

  strcat(cadenaFinal, cadena6);
  strcat(cadenaFinal, " ");
  strcat(cadenaFinal, cadena7);
  cout << cadenaFinal << endl;


  /* INVERTIR CADENA | PALABRA PALINDROMA */
  char cadenaInvertida[] = "Gato";
  strrev(cadenaInvertida);
  cout << cadenaInvertida << endl;


  /* ENCUENTRA CARÁCTER */
  char cadena8[] = "Pelotas Blancas";
  cout << strchr(cadena8, 'o') << endl;
  cout << strrchr(cadena8, 'a') << endl;

  /* CONVERSION */
  char cadena9[] = "1234";

  int numero2 = stoi(cadena9);
  // atof
  // atol


  /* ARRAY DE CADENAS */
  char listado[3][30];

  // Pedir al usuario que ingrese los nombres
  for (int i = 0; i < 3; ++i) {
    cout << "Ingrese el nombre " << i+1 << ": ";
    cin.getline(listado[i], 30, '\n');
  }

  for (int i = 0; i < 3; i++){
    cout << listado[i] << endl;
  }

  cin.get();
  return 0;
}
