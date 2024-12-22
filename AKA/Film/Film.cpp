#include "Film.h"
void createList(FilmList &L) {
    L.first = NULL;
}

Film* createFilm(string title, string genre, double rating) {
    Film* p = new Film;
    p->title = title;
    p->genre = genre;
    p->rating = rating;
    p->next = NULL;
    return p;
}

void insertLast(FilmList &L, Film* p) {
    if (L.first == NULL) {
        L.first = p;
    } else {
        Film* q = L.first;
        while (q->next != NULL) {
            q = q->next;
        }
        q->next = p;
    }
}

void showFilms(FilmList L) {
    Film* p = L.first;
    while (p != NULL) {
        cout << "Title: " << p->title << ", Genre: " << p->genre << ", Rating: " << p->rating << endl;
        p = p->next;
    }
}

Film* findBestFilm(FilmList L) {
    if (L.first == NULL) {
        return NULL;
    }
    Film* best = L.first;
    Film* p = L.first->next;

    while (p != NULL) {
        if (p->rating > best->rating) {
            best = p;
        }
        p = p->next;
    }
    return best;
}

void insertSorted(FilmList &L, Film* p) {
    if (L.first == NULL || L.first->rating <= p->rating) {
        p->next = L.first;
        L.first = p;
    } else {
        Film* q = L.first;
        while (q->next != NULL && q->next->rating > p->rating) {
            q = q->next;
        }
        p->next = q->next;
        q->next = p;
    }
}
