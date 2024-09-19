#include <iostream>
using namespace std;

// Fungsi untuk penjumlahan dua angka
int tambah(int a, int b) {
    return a + b;
}

// Fungsi untuk pengurangan dua angka
int kurang(int a, int b) {
    return a - b;
}

// Fungsi untuk perkalian dua angka
int kali(int a, int b) {
    return a * b;
}

// Fungsi untuk pembagian dua angka
double bagi(int a, int b) {
    if (b == 0) {
        cout << "Error: Pembagian dengan nol!" << endl;
        return 0;
    }
    return static_cast<double>(a) / b;
}
int main() {
    int x, y;
    cout << "Masukkan dua angka: ";
    cin >> x >> y;

    cout << "Penjumlahan: " << tambah(x, y) << endl;
    cout << "Pengurangan: " << kurang(x, y) << endl;
    cout << "Perkalian: " << kali(x, y) << endl;
    cout << "Pembagian: " << bagi(x, y) << endl;

    return 0;
}
