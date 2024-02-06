#include <iostream>

using namespace std;

int main() {
    int n;

    // Meminta input bilangan
    cout << "Masukkan bilangan: ";
    cin >> n;

    // Menghitung faktorial
    int faktorial = 1;
    for (int i = 1; i <= n; ++i) {
        faktorial *= i;
    }

    // Menampilkan hasil
    cout << "Faktorial dari " << n << " adalah: " << faktorial << endl;

    return 0;
}