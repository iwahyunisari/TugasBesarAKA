#include <iostream>
#include "TubesAKA.h"

using namespace std;

int linear_search_iterative(Buku arrBuku[], int n, long long targetISBN) {
    for (int i = 0; i < n; i++) {
        if (arrBuku[i].isbn == targetISBN) {
            return i;
        }
    }
    return -1;
}

int binary_search_recursive(Buku arrBuku[], long long targetISBN, int low, int high) {
    if (low > high) {
        return -1;
    }

    int mid = (low + high) / 2;
    if (arrBuku[mid].isbn == targetISBN) {
        return mid;
    } else if (arrBuku[mid].isbn < targetISBN) {
        return binary_search_recursive(arrBuku, targetISBN, mid + 1, high);
    } else {
        return binary_search_recursive(arrBuku, targetISBN, low, mid - 1);
    }
}


void printAll(Buku arrBuku[], int n) {
    cout << "\nDaftar Buku:\n";
    for (int i = 0; i < n; i++) {
        cout << i + 1 << ". " << arrBuku[i].judul << ", "
             << arrBuku[i].penulis << ", " << arrBuku[i].isbn << endl;
    }
}
