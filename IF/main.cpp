#include <iostream>

using namespace std;

int main() {
    int hari;

    cout << "Masukkan nomor hari (1-7) : ";
    cin >> hari;

    if (hari == 1) {
        cout << "Hari Senin" << endl;
    } else if (hari == 2) {
        cout << "Hari Selasa" << endl;
    } else if (hari == 3) {
        cout << "Hari Rabu" << endl;
    } else if (hari == 4) {
        cout << "Hari Kamis" << endl;
    } else if (hari == 5) {
        cout << "Hari Jumat" << endl;
    } else if (hari == 6) {
        cout << "Hari Sabtu" << endl;
    } else if (hari == 7) {
        cout << "Hari Minggu" << endl;
    } else {
        cout << "Nomor hari tidak valid!" << endl;
    }

    return 0;
}