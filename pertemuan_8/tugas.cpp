#include <iostream>
// #include

using namespace std;

int total(int a , int b){
int hasil = a * b;
return hasil;
}

float diskon(int a, int b) {
int hasil = a * 0.1;
return hasil;
}

int totalHarga(int a, int b) {
int hasil = a - b ;
return hasil;
}

void awal(){
cout << "Selamat datang di Toko Bangunan!" << endl;

cout << "\nPilihan Menu:" << endl;
cout << "1. Beli Cat Rp10000" << endl;
cout << "2. Beli Paku Rp2000" << endl;
cout << "3. Beli Kayu Rp15000" << endl;
}

int main(){
int jumlah;
int pilihan;
int harga;
int discount;

awal();

cout << "\nMasukkan nomor menu yang dipilih: ";
cin >> pilihan;
    switch (pilihan) 
    {
        case 1:
             harga = 10000;
             discount;
            break;
        case 2:
            harga = 2000;
            discount;
            break;
        case 3:
            harga = 15000;
            discount;
            break;

        default:
            cout << "Nomor Tidak Valid, Silahkan Masukkan Pilihan (1-3)." << endl;
            return 1;
    } 
    cout << "Jumlah Yang Ingin Dibeli: ";
    cin >> jumlah;

    cout << "\nStruk Pembelian:" << endl;
    cout << "Jumlah Barang: " << jumlah << endl;
    cout << "Harga Barang: Rp" << harga << endl;
    cout << "Total Harga: Rp" << total(jumlah,harga) << endl;
    cout << "Diskon: Rp" << diskon(total(jumlah,harga),discount) << endl;
    cout << "Total Harga Setelah Diskon: Rp" << totalHarga(total(jumlah,harga),diskon(total(jumlah,harga),discount)) << endl;

return 0;
}