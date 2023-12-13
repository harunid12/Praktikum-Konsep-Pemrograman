#include <iostream>

using namespace std;

// int main (){
//     int a = 9;
//     float b = 5;
//     float hasil;
//     // operator aritmatika
//     // +, -, *, /, %

//     // penjumlahan
//     hasil = a + b;
//     cout << a << " + " << b << " = " << hasil << endl;

//     // pengurangan
//     hasil = a - b;
//     cout << a << " - " << b << " = " << hasil << endl;

//     // perkalian
//     hasil = a * b;
//     cout << a << " x " << b << " = " << hasil << endl;

//     // pembagian
//     hasil = a / b;
//     cout << a << " / " << b << " = " << hasil << endl;

//     // modulus
//     // hasil = a % b;
//     // cout << a << " % " << b << " = " << hasil << endl;

//     // urutan eksekusi

//     hasil = (a + b) * (a / b);
//     cout << hasil << endl;
    
//     return 0;
// }

// latihan
int main () {
    int a;
    int b;

    int hasil;

    cout << "Masukan angka ke-1: ";
    cin >> a;
    cout << "Masukan Angka ke-2: ";
    cin >> b;

    // penjumlahan
    hasil = a + b;
    cout << a << " + " << b << " = " << hasil << endl;

    // pengurangan
    hasil = a - b;
    cout << a << " - " << b << " = " << hasil << endl;

    // perkalian
    hasil = a * b;
    cout << a << " x " << b << " = " << hasil << endl;

    // pembagian
    hasil = a / b;
    cout << a << " / " << b << " = " << hasil << endl;

    hasil = a % b;
    cout << a << " % " << b << " = " << hasil << endl;

    return 0;
    
}