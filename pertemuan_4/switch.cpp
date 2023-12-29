#include <iostream>

using namespace std;

int main(){

    int menu;
    float hargaTotal, jumlah;
    
    cout << "##################\n";
    cout << "# Cafe wak dolah #\n";
    cout << "##################\n";
    cout << "Daftar Menu:\n";
    cout << "1. Nasi Goreng\n";
    cout << "2. Capucino cincau\n";
    cout << "3. Es Jeruk\n";
    cout << "##################\n";

    cout << "Pilih Menu : ";
    cin >> menu;

    switch(menu){
        case 1:
            cout << "Anda Memesan Nasi Goreng" << endl;
            cout << "Berapa Porsi: ";
            cin >> jumlah;
            hargaTotal = jumlah * 10000;
            cout << "total yang anda bayarkan adalah: " << hargaTotal << " Rupiah" << endl;
            break;
        case 2:
            cout << "Anda Memesan Capucino cincau" << endl;
            break;
        case 3:
            cout << "Anda Memesan Es Jeruk" << endl;
            break;
        default:
            cout << "Pilihan anda tidak ada pada daftar menu!" << endl;
            break;
    }

    cout << "##################\n";
    cout << "# Cafe wak dolah #\n";
    cout << "##################\n";
    return 0;
}