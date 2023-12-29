#include <iostream>
#include <cmath>

using namespace std;
int main(){
    double a = 0;
    string word = "hello";

    string hasil = hash(word);

    while(a <= 10){
        cout << "Kuadrat " << hasil << " = " << ceil(sqrt(a)) << endl;
        a++;
    }
}