#include <iostream>
#include <Windows.h>

// Функція для перемноження матриць A та B та збереження результату в C
void multiplyMatrices(int A[4][4], int B[4][4], int C[4][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            C[i][j] = 0;
            for (int k = 0; k < 4; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {
    SetConsoleOutputCP(1251);
    int matrixA[4][4] = { {8, 21, 56, 34},
                        {11, 31, 41, 41},
                        {10, 8, 22, 11},
                        {6, 5, 10, 5} };

    int matrixB[4][4] = { {9, 11, 21, 6},
                        {12, 9, 28, 10},
                        {10, 6, 21, 11},
                        {12, 4, 8, 2} };

    int resultMatrix[4][4];

    multiplyMatrices(matrixA, matrixB, resultMatrix);

    // Виведення результату перемноження матриць
    std::cout << "Результат перемноження матриць:" << std::endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            std::cout << resultMatrix[i][j] << "\t";
        }
        std::cout << std::endl;
    }

    return 0;
}
