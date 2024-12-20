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

void inputAngka_103012300497(int &NUM, int x);
void tambah_103012300497(int &NUM, int x);
void printHasil_103012300497(int NUM);
int selectionMenu_103012300497();
void createList_103012300497(List &L);
address createNew_103012300497(infotype x);
void insertLast_103012300497(List &L, address p);
void show_103012300497(List L);
address findMin_103012300497(List L);
void insertMiddle_103012300497(List &L, int value);

#endif // FILM_H_INCLUDED
