#include <iostream>
using namespace std;

int hargaTiket(int jumlah){
    int harga;
    harga = jumlah * 15000;
    return harga;
}

double diskon(int harga){
    double discount;
    discount = harga * (10.0 / 100.0);
    return discount;
}

void tampil(int jumlahAkhir){
    cout << "Harga Yang harus dibayarkan adalah : " << jumlahAkhir <<endl;
}

int main(){
    int jumlahOrang, totalHarga, totalDiskon, jumlahAkhir;
    cout << "masukan jumlah orang: ";
    cin >> jumlahOrang;

    totalHarga = hargaTiket(jumlahOrang);

    totalDiskon = diskon(totalHarga);

    jumlahAkhir = totalHarga - totalDiskon;

    tampil(jumlahAkhir);
    
    return 0;
    

    
}