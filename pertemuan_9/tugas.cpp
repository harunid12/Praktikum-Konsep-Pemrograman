#include <iostream>
using namespace std;

void awalProgram(){
    cout << "\nDaftar Nama Mahasiswa TRPL: \n\n";
    cout << "| No |" << "| Nama |" << endl;
    cout << "------" << "--------" << endl;
}

void akhirProgram(){
    cout << "\nDaftar Nama Mahasiswa TRPL \n\n";
}

int main(){

    int n;
    int i = 0;
    cout << "masukan jumlah data: ";
    cin >> n;
    string nama[n];
    while(i < n){
        cout << "masukan nama: ";
        cin >> nama[i];
        i++;
    }
    
    awalProgram();
    for (int i =0; i < n; i++){
        cout << "| " << i + 1 << " |"<< "| " << nama[i] << " |" << endl;
    }
    akhirProgram();
    return 0;
}