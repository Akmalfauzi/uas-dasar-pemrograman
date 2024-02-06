#include <iostream>

using namespace std;

// Fungsi untuk menghitung luas segitiga
double calculateTriangleArea(double base, double height) {
    return (0.5 * base * height);
}

int main() {
    double alas, tinggi;

    // Meminta input alas dan tinggi segitiga
    cout << "Masukkan alas segitiga: ";
    cin >> alas;
    cout << "Masukkan tinggi segitiga: ";
    cin >> tinggi;

    // Memanggil fungsi untuk menghitung luas segitiga
    double luasSegitiga = calculateTriangleArea(alas, tinggi);

    // Menampilkan hasil
    cout << "Luas segitiga dengan alas " << alas << " dan tinggi " << tinggi << " adalah: " << luasSegitiga << endl;

    return 0;
}