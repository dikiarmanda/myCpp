#include <iostream>
#include <conio.h>
using namespace std;

int main() {
    float tb, bb, bbi, ideal, jk;

    cout << "Jenis kelamin (1. Laki-laki, 2.Perempuan) : ";
    cin >> jk;
    cout << "Masukkan tinggi(cm) = ";
    cin >> tb;
    cout << "Masukkan berat(kg) = ";
    cin >> bb;
    cout << endl;

    ideal=bb/((tb/100)*(tb/100));
    cout << "BMI = " << ideal << endl;

    if (ideal > 30) {
        cout << "Anda obesitas" << endl;
    } else if (ideal > 25) {
        cout << "Anda kelebihan berat badan" << endl;
    } else if (ideal > 18) {
        cout << "Anda ideal" << endl;
    } else {
        cout << "Anda kurus" << endl;
    }
    
    if (jk==1) {
        bbi=tb-100-(tb-100)*0.1;
        cout << endl << "Berat Ideal Anda = " << bbi << endl;
    } else {
        bbi=tb-100-(tb-100)*0.15;
        cout << endl << "Berat Ideal Anda = " << bbi << endl;
    }
    
    return 0;
}