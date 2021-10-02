#include <iostream>
using namespace std;

int jml=0, soal, jawab;

void gamestart() {
    system("cls");
    soal = rand()%100;
    cout << "Tebak angka antara 0 - 100 !" << endl;
    while (soal!=jawab) {
        if (jml>0) {
            if (soal<jawab) {
                cout << "Angkanya lebih kecil !" << endl;
            } else if (soal > jawab) {
                cout << "Angkanya lebih besar !" << endl;
            }
            cout << endl;
        }
        jml++;
        cout << "Masukkan tebakan = ";
        cin >> jawab;
        system("cls");
    }
    
    if (soal==jawab) {
        system("cls");
        cout << "SELAMAT ANDA MENANG" << endl << endl;
        cout << "Angka Yang Dimaksud = " << jawab << endl;
        cout << "Total Menebak       = " << jml << endl;
    }
}

int main() {
    char ready;
    cout << "Hello World" << endl;
    cout << "Game Start!" << endl;
    cout << "Are You Ready? (y/t)" << endl;
    cin >> ready;
    
    if (ready=='y') {
        gamestart();
    }

    cout << endl;
    cout << "Game Over" << endl << endl;
    cout << "Copyright 2021 | Diki Armanda";
    return 0;
}
