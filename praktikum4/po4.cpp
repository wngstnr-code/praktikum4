#include <iostream>
using namespace std;

struct mahasiswa{
    char nama [40];
    int angkatan;
};

int main (){
    mahasiswa mhs;
    cout << "Masukkan nama mahasiswa : ";
    cin.get (mhs.nama, 40);
    cout << "masukkan angkatan : ";
    cin >> mhs.angkatan;
    
    cout << "Nama : " << mhs.nama << endl;
    cout << "Angkatan : " << mhs.angkatan << endl;

    return 0;
}

/*
1. belum ada pendeklarasian tipe data pada mhs
2. penulisan input nama yang salah (seharusnya : cin.get(mhs.nama,40);
3. penulisan input angkatan yang salah (seharusnya : cin >> mhs.angkatan;) 
*/