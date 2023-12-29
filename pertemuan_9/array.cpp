#include <iostream>
using namespace std;

int main(){
    // deklarasi array
    int nilai[] = {50, 60, 70, 80, 90, 100, 110, 120, 130};
                   
    // mengetahui ukuran array
    int size = sizeof(nilai) / sizeof(nilai[0]);
    cout << size << endl;

    // tampilkan array
    // cout << nilai[0] << endl;
    // cout << nilai[1] << endl;
    // cout << nilai[2] << endl;

    // looping array
    for (int i = 0; i < size; i++){
        cout << "Elemen ke- " << i << " = " << nilai[i] << endl;
    }
    
}