#include <iostream>

using namespace std;
int main(){
    int a = 2;
    int b = 8;

    bool hasil;

    // operator logika : not, and, or

    // not 
    hasil = !(2 == 3);

    // and : bernilai benar apabila kedua nilai true
    // a = 3, b = 2
    cout << "logika and \n";
    hasil = (a == 3) && (b == 2); //true and true
    cout << hasil << endl;
    hasil = (a == 4) && (b == 2); // false and true
    cout << hasil << endl;
    hasil = (a == 3) && (b == 3); // true and false
    cout << hasil << endl;
    hasil = (a == 4) && (b == 3); // false and false
    cout << hasil << endl;

    // or : bernilai salah apabila kedua nilai salah
    // cout << "logika or \n";
    hasil = (a == 3) || (b == 2); //true and true
    cout << hasil << endl;
    hasil = (a == 4) || (b == 2); // false and true
    cout << hasil << endl;
    hasil = (a == 3) || (b == 3); // true and false
    cout << hasil << endl;
    hasil = (a == 4) || (b == 3); // false and false
    cout << hasil << endl;
    // a = 3, b = 2
    // 3 parameter
    hasil = (a == 3) || (b == 2) && (b == 4); //true and true

    cout << hasil << endl;

    return 0;
}