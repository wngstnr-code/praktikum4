#include <iostream>
using namespace std;

struct pegawai{
    char nama[20];
    int id;
    float gaji;
    char alamat[40];
    int umur;
};

int main () {
    pegawai pgw;
    cout << "Masukkan nama : " << endl;
    cin.get (pgw.nama,20);

    cout << "Masukkan id pegawai : " << endl;
    cin >> pgw.id;

    cout << "Masukkan gaji : " << endl;
    cin >> pgw.gaji;

    cout << "Masukkan alamat pegawai  : " << endl;
    cin >> pgw.alamat;

    cout << "Masukkan umur pegawai : " << endl;
    cin >> pgw.umur;

    cout << "\n Tampilkan Informasi Pegawai" << endl;
    cout << "Nama : " << pgw.nama << endl;
    cout << "Id : " << pgw.id << endl;
    cout << "Gaji : " << pgw.gaji << endl;
    cout << "Alamat : " << pgw.alamat << endl;
    cout << "Umur : " << pgw.umur << endl;

    return 0;

}