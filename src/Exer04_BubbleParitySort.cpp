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


    for (int i = n - 1; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            int a = vet[j];
            int b = vet[j + 1];

            bool deveTrocar = false;


            if (a % 2 != 0 && b % 2 == 0) {

                deveTrocar = true;
            } else if (a % 2 == 0 && b % 2 == 0 && a > b) {

                deveTrocar = true;
            } else if (a % 2 != 0 && b % 2 != 0 && a < b) {

                deveTrocar = true;
            }


            if (deveTrocar) {
                swap(vet[j], vet[j + 1]);
            }
        }
    }


    for (int i = 0; i < n; i++) {
        cout << vet[i] << (i < n - 1 ? " " : "");
    }
    cout << endl;

    return 0;
}