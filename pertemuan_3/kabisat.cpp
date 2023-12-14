#include <iostream>

using namespace std;

int main(){

    int tahun;

    cout << "masukan tahun: ";
    cin >> tahun;
    cout << endl;

    // Apabila angka tahun tersebut habis dibagi dengan 400, maka tahun itu adalah tahun kabisat
    // Apabila angka tahun tersebut tidak habis dibagi dengan angka 400, namun malah habis dibagi angka 100, maka tahun tersebut bukanlah tahun kabisat.
    // Apabila tahun tersebut tidak habis dibagi 400 ataupun 100, namun habis dibagi dengan angka 4, maka tahun itu adalah tahun kabisat
    // Apabila tahun tersebut tidak habis dibagi 400, 100, maupun 4, maka dipastikan tahun tersebut bukanlah tahun kabisat.

    if (tahun % 4 == 0 && (tahun %  100 != 0  || tahun % 400 == 0)){
        cout << "ini adalah tahun kabisat" << endl;
    }else{
        cout << "bukan tahun kabisat" << endl;
    }

    return 0;
}