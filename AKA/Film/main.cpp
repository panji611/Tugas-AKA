#include "Film.h"
#include <iostream>
using namespace std;

int main() {
    FilmList L;
    createList(L);

    int menuChoice;
    string title, genre;
    double rating;

    do {
        cout << "\n===== MENU =====\n";
        cout << "1. Tambah Film\n";
        cout << "2. Tampilkan Semua Film\n";
        cout << "3. Tampilkan Film Terbaik\n";
        cout << "4. Tambah Film Secara Terurut\n";
        cout << "0. Keluar\n";
        cout << "Pilih menu: ";
        cin >> menuChoice;

        if (menuChoice == 1) {
            cout << "Masukkan Judul: ";
            cin.ignore();
            getline(cin, title);
            cout << "Masukkan Genre: ";
            getline(cin, genre);
            cout << "Masukkan Rating: ";
            cin >> rating;
            insertLast(L, createFilm(title, genre, rating));
        } else if (menuChoice == 2) {
            cout << "Daftar Film:\n";
            showFilms(L);
        } else if (menuChoice == 3) {
            Film* bestFilm = findBestFilm(L);
            if (bestFilm != nullptr) {
                cout << "Film Terbaik:\n";
                cout << "Title: " << bestFilm->title << ", Genre: " << bestFilm->genre << ", Rating: " << bestFilm->rating << endl;
            } else {
                cout << "Tidak ada film dalam daftar." << endl;
            }
        } else if (menuChoice == 4) {
            cout << "Masukkan Judul: ";
            cin.ignore();
            getline(cin, title);
            cout << "Masukkan Genre: ";
            getline(cin, genre);
            cout << "Masukkan Rating: ";
            cin >> rating;
            insertSorted(L, createFilm(title, genre, rating));
        } else if (menuChoice == 0) {
            cout << "Keluar dari program." << endl;
        } else {
            cout << "Pilihan tidak valid." << endl;
        }
    } while (menuChoice != 0);

    return 0;
}
