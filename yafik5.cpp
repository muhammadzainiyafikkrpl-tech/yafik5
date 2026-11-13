#include <iostream>
using namespace std;

int main() {
    int angka;
    char lanjut;

    do {
        cout << "\nMasukkan bilangan: ";
        cin >> angka;

        if (angka % 2 == 0) {
            cout << angka << " adalah bilangan Genap\n";
        } else {
            cout << angka << " adalah bilangan Ganjil\n";
        }

        cout << "Cek lagi? (y/n): ";
        cin >> lanjut;
    } while (lanjut == 'y' || lanjut == 'Y');

    cout << "\nTerima Kasih!\n";
    return 0;
}
