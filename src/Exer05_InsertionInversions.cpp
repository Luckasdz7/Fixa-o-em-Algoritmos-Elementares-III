//
// Created by Junio Moreira on 2026-08-26.
//
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;


    if (!(cin >> n)) return 0;

    vector<int> vet(n);


    for (int i = 0; i < n; i++) {
        cin >> vet[i];
    }


    int totalInversoes = 0;


    for (int i = 1; i < n; i++) {
        int target = vet[i];
        int j = i - 1;


        while (j >= 0 && vet[j] > target) {
            vet[j + 1] = vet[j];
            totalInversoes++;
            j--;
        }
        vet[j + 1] = target;
    }


    cout << totalInversoes << endl;

    return 0;
}