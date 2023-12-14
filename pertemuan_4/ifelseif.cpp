#include <iostream>

using namespace std;

int main(){

    int a;

    cout << "masukan angka: ";
    cin >> a;

    if (a > 0 ){
        cout << a << " Bilangan Positif" << endl;
    }else if (a < 0){
        cout << a << " Bilangan Negatif" << endl;
    }else {
        cout << a << " Bukan bilangan positif atau negatif" << endl;
    }

    return 0;
}