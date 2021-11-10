#include <iostream>
using namespace std;

int main()
{
  int kode, i=0, harga, total_pembelian=0, diskon, total_harga=0;
  char pesan='y';

  cout << "================================" << endl;
  cout << "       Toko Komputer Maju" << endl;
  cout << "================================" << endl;
  cout << "Sedia :\n";
  cout << "1. CPU\n2. RAM\n3. HDD\n";

  while (pesan == 'y') {
    i++;
    cout << "\nBarang ke-" << i <<" = ";
    cin >> kode;

    if (kode == 1) {
      harga = 900000;
      cout << "\n1. CPU = " << harga;
    } else if (kode == 2) {
      harga = 350000;
      cout << "\n2. RAM = " << harga;
    } else if (kode == 3) {
      harga = 800000;
      cout << "\n3. HDD = " << harga;
    } else {
      cout << "Inputan Salah";
    }
    total_harga=total_harga+harga;
    cout << "\nHarga barang = Rp. " << harga;
    cout << "\nApakah Anda ingin menambah item ? [y/t]";
    cin >> pesan;
  }

  cout << "\nJumlah Barang = " << i <<endl;
  cout << "Total Harga = Rp. " << total_harga <<endl;
  if (total_harga>1000000) {
    diskon=total_harga*0.1;
    cout << "Diskon = Rp. " << diskon <<endl;
  }
  total_pembelian=total_harga-diskon;
  cout << "\nTotal Pembelian = Rp. " << total_pembelian <<endl;
  cout << "Terima Kasih" << endl;
  return 0;
}
