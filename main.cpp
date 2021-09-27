/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>

using namespace std;
int jml=0, soal, jawab;

void gamestart() {
    system("clear");
    soal = rand()%100;
    cout << "Tebak angka antara 0 - 100" << endl;
    while (soal!=jawab) {
        if (jml>0) {
            if (soal<jawab) {
                cout << "Angka lebih kecil" << endl;
            } else if (soal>jawab) {
                cout << "Angka lebih besar" << endl;
            }
            cout << endl;
        }
        jml++;
        cout << "Masukkan tebakan = ";
        cin >> jawab;
        system("clear");
    }
    
    if (soal==jawab) {
        system("clear");
        cout << "SELAMAT ANDA MENANG" << endl;
        cout << "Angka = " << jawab << endl;
        cout << "Total Menebak = " << jml << endl;
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
    
    cout << "Game Over" << endl;
    cout << "Copyright © 2021 | Diki Armanda";
    return 0;
}
