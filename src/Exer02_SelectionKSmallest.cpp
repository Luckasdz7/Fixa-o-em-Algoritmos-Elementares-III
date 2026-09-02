//
// Created by Junio Moreira on 2026-08-26.
//
#include <iostream>
#include <vector>
#include <utility> // Para std::swap

using namespace std;

int main() {


      selectionSort();
    }
    void selectionSort() {
            int m, k;
            std::cin >> m;
            std::cin >> n;

            std::vector<int> array(m);
            for(int h = 0; h < m; h++) {
                std::cin >> array[h];
            }

            int n = array.size();
            for (int i = 0; i < k; i++) {
                int minIndex = i;
                for (int j = i + 1; j < n; j++) {
                    if (array[j] < array[minIndex]) {
                        minIndex = j;
                    }
                }
                std::swap(array[minIndex], array[i]);
            }
        }