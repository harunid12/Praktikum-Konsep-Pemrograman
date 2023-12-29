#include <iostream>

using namespace std;
int main(){

    int a = 0;

    do{
        if (a % 2 == 0){
            cout << "angka genap " << a << endl;
        }else {
            cout << "angka ganjil " << a << endl;
        }
        a++;
    }while(a <= 100);

    return 0;
}