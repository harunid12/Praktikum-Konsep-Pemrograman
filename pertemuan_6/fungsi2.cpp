#include <iostream>
using namespace std;


void program(){
    cout << "Program Mengitung Luas dan Keliling Persegi Panjang" << endl;
}

// prototype
double hitungLuas(double p, double l);
double hitungKeliling(double p, double l);

int main(){
    double panjang, lebar;
    program();
    cout << "masukan panjang: ";
    cin >> panjang;
    cout << "masukan panjang: ";
    cin >> lebar;

    cout << "luas PP : " << hitungLuas(panjang, lebar) << endl;
    cout << "keliling PP: " << hitungKeliling(panjang, lebar);

    return 0;
}

double hitungLuas(double p, double l){
    double luas = p * l;
    return luas;
}

double hitungKeliling(double p, double l){
    double keliling = 2 * (p + l);
    return keliling;
}