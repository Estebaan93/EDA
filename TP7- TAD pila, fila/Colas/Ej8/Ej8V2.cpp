#include <iostream>
#include <queue>
#include <stack>

int main() {
    // Definir una cola A
    std::queue<int> cola_A;

    // Agregar elementos a la cola A
    cola_A.push(1);
    cola_A.push(2);
    cola_A.push(3);
    cola_A.push(4);
    cola_A.push(5);


    // Invertir la cola A
    std::stack<int> pila_auxiliar;
    while (!cola_A.empty()) {
        pila_auxiliar.push(cola_A.front());
        cola_A.pop();
    }
    while (!pila_auxiliar.empty()) {
        cola_A.push(pila_auxiliar.top());
        pila_auxiliar.pop();
    }

    // Mostrar la cola invertida
    while (!cola_A.empty()) {
        std::cout << cola_A.front() << " ";
        cola_A.pop();
    }

    return 0;
}
