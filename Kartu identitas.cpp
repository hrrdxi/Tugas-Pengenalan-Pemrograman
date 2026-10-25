
#include <iostream>
#include <string>
using namespace std;

int main() {
    string nama = "Hardi";
    int umur = 17;
    double tinggi = 160.5;
    bool mahasiswa = true;

    if (mahasiswa == true) {
        cout << "============================" << endl;
        cout << "      KARTU IDENTITAS       " << endl;
        cout << "============================" << endl;
        cout << "Nama   : " << nama << endl;
        cout << "Umur   : " << umur << " tahun" << endl;
        cout << "Tinggi : " << tinggi << " cm" << endl;
        cout << "Status : Mahasiswa" << endl;
        cout << "============================" << endl;
    } else {
        cout << "Maaf, Anda bukan mahasiswa." << endl;
    }

    return 0;
}
