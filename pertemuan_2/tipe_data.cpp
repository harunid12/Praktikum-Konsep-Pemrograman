#include <iostream>
#include <limits>

using namespace std;
int main(){
    // bilangan bulat
    int a = 9;
    long b = 6;
    short c = 7;

    // bilangan decimal
    float d = 1.0;
    double e = 2.5; 
    
    cout << d << endl;
    cout << numeric_limits<bool>::max() << endl;
    return 0;
}