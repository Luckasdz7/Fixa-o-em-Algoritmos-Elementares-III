//
// Created by Junio Moreira on 2026-08-26.
//

#include <iostream>
#include <vector>
#include <utility> // Para std::swap

using namespace std;

int main() {
    }
void insertionSort() {
        int m;
        std::cin >> m;
        int conta = 0;
        std::vector<int> array(m);
        for(int h = 0; h < m; h++) {
            std::cin >> array[h];
        }

        int n = array.size();
        for (int i = 1; i < n; i++) {
            int target = array[i];
            int j = i - 1;

            // Desloca elementos maiores à direita
            while (j >= 0 && array[j] > target) {
                array[j + 1] = array[j];
                j--;
                conta++;
            }
            array[j + 1] = target;

        }
    for(int i = 1; i < array.lenght; i++){
        std::cont << array[i];

    }
           std::cont << conta;

};