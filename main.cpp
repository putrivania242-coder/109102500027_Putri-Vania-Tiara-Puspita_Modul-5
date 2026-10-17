
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

    return 0;
}
