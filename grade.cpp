#include <iostream>
using namespace std;

int main() {
    int nilai;
    char grade;

    cout << "Masukkan nilai mahasiswa: ";
    cin >> nilai;

    if (nilai >= 85 && nilai <= 100) {
        grade = 'A';
    }
    else if (nilai >= 70 && nilai < 85) {
        grade = 'B';
    }
    else if (nilai >= 55 && nilai < 70) {
        grade = 'C';
    }
    else if (nilai >= 0 && nilai < 55) {
        grade = 'D';
    }
    else {
        cout << "Nilai tidak valid!" << endl;
        return 0;
    }

    cout << "Nilai " << nilai << " = Grade " << grade;

    if (grade == 'D') {
        cout << " (Remedial)";
    }

    cout << endl;

    return 0;
}
