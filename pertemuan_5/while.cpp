#include <iostream>

using namespace std;

int main(){

    // int angka = 10;
    // // infinite loop
    // while(angka > 9){
    //     cout << "angka ke " << angka << endl;
    //     angka++;
    //     // angka = angka + 1;
    // }
    int a = 1;
    int limitA = 1024;

    while(a <= limitA){
        cout << a << ", ";
        a *= 2;
    }

    return 0;
}