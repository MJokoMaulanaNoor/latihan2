#include <iostream>
#include <cstdlib>  // Untuk system("cls") di Windows
using namespace std;

// Variabel global
int n;  // Untuk menyimpan jumlah data (misalnya)
int data[100];  // Array untuk menyimpan data

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
    cout << "\nPress any key to continue...";
    cin.get();  // Mengganti getch dengan cin.get()
}

// Fungsi untuk menukar dua nilai integer
void tukar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    char pl;
    // Inisialisasi variabel data
    n = 5;  // Misalnya kita ingin mengisi 5 data
    for (int i = 0; i < n; ++i) {
        ::data[i] = i + 1;  // Mengisi data dengan nilai 1, 2, 3, ...
    }

    // Menampilkan data sebelum ditukar
    cout << "Data sebelum ditukar: ";
    for (int i = 0; i < n; ++i) {
        cout << ::data[i] << " ";  // Mengakses data global
    }
    cout << "\n";

    // Menukar dua data (misalnya data[0] dan data[1])
    tukar(&::data[0], &::data[1]);  // Mengakses data global

    // Menampilkan data setelah ditukar
    cout << "Data setelah ditukar: ";
    for (int i = 0; i < n; ++i) {
        cout << ::data[i] << " ";  // Mengakses data global
    }
    cout << "\n";

    do {
        dMenu();  // Menampilkan menu
        cin >> pl;  // Mengganti getch dengan cin untuk membaca input

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
                cin.get();  // Menunggu input sebelum melanjutkan
                break;
        }
    } while (pl != '5');  // Loop sampai pengguna memilih untuk keluar

    return 0;
}
