#include <iostream>
using namespace std;

typedef struct mahasiswa {
    typedef char c;
    typedef int i;
    c nama[40];
    i angkatan;
}mhs;

int main () {
    mhs aku;
    cout << "Masukkan nama mahasiswa : ";
    cin.get (aku.nama , 40);
    cout << "Masukkan angkatan : ";
    cin >> aku.angkatan;

    cout << "Data Mahasiswa" << endl;
    cout << "Nama : " << aku.nama << endl;
    cout << "Angkatan : " << aku.angkatan << endl;

    return 0;

}