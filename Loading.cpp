#include <iostream>
#include <windows.h>
using namespace std;

void loading() {
    for (int i = 0; i <= 50; i++) {
        cout << "=";
        Sleep(100);
    }
    cout << "100%" " Complate" << endl << endl;
}

int main() {
    loading();
}
