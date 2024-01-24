#include <iostream>

int main() {

    int nilai1, nilai2;

    std::cout << "Masukkan nilai integer pertama: ";
    std::cin >> nilai1;

    std::cout << "Masukkan nilai integer kedua: ";
    std::cin >> nilai2;

    int hasilPenjumlahan = 0;

    for (int i = nilai1 + 1; i < nilai2; ++i) {
        hasilPenjumlahan += i;
    }

    std::cout << "Jumlah nilai-nilai di antara " << nilai1 << " dan " << nilai2 << " adalah: " << hasilPenjumlahan << std::endl;

    std::cout << "Program oleh Arya Eka Putra" << std::endl;

    return 0;
}
