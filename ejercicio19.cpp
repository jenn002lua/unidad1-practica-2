#include <iostream>

using namespace std;

int main() {
    const int filas = 3; // Número de filas
    const int columnas = 3; // Número de columnas
    int matriz[filas][columnas];
    int transpuesta[columnas][filas];

    // Rellenar la matriz con números consecutivos
    int num = 1;
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            matriz[i][j] = num++;
        }
    }

    // Imprimir la matriz original
    cout << "Matriz original:" << endl;
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }

    // Calcular la transpuesta
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            transpuesta[j][i] = matriz[i][j];
        }
    }

    // Imprimir la matriz transpuesta
    cout << "Matriz transpuesta:" << endl;
    for (int i = 0; i < columnas; ++i) {
        for (int j = 0; j < filas; ++j) {
            cout << transpuesta[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}

