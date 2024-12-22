#include "Film.h"


void inputAngka(int &NUM, int x){
    NUM = 0;
}

void tambah(int &NUM, int x){
    NUM = NUM + 1;
}

void printHasil(int NUM){
    cout << "Nilai saat ini: " << NUM << endl;
}

int selectionMenu(){
    cout << "===== MENU ======" << endl;
    cout << "1. Menambah N data baru" << endl;
    cout << "2. Menampilkan semua data" << endl;
    cout << "3. Nilai terkecil" << endl;
    cout << "4. Insert middle " << endl;
    cout << "0. Exit" << endl;
    cout << "Pilihan menu" << endl;

    int input = 0;
    cin >> input;

    return input;
}

void createListList &L){
    first(L) = nil;
}


address createNew(infotype x){

    address p = new elmlist;
    info(p) = x;
    next(p) = nil;

    return p;
}


void insertLast(List &L, address p){
    if (first(L) == nil){
        first(L) = p;
    } else{
        address q = first(L);
        while (next(q) != nil) {
            q = next(q);
        }
        next(q) = p;
    }
}

address findMin(List L){
    if (first(L) == nil) return nil;
    address minNode = first(L);
    address current = next(first(L));

    while (current != nil) {
        if (info(current) < info(minNode)) {
            minNode = current;
        }
        current = next(current);
    }
    return minNode;
};

void insertMiddle(List &L, int value){
    address p = createNew_103012300497(value);
    if (first(L) == nil) {
        first(L) = p;
    } else if (info(first(L)) >= value) {
        next(p) = first(L);
        first(L) = p;
    } else {
        address q = first(L);
        while (next(q) != nil && info(next(q)) < value) {
            q = next(q);
        }

        next(p) = next(q);
        next(q) = p;
    }
}

void show(List L){
    address p = first(L);
    while (p != nil) {
        cout << info(p) << ", ";
        p = next(p);
    }
    cout << endl;
}
