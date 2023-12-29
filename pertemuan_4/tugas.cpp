// #include <iostream>

// using namespace std;

// int main(){
//     int angka;

//     cout << "masukan angka: ";
//     cin >> angka;

//     if (angka > 80 && angka <= 100){
//         cout << "A" << endl;
//     }else if (angka <= 80){
//         cout << "B" << endl;
//     }else if (angka <= 70){
//         cout << "C" << endl;
//     }else if (angka <= 55){
//         cout << "D" << endl;
//     }else if ( angka < 40 ){
//         cout << "E" << endl;
//     }

//     cout << "program selesai" << endl;
//     return 0;
// }


#include <iostream>

using namespace std;
int main() {

    int nilai;

    cout << "Masukkan nilai ujian: ";
    cin >> nilai;

    if (nilai >= 80 && nilai <=100){
        cout << " Nilai A" << endl;
    } else if ( nilai >=70 && nilai < 80){
        cout << "Nilai B" << endl;
    } else if ( nilai >= 55 && nilai < 70){
        cout << "Nilai C" << endl;
    } else if ( nilai >=40 && nilai < 55 ){
        cout << "Nilai D" << endl;
    } else if (nilai < 40){
        cout << "Nilai E" << endl;
    }
    // if (nilai >= 80 && nilai <= 100) {
    //     cout << nilai << "Nilai : A" << endl;
    // } else if (nilai >= 70 && nilai < 80) {
    //     cout << nilai << "Nilai : B" << endl;
    // } else if (nilai >= 55 && nilai < 70) {
    //     cout << nilai << "Nilai : C" << endl;
    // } else if (nilai >= 40 && nilai < 55) {
    //     cout << nilai << "Nilai : D" << endl;
    // } else if (nilai < 40) {
    //     cout << nilai << "Nilai : E" << endl;
        
    // }
    return 0;
}