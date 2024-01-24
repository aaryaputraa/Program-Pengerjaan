#include <iostream>

int main() {
    // Memasukkan nomor telepon, nilai minimal, dan nilai maksimal
    std::string nomorHp;
    int nilaiMin, nilaiMax;

    std::cout << "Masukkan nomor hp kamu: ";
    std::cin >> nomorHp;

    std::cout << "Masukkan nilai minimal: ";
    std::cin >> nilaiMin;

    std::cout << "Masukkan nilai maksimal: ";
    std::cin >> nilaiMax;

    // Inisialisasi variabel total untuk menyimpan hasil penjumlahan
    long long total = 0;

    // Looping untuk menjumlahkan nilai-nilai di antara nilai minimal dan maksimal
    for (int i = nilaiMin + 1; i < nilaiMax; ++i) {
        // Menambahkan nilai indeks i ke dalam total
        total += i;
    }

    // Menampilkan hasil penjumlahan
    std::cout << "Total penjumlahan nilai antara " << nilaiMin << " dan " << nilaiMax << " adalah: " << total << std::endl;

    // Menampilkan nama
    std::cout << "Program By: Arya Eka Putra Kencana" << std::endl;

    return 0;
}
