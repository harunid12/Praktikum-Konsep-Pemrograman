#include <iostream>
using namespace std;

int main(){
    //deklarasi array
    int myArray[5];

    // inisialisasi array
    int nilai[5] = {10, 20, 30, 40, 50};

    // akses elemen array
    cout << nilai[4] << endl;

    // ketahui jumlah elemen array
    int size = sizeof(nilai) / sizeof(nilai[0]);
    cout << size << endl;

    // looping array 
    for (int i = 0; i < size; i++){
        cout << "elemen ke-" << i + 1 << " = " << nilai[i] << endl;
    }

    

    return 0;
}