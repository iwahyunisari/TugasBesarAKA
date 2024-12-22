#ifndef TUBESAKA_H_INCLUDED
#define TUBESAKA_H_INCLUDED

using namespace std;

struct Buku {
    string judul;
    string penulis;
    long long isbn;
};

int linear_search_iterative(Buku arrBuku[], int n, long long targetISBN);
int binary_search_recursive(Buku arrBuku[], long long targetISBN, int low, int high);
void printAll(Buku arrBuku[], int n);

#endif // TUBESAKA_H_INCLUDED
