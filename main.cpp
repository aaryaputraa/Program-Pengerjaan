#include <iostream>
#include <cmath>
#include <string>

int main() {
    std::string nama;
    const double pi = 3.14159;
    double jariJari;

    std::cout << "Masukkan Nama: ";
    std::getline(std::cin, nama);

    // Input jari-jari
    std::cout << "Masukkan jari-jari lingkaran: ";
    std::cin >> jariJari;

    // Hitung luas
    double luas = pi * pow(jariJari, 2);

    // Output luas
   std::cout << nama << " - Luas lingkaran: " << luas << std::endl;


    return 0;
}
