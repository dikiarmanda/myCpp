#include <iostream>
using namespace std;

int main() {
	int hor, ver;

	cout << "TABEL PERKALIAN" << endl;
	cout << " #";
	for ( hor = 1; hor <= 10; hor++) {
		if (hor >= 10) {
			cout << "   " << hor;
		} else {
			cout << "    " << hor;
		}
	}
	cout << endl;
	for ( ver = 1; ver <= 10; ver++) {
		if (ver<10) {
			cout << " " << ver;
		} else {
			cout << ver;
		}
		for ( int i = 1; i <= 10; i++) {
			if (i*ver < 10) {
				std::cout << "    " << i*ver;
			} else if (i*ver >= 100) {
				cout << "  " << i*ver;
			} else {
				cout << "   " << i*ver;
			}
		}
		cout  << endl;
	}
	return 0;
}
