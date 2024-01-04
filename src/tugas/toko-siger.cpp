#include <iostream>
#include <iomanip>

using namespace std;

struct Item {
  string nama;
  int harga = 0;
  string tipe = "";
  int jumlah = 0;

  int total_harga() {
    return harga * jumlah;
  }

  int length_nama() {
    return nama.length();
  }
};

const int MAX_ITEMS = 1000;
const int MAX_LIST = 5;

int maxLength(Item arr[MAX_LIST]) {
  int length = 0;

  for (int i = 0; i < MAX_LIST; i++) {
    if (arr[i].length_nama() > length) {
      length = arr[i].length_nama();
    }
  }

  return length;
}

void headListItem(int maxLength) {
  cout << left << setw(4) << "No" 
  << left << setw(maxLength + 5) << "Nama"
  << left << setw(10) << "Jumlah"
  << left << setw(10) << "Harga"
  << left << "Total Harga" << endl;
}

int main() {
  Item list_buku[MAX_LIST] = {
    {"Buku Teknologi Informasi", 50000},
    {"Buku Fiksi Ilmiah", 35000},
    {"Buku Pendidikan", 40000},
    {"Buku Bisnis", 45000},
    {"Buku Sejarah", 30000}
  };

  Item list_atk[MAX_LIST] = {
    {"Pensil", 2000},
    {"Penghapus", 1500},
    {"Pulpen", 2500},
    {"Penggaris", 3000},
    {"Gunting", 4000}
  };

  Item barang_pembelian[MAX_ITEMS];

  int no_barang = 0;
  char pilihan_pelanggan;
  int id_barang, jumlah_beli, total_bayar;
  bool tipe_buku = false, tipe_atk = false;

  cout << "==================================" << endl;
  cout << "== Selamat Datang di Toko Siger ==" << endl;
  cout << "==================================" << endl;

  do {
    cout << "B = Buku" << endl;
    cout << "A = Alat Tulis Kantor" << endl;
    cout << "Q = Keluar\n" << endl;

    cout << "Pilih Jenis Barang: ";
    cin >> pilihan_pelanggan;

    pilihan_pelanggan = toupper(pilihan_pelanggan);
    
    switch (pilihan_pelanggan) {
      case 'B':
        cout << "\n------------------------" << endl;
        cout << "Judul Buku Yang Tersedia" << endl;
        cout << "------------------------" << endl;

        for (int i = 0; i < MAX_LIST; i++) {
          cout << i + 1 << left << setw(2) << "."
          << left << setw(maxLength(list_buku)) << list_buku[i].nama
          << " : Rp" << list_buku[i].harga << endl;
        }

        cout << "\nMasukkan Nomor Buku Yang Dibeli: ";
        cin >> id_barang;

        if (id_barang >= 1 && id_barang <= 5) {
          cout << "Masukkan Jumlah Pembelian: ";
          cin >> jumlah_beli;

          barang_pembelian[no_barang].nama = list_buku[id_barang - 1].nama;
          barang_pembelian[no_barang].harga = list_buku[id_barang - 1].harga;
          barang_pembelian[no_barang].tipe = "buku";
          barang_pembelian[no_barang].jumlah = jumlah_beli;

          tipe_buku = true;
          no_barang++;

        } else {
          cout << "Nomor Buku TIdak Ditemukan" << endl;
        }

        break;

      case 'A':
        cout << "\n-------------------------------" << endl;
        cout << "Alat Tulis Kantor Yang Tersedia" << endl;
        cout << "-------------------------------" << endl;

        for (int i = 0; i < MAX_LIST; i++) {
          cout << i + 1 << left << setw(2) << "."
          << left << setw(maxLength(list_atk)) << list_atk[i].nama 
          << " : Rp" << list_atk[i].harga << endl;
        }

        cout << "\nMasukkan Nomor ATK Yang Dibeli: ";
        cin >> id_barang;

        if (id_barang >= 1 && id_barang <= 5) {
          cout << "Masukkan Jumlah Pembelian: ";
          cin >> jumlah_beli;

          barang_pembelian[no_barang].nama = list_atk[id_barang - 1].nama;
          barang_pembelian[no_barang].harga = list_atk[id_barang - 1].harga;
          barang_pembelian[no_barang].tipe = "atk";
          barang_pembelian[no_barang].jumlah = jumlah_beli;

          tipe_atk = true;
          no_barang++;

        } else {
          cout << "Nomor ATK TIdak Ditemukan" << endl;
        }

        break;

      default:
        cout << "\nAnda Tidak Memesan Barang" << endl;
        break;
    }

    cout << "\nApakah Anda Ingin Memesan Barang Lain? (Y/N): ";
    cin >> pilihan_pelanggan;

  } while (pilihan_pelanggan == 'Y' || pilihan_pelanggan == 'y');

  cout << "\n==========================================" << endl;
  cout << "Terimakasih Telah Berbelanja di Toko Siger" << endl;
  cout << "        Daftar Barang Yang Dibeli" << endl;
  cout << "==========================================" << endl;
  
  int no_pembelian = 0;

  if (tipe_buku) {
    cout << "\n-----------" << endl;
    cout << "Daftar Buku" << endl;
    cout << "-----------" << endl;

    headListItem(maxLength(barang_pembelian));

    for (int i = 0; i < no_barang; i++) {
      if (barang_pembelian[i].tipe == "buku") {
        cout << left << setw(4) << ++no_pembelian 
        << left << setw(maxLength(barang_pembelian) + 5) << barang_pembelian[i].nama 
        << left << setw(10) << barang_pembelian[i].jumlah 
        << "Rp" << left << setw(12) << barang_pembelian[i].harga 
        << "Rp" << left << barang_pembelian[i].total_harga() << endl; 

        total_bayar += barang_pembelian[i].total_harga();
      }
    }
  }

  no_pembelian = 0;

  if (tipe_atk) {
    cout << "\n------------------------" << endl;
    cout << "Daftar Alat Tulis Kantor" << endl;
    cout << "------------------------" << endl;

    headListItem(maxLength(barang_pembelian));

    for (int i = 0; i < no_barang; i++) {
      if (barang_pembelian[i].tipe == "atk") {
        cout << left << setw(4) << ++no_pembelian 
        << left << setw(maxLength(barang_pembelian) + 5) << barang_pembelian[i].nama 
        << left << setw(10) << barang_pembelian[i].jumlah 
        << "Rp" << left << setw(12) << barang_pembelian[i].harga 
        << "Rp" << barang_pembelian[i].total_harga() << endl; 

        total_bayar += barang_pembelian[i].total_harga();
      }
    }
  }

  cout << "\n----------------------------------------" << endl;
  cout << left << setw(28) << "Total Harga Keseluruhan" << "Rp" << total_bayar << endl;
  cout << left << setw(28) << "Pajak 10%" << "Rp" << (int) (total_bayar * (10.0/100)) << endl;
  cout << left << setw(28) << "Total Yang Harus Dibayar" << "Rp" << total_bayar + (int) (total_bayar * (10.0/100)) << endl;
  cout << "----------------------------------------" << endl;

  return 0;
}