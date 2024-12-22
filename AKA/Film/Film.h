#ifndef FILM_H_INCLUDED
#define FILM_H_INCLUDED
#include <iostream>
using namespace std;

typedef int infotype;
typedef struct elmlist *address;

struct elmlist {
    infotype info;
    address next;
};

struct List {
    address first;
};

void inputAngka(int &NUM, int x);
void tambah(int &NUM, int x);
void printHasil(int NUM);
int selectionMenu();
void createList(List &L);
address createNew(infotype x);
void insertLast(List &L, address p);
void show(List L);
address findMin(List L);
void insertMiddle(List &L, int value);

#endif // FILM_H_INCLUDED
