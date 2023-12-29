#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main(){

    srand(time(0));
    
    int angka_tebak;
    int angka_random = rand() % 100 + 1;
    while (true)
    {
        cout << "masukan angka: ";
        cin >> angka_tebak;

        if (angka_tebak == angka_random){
            cout << "Anda benar, selamat " << endl;
            break;

        }else if (angka_tebak < angka_random){
            cout << "jawaban anda salah, terlalu kecil !!" << endl;
        }else if (angka_tebak > angka_random){
            cout << "jawaban anda salah, terlalu besar" << endl;
        }else {
            cout << "input anda salah" << endl;
        }
        
    }
    
    return 0;
}