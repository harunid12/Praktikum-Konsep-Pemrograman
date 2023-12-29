#include <iostream>

using namespace std;
int main() {
bool tebakanbenar= true;
int angka;

do {
cout << "\nMasukkan Angka (1 - 100):" ;
cin >> angka; 
     if ( angka == 50){
        cout << angka << " Angka Benar ";
        tebakanbenar = false;
    } else if (angka > 50) {
        cout << " Salah,lebih kecil\n";
    } else if (angka < 50) {
        cout << " Salah,lebih besar\n";
    } else {
        cout << " Angka Tidak Valid\n";
    }
} while (tebakanbenar);

return 0;
}