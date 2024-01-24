#include <iostream>

using namespace std;

int main() {
    int N, i, j;

    cout << "Tinggi Segitiga N=?";
    cin >> N;

    for (i = 1; i <= N; i++) {
        for (j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    cout << "Program oleh Arya Eka Putra" << endl;

    return 0;
}
