#include <iostream>
using namespace std;

int main(){

    // menambahkan data array
    string cars[5];

    cars[0] = "BMW";
    cars[1] = "toyota";
    cars[2] = "suzuki";
    cars[3] = "wuling";
    cars[4] = "lamborghini";

    // mengubah elemen array
    cars[3] = "honda";

    // cout << cars[4] << endl;

    for (int i =0; i < 5; i++){
        cout << cars[i] << endl;
    }


}