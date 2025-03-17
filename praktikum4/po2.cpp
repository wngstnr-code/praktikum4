#include <iostream>
using namespace std;

struct produk {
    int kode;
    float harga;
    } peg1, peg2, peg3, peg4;

int main(){
    cout << "Masukkan produk pertama : " << endl;
    cout << "Masukkan kode produk : "  ;
    cin >> peg1.kode;
    cout << "Masukkan harga : " ;
    cin >> peg1.harga;

    cout << "Masukkan produk kedua : " << endl;
    cout << "Masukkan kode produk : " ;
    cin >> peg2.kode;
    cout << "Masukkan harga : " ;
    cin >> peg2.harga;

    cout << "Masukkan produk ketiga : " << endl;
    cout << "Masukkan kode produk : ";
    cin >> peg3.kode;
    cout << "Masukkan harga : ";
    cin >> peg3.harga;

    cout << "Masukkan produk keempat : " << endl;
    cout << "Masukkan kode produk : ";
    cin >> peg4.kode;
    cout << "Masukkan harga : ";
    cin >> peg4.harga;

    cout << "\nTampilkan Informasi Produk Pertama" << endl;
    cout << "Kode : " << peg1.kode << endl;
    cout << "Harga : " << peg1.harga << endl;

    cout << "\nTampilkan Informasi Produk Kedua" << endl;
    cout << "Kode : " << peg2.kode << endl;
    cout << "Harga : " << peg2.harga << endl;

    cout << "\nTampilkan Informasi Produk Ketiga" << endl;
    cout << "Kode : " << peg3.kode << endl;
    cout << "Harga : " << peg3.harga << endl;

    cout << "\nTampilkan Informasi Produk Keempat" << endl;
    cout << "Kode : " << peg4.kode << endl;
    cout << "Harga : " << peg4.harga << endl;
    
    return 0;
}