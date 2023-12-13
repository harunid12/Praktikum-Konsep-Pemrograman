// output 

/*

################################
Program Pertambahan
################################

nilai_1 + nilai_2 = hasil

###############################
Program Selesai!!!
###############################


*/


#include <iostream>

using namespace std;

int main(){
    int a, b, hasil;

    cout << "masukan angka1: ";
    cin >> a;
    cout << "masukan angka2: ";
    cin >> b;

    hasil = a + b;
    cout << "hasil tambah " << a << " + " << b << " = " << hasil << endl;
    return 0;
}