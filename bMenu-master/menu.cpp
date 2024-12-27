#include <iostream>
#include <cstdlib>  // Untuk system("cls") di Windows
using namespace std;

// Variabel global
int n;                // Untuk menyimpan jumlah data
int globalData[100];  // Array global untuk menyimpan data

// Fungsi untuk menampilkan menu
void dMenu() {
    system("cls");
    cout << "Aplikasi Tampilan Menu" << "\n";
    cout << "1. Menu Pertama" << "\n";
    cout << "2. Menu Kedua" << "\n";
    cout << "3. Menu Ketiga" << "\n";
    cout << "4. Menu Keempat" << "\n";
    cout << "5. Tampilkan Data Array" << "\n";  // Tambahan opsi menu
    cout << "6. Exit" << "\n";
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

// Fungsi untuk input data ke array
void inputData() {
    cout << "Masukkan jumlah data: ";
    cin >> n;

    if (n <= 0 || n > 100) {
        cout << "Jumlah data tidak valid!";
        exit(1);  // Keluar dari program jika input tidak valid
    }

    // Input data ke dalam array
    cout << "Masukkan " << n << " data: \n";
    for (int i = 0; i < n; ++i) {
        cout << "Data ke-" << i + 1 << ": ";
        cin >> globalData[i];  // Menggunakan globalData untuk menghindari konflik
    }
}

// Fungsi untuk mencetak data dalam array
void printData(const string &pesan) {
    cout << pesan << ": ";
    for (int i = 0; i < n; ++i) {
        cout << globalData[i] << " ";  // Menggunakan globalData untuk mencetak
    }
    cout << "\n";
}

// Fungsi tambahan untuk menampilkan data array dari menu
void tampilkanDataArray() {
    system("cls");
    cout << "Menampilkan Data Array\n";
    if (n > 0) {
        printData("Data saat ini");
    } else {
        cout << "Array kosong, silakan masukkan data terlebih dahulu.\n";
    }
    cout << "Press any key to continue...";
    cin.ignore();  // Bersihkan buffer
    cin.get();
}

int main() {
    char pl;

    // Input data
    inputData();

    // Menampilkan data sebelum ditukar
    printData("Data sebelum ditukar");

    // Menukar dua data (misalnya globalData[0] dan globalData[1])
    if (n > 1) {
        tukar(&globalData[0], &globalData[1]);  // Menukar data
    }

    // Menampilkan data setelah ditukar
    printData("Data setelah ditukar");

    do {
        dMenu();  // Menampilkan menu
        cin >> pl;

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
                tampilkanDataArray();  // Menampilkan data array
                break;
            case '6':
                // Exit program
                break;
            default:
                system("cls");
                cout << "Pilihan Tidak Tersedia";
                cin.get();
                break;
        }
    } while (pl != '6');

    return 0;
}
