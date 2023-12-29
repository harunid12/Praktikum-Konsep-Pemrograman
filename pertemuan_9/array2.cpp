#include <iostream>
using namespace std;

int main(){

    // multidimensi array
    //array 2 dimensi
    // int nilai[2][3] = {
        // {1,2},
        // {4,5}
    // };

    // int nilai[2][2];

    // nilai[0][0] = 10;
    // nilai[0][1] = 20;
    // nilai[1][0] = 30;
    // nilai[1][1] = 40;


    // cout << nilai[1][0] << endl;

    // int size = sizeof(nilai) / sizeof(nilai[0]);

    // for(int i = 0; i < 2; i++){
    //     for (int j = 0; i < 2; j++){
    //         cout << nilai[i][j] << endl;
    //     }
    // }

    // array 3 dimensi
    int nilai[2][3][4] = {
        {
           {1,2,3,4}, // 0
           {5,6,7,8}, // 1
           {9,10,11,12}, // 2
        },
        {
            {13,14,15,16},
            {17,18,19,20},
            {21,22,23,24}
        }
    };


    cout << nilai[0][1][0] << endl;

    return 0;
}