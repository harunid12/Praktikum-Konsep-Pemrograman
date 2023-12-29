#include <iostream>
using namespace std;

int main(){

    // multidimensi array
    //array 2 dimensi
    int nilai[2][3] = {
        // {1,2,3},
        {4,5,6}
    };

    cout << nilai[1][0] << endl;

    // int size = sizeof(nilai) / sizeof(nilai[0]);

    // for (int i = 0; i < size; i++){
    //     cout << nilai[1][i] << endl;

    // }

    // // array 3 dimensi
    // int nilai[2][3][4] = {
    //     {
    //         {1,2,3,4},
    //         {5,6,7,8},
    //         {9,10,11,12}
    //     },
    //     {
    //         {13,14,15,16},
    //         {17,18,19,20},
    //         {21,22,23,24}
    //     }
    // };

    // cout << nilai[1][1][3] << endl;

    return 0;
}