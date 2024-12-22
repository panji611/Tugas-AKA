#ifndef FILMLINKEDLIST_H_INCLUDED
#define FILMLINKEDLIST_H_INCLUDED
#include <iostream>
#include <string>
using namespace std;

struct Film {
    string title;
    string genre;
    double rating;
    Film* next;
};

struct FilmList {
    Film* first;
};

void createList(FilmList &L);
Film* createFilm(string title, string genre, double rating);
void insertLast(FilmList &L, Film* p);
void showFilms(FilmList L);
Film* findBestFilm(FilmList L);
void insertSorted(FilmList &L, Film* p);

#endif // FILMLINKEDLIST_H_INCLUDED
