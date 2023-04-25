#include <iostream>
#include <eigen/dense>
#include "neuralnetwork.h"

int main()
{
    // Definir los datos de entrada y salida para el entrenamiento de la red
    Eigen::MatrixXd input(4, 2);
    input << 0, 0,
             0, 1,
             1, 0,
             1, 1;
    Eigen::MatrixXd output(4, 1);
    output << 0,
              1,
              1,
              0;

    // Crear una red neuronal con 2 neuronas de entrada, 4 neuronas ocultas y 1 neurona de salida
    neuralnetwork::NeuralNetwork net({2, 4, 1});

    // Entrenar la red durante 1000 iteraciones con un tamaño de lote de 2 y una tasa de aprendizaje de 0.1
    for (int i = 0; i < 1000; i++) {
        net.train(input, output, 2, 0.1);
    }

    // Evaluar la red con los datos de entrada y salida de entrenamiento
    Eigen::MatrixXd predictions = net.predict(input);
    std::cout << "Predictions: " << std::endl << predictions << std::endl;

    return 0;
}
