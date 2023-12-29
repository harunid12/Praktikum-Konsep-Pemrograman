#include <iostream>

using namespace std;

int main(){
    int a;

    cout << "Masukan Angka: ";
    cin >> a;

    // kondisi dalam bentuk boolean
    if (a > 0){
        cout << a << " Bilangan Positif" << endl;
    }else if(a < 0){
        cout << a << " Bilangan Negatif" << endl;
    }else {
        cout << a << " Bukan Bilangan Negatif atau Positif" << endl;
    }

    cout << "### Program Selesai ###" << endl;

    return 0;
}