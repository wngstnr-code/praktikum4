#include <iostream>
using namespace std;

struct mahasiswa {
    char nama[40];
    int angkatan;
};

int main (){
    mahasiswa mhs;
    cout << "Masukkan nama : ";
    cin.get (mhs.nama, 40);
    cout << "Masukkan angkatan : ";
    cin >> mhs.angkatan;

    cout << "Nama : " << mhs.nama << endl;
    cout << "Angkatan : " << mhs.angkatan << endl;
    cout << "Alokasi memori untuk elemen nama : " << &mhs.nama << endl;
    cout << "Alokasi memori untuk elemen angkatan : " << &mhs.nama << endl;
    cout << "Ukuran dari variabel union : " << sizeof(mahasiswa) << endl;

    return 0;

}