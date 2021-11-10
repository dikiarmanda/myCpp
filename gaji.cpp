#include <iostream>
using namespace std;

int main() {
    int gaji, tnjng, gajibrsh ;
    char gol;
    
    cout << "Sistem Penggajian" << endl;
    cout << "     PT. XYZ" << endl;
    cout << "Masukkan golongan karyawan : ";
    cin >> gol;

    switch (gol) {
    case 'A':
        gaji=1000000;
        tnjng=gaji*0.05;
        break;
    case 'B':
        gaji=2000000;
        tnjng=gaji*0.1;
        break;
    case 'C':
        gaji=3000000;
        tnjng=gaji*0.15;    
        break;
    default:
        cout << "Kode yang Anda masukkan salah" << endl;
        exit(0);
    }
    
    gajibrsh=gaji+tnjng-gaji*0.5;

    cout << "Gaji bersih karyawan golongan "<< gol <<" = Rp. " << gaji << endl;
    return 0;
}
