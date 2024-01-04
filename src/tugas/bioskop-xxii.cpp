#include <iostream>

using namespace std;

int main() {
  // preparation
  string list_nama_film[15] = {"Inception", "The Dark Knight", "Interstellar", "The Shawshank Redemption", "The Godfather", "Spider-Man: Homecoming", "The Hunger Games", "Harry Potter and the Sorcerer's Stone", "Jurassic Park", "The Maze Runner", "Toy Story", "Frozen", "Moana", "Finding Nemo", "The Lion King"};

  int list_harga_film[15] = {50000, 55000, 50000, 50000, 55000, 45000, 40000, 40000, 45000, 35000, 40000, 35000, 40000, 30000, 35000};

  int usia_penonton, jumlah_tiket, nomor_film, harga_tiket, total_bayar, kelompok_usia;

  int no_urut = 0, film_tersedia = 0;

  // algoritma
  cout << "====================================" << endl;
  cout << "== Selamat Datang di Bioskop XXII ==" << endl;
  cout << "====================================" << endl;
  cout << "\n";

  string nama_film;

  cout << "Masukkan Usia Penonton Film (Tahun): ";
  cin >> usia_penonton;
  cout << "\n";

  if (usia_penonton >= 17) {
    //dewasa
    kelompok_usia = 3; 

  } else if (usia_penonton >= 13 && usia_penonton <= 16) {
    //remaja
    kelompok_usia = 2; 

  } else if (usia_penonton >= 0 && usia_penonton <= 12) {
    //anak-anak
    kelompok_usia = 1; 

  } else {
    cout << "Usia Penonton Tidak Valid";
    return 0;
  }

  cout << "--------------------------------" << endl;
  cout << "Daftar Film Yang Dapat Ditonton:" << endl;
  cout << "--------------------------------" << endl;

  switch (kelompok_usia) {
    case 3: //dewasa
      cout << "\n-----Rating Film Usia 17 Keatas-----" << endl;
      cout << ++no_urut << ". Inception                : Rp50.000" << endl;
      cout << ++no_urut << ". The Dark Knight          : Rp55.000" << endl;
      cout << ++no_urut << ". Interstellar             : Rp50.000" << endl;
      cout << ++no_urut << ". The Shawshank Redemption : Rp50.000" << endl;
      cout << ++no_urut << ". The Godfather            : Rp55.000" << endl;
      film_tersedia += 5;

    case 2: //remaja
      cout << "\n-----Rating Film Usia 13-16-----" << endl;
      cout << ++no_urut << ". Spider-Man: Homecoming                : Rp45.000" << endl;
      cout << ++no_urut << ". The Hunger Games                      : Rp40.000" << endl;
      cout << ++no_urut << ". Harry Potter and the Sorcerer's Stone : Rp40.000" << endl;
      cout << ++no_urut << ". Jurassic Park                         : Rp45.000" << endl;
      cout << ++no_urut << ". The Maze Runner                       : Rp35.000" << endl;
      film_tersedia += 5;

    default:
      //anak-anak
      cout << "\n-----Rating Film Usia 0-12-----" << endl;
      cout << ++no_urut << ". Toy Story      : Rp40.000" << endl;
      cout << ++no_urut << ". Frozen         : Rp35.000" << endl;
      cout << ++no_urut << ". Moana          : Rp40.000" << endl;
      cout << ++no_urut << ". Finding Nemo   : Rp30.000" << endl;
      cout << ++no_urut << ". The Lion King  : Rp35.000" << endl;
      film_tersedia += 5;
      break;
  }
  
  cout << "\nMasukkan Nomor Tiket Film Yang Ingin Dibeli: ";
  cin >> nomor_film;

  if (nomor_film < 1 || nomor_film > film_tersedia) {
    cout << "\n-----------------------------------------------------------------------------" << endl;
    cout << "Nama Film Tidak Ditemukan dan Anda Dianggap Tidak Memesan Tiket Menonton Film";
    cout << "\n-----------------------------------------------------------------------------" << endl;

    return 0;
  }

  switch (film_tersedia) {
    case 10:
      //remaja
      nomor_film += 5;
      break;
    
    case 5:
      //anak-anak
      nomor_film += 10;
      break;
  }

  nama_film = list_nama_film[nomor_film - 1];
  harga_tiket = list_harga_film[nomor_film - 1];

  cout << "Masukkan Jumlah Tiket Yang Dipesan: ";
  cin >> jumlah_tiket;

  total_bayar = harga_tiket * jumlah_tiket;

  cout << "\n---------------------------------------" << endl;
  cout << "Data Pembelian Tiket Film:" << endl;
  cout << "---------------------------------------" << endl;
  cout << "Nama Film                    " << nama_film << endl;
  cout << "Harga Satu Tiket             Rp" << harga_tiket << endl;
  cout << "Jumlah Tiket Dipesan         " << jumlah_tiket << endl;
  cout << "Total Yang Harus Dibayar     Rp" << total_bayar << endl;

  return 0;
}