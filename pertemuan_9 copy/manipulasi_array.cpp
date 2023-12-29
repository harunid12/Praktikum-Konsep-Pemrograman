#include <iostream>
using namespace std;

int main(){

    // memasukan data ke array
    // int nilai[3];

    // int size = sizeof(nilai) / sizeof(nilai[0]);

    // nilai[0] = 10;
    // nilai[1] = 20;
    // nilai[2] = 30;

    // for (int i = 0; i < size; i++){
    //     cout << "elemen ke- " << i << " = " << nilai[i] << endl;
    // }

    // return 0;

    //mengubah elemen array
    string mobil[] = {"toyota", "mitsubishi", "suzuki", "wuling", "BMW"};

    mobil[3] = "ferary";

    int size = sizeof(mobil) / sizeof(mobil[0]);

    for (int i = 0; i < size; i++){
        cout << "mobil ke-" << i << " = " << mobil[i] << endl;

    }


    return 0;
}