#include <iostream>

using namespace std;

int main() {
  // preparation
  const int HARGA_SOTO = 18000, HARGA_SATE = 22500, HARGA_AYAM_BAKAR = 20000;
  const int HARGA_JUS_MANGGA = 10000, HARGA_ES_TEH = 5000, HARGA_KOPI = 7000;

  int jenis_makanan, jumlah_makanan, total_bayar_makanan;
  int jenis_minuman, jumlah_minuman, total_bayar_minuman;
  int total_harga, ongkir;
  float jarak_antar;

  // algoritma
  cout << "=============================================" << endl;
  cout << "== Selamat Datang di Resto Online Maumakan ==" << endl;
  cout << "=============================================" << endl;
  cout << "\n";

  cout << "Daftar Menu Makanan" << endl;
  cout << "1. Soto       : Rp18.000" << endl;
  cout << "2. Sate       : Rp22.500" << endl;
  cout << "3. Ayam Bakar : Rp20.000" << endl;

  cout << "Pilih Nomor Makanan Yang Dibeli: ";
  cin >> jenis_makanan;

  if (jenis_makanan >= 1 && jenis_makanan <= 3) {
    cout << "Masukkan Jumlah Pembelian Makanan: ";
    cin >> jumlah_makanan;

    switch (jenis_makanan) {
      case 1:
        total_bayar_makanan = HARGA_SOTO * jumlah_makanan;
        break;

      case 2:
        total_bayar_makanan = HARGA_SATE * jumlah_makanan;
        break;

      default:
        total_bayar_makanan = HARGA_AYAM_BAKAR * jumlah_makanan;
        break;
    }

  } else {
    cout << "Jenis Makanan TIdak Ditemukan dan Anda Tidak Memesan Makanan" << endl;
    total_bayar_makanan = 0;
  }

  cout << "\n";

  cout << "Daftar Menu Minuman" << endl;
  cout << "1. Jus Mangga   : Rp10.000" << endl;
  cout << "2. Es Teh       : Rp5.000" << endl;
  cout << "3. Kopi         : Rp7.000" << endl;

  cout << "Pilih Nomor Minuman Yang Dibeli: ";
  cin >> jenis_minuman;

  if (jenis_minuman >= 1 && jenis_minuman <= 3) {
    cout << "Masukkan Jumlah Pembelian Minuman: ";
    cin >> jumlah_minuman;

    switch (jenis_minuman) {
      case 1:
        total_bayar_minuman = HARGA_JUS_MANGGA * jumlah_minuman;
        break;

      case 2:
        total_bayar_minuman = HARGA_ES_TEH * jumlah_minuman;
        break;

      default:
        total_bayar_minuman = HARGA_KOPI * jumlah_minuman;
        break;
    }

  } else {
    cout << "Jenis Minuman TIdak Ditemukan dan Anda Tidak Memesan Minuman" << endl;
    total_bayar_minuman = 0;
  }

  cout << "\n";

  total_harga = total_bayar_makanan + total_bayar_minuman;

  if (total_harga == 0) {
    cout << "Anda Tidak Membeli Satu pun Makanan atau Minuman.";
    return 0;
  }

  cout << "Masukkan Jarak Antar (Km): ";
  cin >> jarak_antar;
  cout << "\n";

  if (jarak_antar < 5) {
    ongkir = 9500;

  } else if (jarak_antar >= 5 && jarak_antar <= 10) {
    ongkir = 12500;

  } else {
    ongkir = 15000;
  }

  if (total_harga >= 30000) {
    ongkir = ongkir - (ongkir * (10.0/100));

    cout << "------------------------------------" << endl;
    cout << "Selamat Anda Mendapat Diskon Ongkir!" << endl;
    cout << "------------------------------------" << endl;
    cout << "Total Harga                  Rp" << total_harga << endl;
    cout << "Total Ongkir                 Rp" << ongkir << endl;
    cout << "Diskon Ongkir                10%" << endl;
    cout << "Total Yang Harus Dibayar     Rp" << total_harga + ongkir << endl;

  } else {
    cout << "---------------------------------------" << endl;
    cout << "Maaf Anda Tidak Mendapat Diskon Ongkir!" << endl;
    cout << "---------------------------------------" << endl;
    cout << "Total Harga                  Rp" << total_harga << endl;
    cout << "Total Ongkir                 Rp" << ongkir << endl;
    cout << "Total Yang Harus Dibayar     Rp" << total_harga + ongkir << endl;
  }

  return 0;
}
