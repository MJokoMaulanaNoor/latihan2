#include <iostream>
#include <conio.h>
using namespace std;

// Fungsi untuk menampilkan menu
void dMenu() {
    system("cls");
    cout << "Aplikasi Tampilan Menu" << "\n";
    cout << "1. Menu Pertama" << "\n";
    cout << "2. Menu Kedua" << "\n";
    cout << "3. Menu Ketiga" << "\n";
    cout << "4. Menu Keempat" << "\n";
    cout << "5. Exit" << "\n";
    cout << "Masukan angka: ";
}

// Fungsi untuk menampilkan menu pertama
void mPertama(string pesan) {
    system("cls");
    cout << "Hallo saya menu " << pesan;
    getch();  // Menunggu input dari pengguna untuk melanjutkan
}

int main() {
    char pl;
    do {
        dMenu();  // Menampilkan menu
        pl = getch();  // Menunggu input dari pengguna
        switch (pl) {
            case '1':
                mPertama("pertama");
                break;
            case '2':
                mPertama("ke- dua");
                break;
            case '3':
                mPertama("ke- tiga");
                break;
            case '4':
                mPertama("ke- empat");
                break;
            case '5':
                // Exit program
                break;
            default:
                system("cls");
                cout << "Pilihan Tidak Tersedia";
                getch();  // Menunggu input sebelum melanjutkan
                break;
        }
    } while (pl != '5');  // Loop sampai pengguna memilih untuk keluar
    return 0;
}
