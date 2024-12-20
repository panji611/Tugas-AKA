#include <iostream>

using namespace std;

int main()
{
        List L;
    createList_103012300497(L);

    int menuChoice;
    char repeatMenu;
    int dataCount;
    infotype x;

    do {
        menuChoice = selectionMenu_103012300497();
        switch(menuChoice) {
            case 1:
                cout << "Jumlah data yang akan ditambahkan: ";
                cin >> dataCount;
                for (int i = 0; i < dataCount; i++) {
                    cout << "Masukkan data baru: ";
                    cin >> x;
                    address p = createNew_103012300497(x);
                    insertLast_103012300497(L, p);
                }
                break;

            case 2:
                cout << "Data dalam list: ";
                show_103012300497(L);
                break;

            case 3:
                {
                    address minNode = findMin_103012300497(L);
                    if (minNode != nil) {
                        cout << "Nilai terkecil: " << info(minNode) << endl;
                    } else {
                        cout << "List kosong." << endl;
                    }
                }
                break;

            case 4:
                cout << "Masukkan nilai untuk di-insert di tengah: ";
                cin >> x;
                insertMiddle_103012300497(L, x);
                break;

            case 0:
                cout << "ANDA TELAH KELUAR DARI PROGRAM" << endl;
                return 0;

            default:
                cout << "Pilihan tidak valid." << endl;
        }

        cout << "Kembali ke menu utama? (Y/N): ";
        cin >> repeatMenu;
    } while (repeatMenu == 'Y' || repeatMenu == 'y');

    cout << "ANDA TELAH KELUAR DARI PROGRAM" << endl;

    return 0;
}
