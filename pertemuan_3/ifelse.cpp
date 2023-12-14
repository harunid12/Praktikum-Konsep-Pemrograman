#include <iostream>

using namespace std;

int main(){
    int a, b;

    cout << "Masukan angka1: ";
    cin >> a;
    cout << "masukan angka2: ";
    cin >> b;

    if ( a > b){
        cout << "bilangan " << a << " adalah yang terbesar" << endl;
    }else if(b > a){
        cout << "bilangan " << b << " adalah bilangan terbesar" << endl;
    }
    

    return 0;
}