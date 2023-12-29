#include <iostream>

using namespace std;

// fungsi dengan kembalian
int tambah(int a, int b){
    return hasil = a + b;
}

int kurang(int a, int b){
    int hasil = a - b; 
    return hasil;
}

void program(){
    cout << "### Program Pertambahan dan Pengurangan ###\n";
}



int main(){
    int angka1, angka2;
    program();
    cout << "masukan angka1: ";
    cin >> angka1; // 10
    cout << "masukan angka2: ";
    cin >> angka2; // 5

    cout << angka1 << " + " << angka2 << " = " << tambah(10, 6) << endl;
    program();

    return 0;
}