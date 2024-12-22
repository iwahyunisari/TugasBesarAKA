#include <iostream>
#include "TubesAKA.h"

using namespace std;

int main() {
    const int MAX_Buku = 10000;
    Buku arrBuku[MAX_Buku];
    long long targetISBN;
    int n, pilihan;

    cout << "Masukkan jumlah buku (maksimum " << MAX_Buku << "): ";
    cin >> n;
    if (n > MAX_Buku) {
        cout << "Jumlah buku melebihi kapasitas maksimum!" << endl;
        return 1;
    }

    cout << "Masukkan data buku (judul penulis ISBN) dalam satu baris:\n";
    for (int i = 0; i < n; i++) {
        cin >> arrBuku[i].judul >> arrBuku[i].penulis >> arrBuku[i].isbn;
    }

    cout << "Cetak Semua Info Buku? (Ya/Tidak) ";
    string pilih;
    cin >> pilih;
    if (pilih == "Ya"){
        cout << "Berapa Baris? ";
        int baris;
        cin >> baris;
        printAll(arrBuku, baris);
    }

    cout << "\nMasukkan ISBN yang ingin dicari: ";
    cin >> targetISBN;

    cout << "Pilih metode pencarian:\n";
    cout << "1. Linear Search\n";
    cout << "2. Binary Search (pastikan daftar terurut)\n";
    cout << "Pilihan: ";
    cin >> pilihan;

    int hasil = -1;

    if (pilihan == 1) {
        hasil = linear_search_iterative(arrBuku, n, targetISBN);
    } else if (pilihan == 2) {
        hasil = binary_search_recursive(arrBuku, targetISBN, 0, n - 1);
    } else {
        cout << "Pilihan tidak valid." << endl;
        return 1;
    }

    if (hasil != -1) {
        cout << "\nISBN ditemukan:\n";
        cout << "Judul: " << arrBuku[hasil].judul << endl;
        cout << "Pengarang: " << arrBuku[hasil].penulis << endl;
        cout << "ISBN: " << arrBuku[hasil].isbn << endl;
    } else {
        cout << "\nISBN tidak ditemukan." << endl;
    }

    return 0;
}
