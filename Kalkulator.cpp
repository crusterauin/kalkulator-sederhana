#include <iostream>
using namespace std;

char simbol, ulang;
double angka1, angka2, hasil, hasil2;

int operasi1() {
    cout << "Masukkan operator (+, -, *, /) : ";
    cin >> simbol;

    cout << "Masukkan angka pertama : ";
    cin >> angka1;

    cout << "Masukkan angka kedua : ";
    cin >> angka2;

        if (simbol == '+') {
            hasil = angka1+angka2;
            cout << angka1 << "+" << angka2 << "=" << hasil << "\n";
        } else if (simbol == '-') {
            hasil = angka1-angka2;
            cout << angka1 << "-" << angka2 << "=" << hasil << "\n";
        } else if (simbol = '*') {
            hasil = angka1*angka2;
            cout << angka1 << "*" << angka2 << "=" << hasil << "\n";
        } else if (simbol == '/') {
            if (angka2 != 0) {
                hasil = angka1/angka2;
                cout << angka1 << "/" << angka2 << "=" << hasil << "\n";
            } else {
                cout << "Angka penyebut tidak boleh nol.";
            }
        } else {
            cout << "Operator tidak valid!";
        }

    return 0;
}

int operasi2 () {
    cout << "Masukkan operator (+, -, *, /) : ";
    cin >> simbol;

    cout << "Masukkan angka selanjutnya : ";
    cin >> angka2;

    if (simbol == '+') {
            hasil = angka1+angka2;
            cout << angka1 << "+" << angka2 << "=" << hasil << "\n";
        } else if (simbol == '-') {
            hasil = angka1-angka2;
            cout << angka1 << "-" << angka2 << "=" << hasil << "\n";
        } else if (simbol = '*') {
            hasil = angka1*angka2;
            cout << angka1 << "*" << angka2 << "=" << hasil << "\n";
        } else if (simbol == '/') {
            if (angka2 != 0) {
                hasil = angka1/angka2;
                cout << angka1 << "/" << angka2 << "=" << hasil << "\n";
            } else {
                cout << "Angka penyebut tidak boleh nol.";
            }
        } else {
            cout << "Operator tidak valid!";
        }

    return 0;

}

int ulangi() {
    cout << "Ingin ulangi operasi? (Y/N) : ";
    cin >> ulang;
    if (ulang == 'Y' || ulang == 'y') {
       ulang = true;
       angka1 = hasil;
       operasi2();
       ulangi();
    }
    return 0;
}

int main () {
    operasi1();
    ulangi();
}