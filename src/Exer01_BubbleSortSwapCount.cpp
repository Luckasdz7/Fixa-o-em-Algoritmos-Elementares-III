//
// Created by Junio Moreira on 2026-08-26.
//
#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int main() {
    int n;


    if (!(cin >> n)) return 0;

    vector<int> vet(n);


    for (int i = 0; i < n; i++) {
        cin >> vet[i];
    }

    int totalTrocas = 0;


    for (int i = n - 1; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            if (vet[j] > vet[j + 1]) {
                swap(vet[j], vet[j + 1]);
                totalTrocas++;
            }
        }
    }


    for (int i = 0; i < n; i++) {
        cout << vet[i] << (i < n - 1 ? " " : "");
    }
    cout << endl;


    cout << totalTrocas << endl;

    return 0;
}