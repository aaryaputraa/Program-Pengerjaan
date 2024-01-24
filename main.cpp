#include <iostream>
#include <string>

int main() {
    std::string nama;  // Use std::string for the name
    double alas, tinggi;

    // Input nama
    std::cout << "Masukkan Nama: ";
    std::getline(std::cin, nama);

    // Input alas dan tinggi
    std::cout << "Masukkan alas: ";
    std::cin >> alas;
    std::cout << "Masukkan tinggi: ";
    std::cin >> tinggi;

    // Hitung luas
    double luas = 0.5 * alas * tinggi;

    // Output luas
    std::cout << nama << " - Luas segitiga: " << luas << std::endl;

    return 0;
}
