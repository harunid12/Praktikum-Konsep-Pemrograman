#include <iostream>
using namespace std;
int main(){
    int pilih, jumlah, totalHarga;

    cout << "#####################\n";
    cout << "## Cafe wak Dollah ##\n";
    cout << "#####################\n";
    cout << "Daftar Menu\n";
    cout << "1. nasi goreng Rp 12.000\n";
    cout << "2. Indomie goreng Rp 10.000\n";
    cout << "3. nasi bakar Rp 15.000\n";
    cout << "#####################\n";
    cout << "Masukan Pilihan :";
    cin >> pilih;
    cout << endl;

    switch(pilih){
        case 1: 
            cout << "Anda Memilih Nasi Goreng!\n";
            cout << "Berapa Porsi: ";
            cin >> jumlah;
            totalHarga = jumlah * 12000;
            cout << "Total Harga yang anda bayarkan : " << totalHarga << endl;
            break;
        case 2: 
            cout << "Anda Memilih Indomie Goreng!";
            break;
        case 3: 
            cout << "Anda Memilih Nasi Bakar!";
            break;
        default:
            cout << "Input yang anda masukan salah";
            break;
    }
    

    return 0;
}