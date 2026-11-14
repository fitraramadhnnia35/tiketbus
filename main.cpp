
#include <iostream>
using namespace std;

void menu() {
    cout << "===== TIKET BUS MALANG =====" << endl;
    cout << "1. Malang - Surabaya Rp35000" << endl;
    cout << "2. Malang - Pasuruan Rp20000" << endl;
    cout << "3. Malang - Jombang Rp25000" << endl;
}

void pesanTiket(string tujuan, int harga) {
    int jumlah, total;

    cout << "Tujuan: Malang - " << tujuan << endl;
    cout << "Harga tiket: Rp" << harga << endl;
    cout << "Jumlah penumpang: ";
    cin >> jumlah;

    total = harga * jumlah;

    cout << "Total pembayaran: Rp" << total << endl;
}

int main() {
    int pilih;
    char ulang;

    do {
        menu();

        cout << "Pilih tujuan: ";
        cin >> pilih;

        if (pilih == 1) {
            pesanTiket("Surabaya", 35000);
        }
        else if (pilih == 2) {
            pesanTiket("Pasuruan", 20000);
        }
        else if (pilih == 3) {
            pesanTiket("Jombang", 25000);
        }
        else {
            cout << "Pilihan tidak tersedia" << endl;
        }

        cout << "Pesan tiket lagi? (y/Y): ";
        cin >> ulang;

    } while (ulang == 'y' || ulang == 'Y');

    cout << "Terima kasih sudah memesan tiket!" << endl;

    system("pause");
    return 0;
}
