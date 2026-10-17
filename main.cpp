#include "Singlylist.h"
#include <iostream>
using namespace std;

int main() {
    List L;
    address P;

    CreateList(L);

    P = alokasi(2);
    insertFirst(L, P);

    P = alokasi(0);
    insertFirst(L, P);

    P = alokasi(8);
    insertFirst(L, P);

    P = alokasi(12);
    insertFirst(L, P);

    P = alokasi(9);
    insertFirst(L, P);

    cout << "Isi Singly Linked List: ";
    printInfo(L);

    address hasil = findElm(L, 8);

    if (hasil != NULL) {
        cout << "Elemen 8 ditemukan: " << hasil->info << endl;
    } else {
        cout << "Elemen 8 tidak ditemukan" << endl;
    }

    int total = 0;
    address Q = L.First;

    while (Q != NULL) {
        total += Q->info;
        Q = Q->next;
    }

    cout << "Total info seluruh elemen: " << total << endl;

    return 0;
}