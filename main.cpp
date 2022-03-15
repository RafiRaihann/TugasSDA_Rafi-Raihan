#include <iostream>
#include <string>
using namespace std;

struct Barang
{
    string kode_barang;
    string nama_barang;
    int jumlah_barang;
};

int jumlahBarangDiinput = 0;

void inputBarang(Barang *barang);

void tampilkanListBarang(Barang *barang);

int pilihanMenu();

int main()
{
    Barang *listBarang = new Barang[100];
    int pilihan;
    while (true)
    {
        pilihan = pilihanMenu();
        if (pilihan < 1 || pilihan > 3)
        {
            cout << "Masukan Pilihan Yang Benar!" << endl;
        }
        else if (pilihan == 1)
        {
            inputBarang(listBarang);
        }
        else if (pilihan == 2)
        {
            tampilkanListBarang(listBarang);
        }
        else if (pilihan == 3)
        {
            break;
        }
    }
}

int pilihanMenu()
{
    int pilihan;
    cout << endl;
    cout << "===========================" << endl;
    cout << "==== Diazs Martiansyah ====" << endl;
    cout << "===========================" << endl;
    cout << "1. Input Barang" << endl;
    cout << "2. Tampilkan List Barang" << endl;
    cout << "3. Keluar Program" << endl;
    cout << "Masukan Pilihan [1-3] : ";
    cin >> pilihan;
    cout << endl;

    return pilihan;
}

void inputBarang(Barang *barang)
{
    string nama_barang;
    string kode_barang;
    int jumlah_barang;

    cout << "Masukan Kode Barang : ";
    cin >> kode_barang;
    cout << "Masukan Nama Barang : ";
    cin >> nama_barang;
    cout << "Masukan Jumlah Barang : ";
    cin >> jumlah_barang;

    barang[jumlahBarangDiinput].kode_barang = kode_barang;
    barang[jumlahBarangDiinput].nama_barang = nama_barang;
    barang[jumlahBarangDiinput].jumlah_barang = jumlah_barang;
    jumlahBarangDiinput++;
}

void tampilkanListBarang(Barang *barang)
{
    cout << endl;
    cout << "=======================" << endl;
    cout << "===== List Barang =====" << endl;
    cout << "=======================" << endl;
    cout << endl;

    for (int i = 0; i < jumlahBarangDiinput; i++)
    {
        cout << i + 1 << ". Nama : " << barang[i].nama_barang << ", Kode Barang : " << barang[i].kode_barang << ", Jumlah Barang : " << barang[i].jumlah_barang << endl;
    }
    cout << "=======================" << endl;
}
