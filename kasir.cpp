#include <iostream>
using namespace std;

int main() {
    int harga = 15000;
    int jumlah = 3;

    int total = harga * jumlah;

    double diskon = total * 10.0 / 100;

    double bayar = total - diskon;

    cout << "===== KASIR SEDERHANA =====" << endl;
    cout << "Harga barang : Rp " << harga << endl;
    cout << "Jumlah barang: " << jumlah << endl;
    cout << "Total        : Rp " << total << endl;
    cout << "Diskon       : Rp " << diskon << endl;
    cout << "Bayar        : Rp " << bayar << endl;

    return 0;
}
