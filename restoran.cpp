
#include <iostream>
using namespace std;

int main() {
    int pilihan, jumlah, harga, total;

    cout << "===== MENU RESTORAN =====" << endl;
    cout << "1. Nasi Goreng (Rp 15000)" << endl;
    cout << "2. Mie Ayam    (Rp 12000)" << endl;
    cout << "3. Es Teh      (Rp 3000)" << endl;

    cout << "Pilih menu (1-3): ";
    cin >> pilihan;

    cout << "Masukkan jumlah: ";
    cin >> jumlah;

    switch (pilihan) {
        case 1:
            harga = 15000;
            break;

        case 2:
            harga = 12000;
            break;

        case 3:
            harga = 3000;
            break;

        default:
            cout << "Menu tidak ada" << endl;
            return 0;
    }

    total = harga * jumlah;

    cout << "Total bayar: Rp " << total << endl;

    return 0;
}
