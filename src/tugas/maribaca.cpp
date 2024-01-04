#include <iostream>

using namespace std;

int main() {
  // preparation
  int total_belanja, total_bayar, uang_kembali, jumlah_uang;
  string diskon;

  // algoritma
  cout << "==========================================" << endl;
  cout << "== Selamat Datang di Toko Buku Omar ==" << endl;
  cout << "==========================================" << endl;

  cout << "Masukkan Total Belanja Buku (Rp): ";
  cin >> total_belanja;

  if (total_belanja > 250000) {
    total_bayar = total_belanja - (total_belanja * (12.0/100));
    diskon = "12%";

  } else if (total_belanja >= 150000 && total_belanja <= 250000) {
    total_bayar = total_belanja - (total_belanja * (10.0/100));
    diskon = "10%";

  } else if (total_belanja >= 100000) {
    total_bayar = total_belanja  - (total_belanja * (7.0/100));
    diskon = "7%";

  } else {
    total_bayar = total_belanja;
  }

  cout << "Masukkan Jumlah Uang Yang Dibayarkan (Rp): ";
  cin >> jumlah_uang;
  cout << "\n";

  if (jumlah_uang < total_bayar) {
    cout << "-------------------------------------------" << endl;
    cout << "Jumlah Uang Tidak Cukup Untuk Membayar Buku" << endl;
    cout << "-------------------------------------------" << endl;
    return 0;
  }

  uang_kembali = jumlah_uang - total_bayar;
  
  if (total_belanja == total_bayar) {
    cout << "--------------------------------" << endl;
    cout << "Maaf Anda Tidak Mendapat Diskon!" << endl;
    cout << "--------------------------------" << endl;
    cout << "Total Yang Dibayar     Rp" << total_bayar << endl;
    cout << "Uang Diberikan         Rp" << jumlah_uang << endl;
    cout << "Uang Kembali           Rp" << uang_kembali << endl;

  } else {
    cout << "-----------------------------" << endl;
    cout << "Selamat Anda Mendapat Diskon!" << endl;
    cout << "-----------------------------" << endl;
    cout << "Total Belanja          Rp" << total_belanja << endl;
    cout << "Mendapat Diskon        " << diskon << endl;
    cout << "Total Yang Dibayar     Rp" << total_bayar << endl;
    cout << "Uang Diberikan         Rp" << jumlah_uang << endl;
    cout << "Uang Kembali           Rp" << uang_kembali << endl;
  }

  return 0;
}
