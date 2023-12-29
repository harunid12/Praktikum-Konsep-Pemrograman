#include <iostream>
using namespace std;

//prototype
double hitungLuas(double p, double l);
double hitungKeliling(double p, double l);

void program(){
    cout << "### Program Hitung Luas dan Keliling Pesegi Panjang ###\n";
}

int main(){

    double panjang, lebar;
    program();
    cout << "masukan Panjang: ";
    cin >> panjang; // 10
    cout << "masukan Lebar: ";
    cin >> lebar; // 5

    cout << "Luas Persegi Panjang adalah: " << hitungLuas(panjang, lebar) << endl;
    cout << "Keliling Persegi Panjang adalah: " << hitungKeliling(panjang, lebar) << endl;

    program();

    return 0;
}

double hitungLuas(double p, double l){
    double hasil = p * l; 
    return hasil;
}

double hitungKeliling(double p, double l){
    double hasil = 2 * (p + l);
    return hasil;
}