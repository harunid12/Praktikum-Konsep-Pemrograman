#include <iostream>

using namespace std;

int main(){

    int a;

    cout << "masukan angka: ";
    cin >> a;
    cout << endl;

    // menentukan bilangan genap, ganjil
    /*
    if (a % 2 == 0){
        cout << a << " Adalah bilangan Genap!" << endl;
    }else {
        cout << a << " Adalah Bilangan ganjil!" << endl;
    }
    */

    // menentukan bilangan positif negatif

    if(a > 0) {
        cout << "adalah bilangan positif " << endl;
    }else{
        cout << "adalah bilangan Negatif " << endl;
    }

    return 0;
}