#include <iostream>

using namespace std;

float luas_persegi_panjang(float panjang, float lebar) {
  return panjang * lebar;
}

float luas_trapesium(float alas_atas, float alas_bawah, float tinggi) {
  const float setengah = 0.5;
  return setengah * (alas_atas + alas_bawah) * tinggi;
}

float luas_lingkaran(float diameter) {
  const float phi = 3.14;
  const float jari_jari = diameter / 2;
  return phi * (jari_jari * jari_jari);
}

void batas() {
  cout << "=======================================================" << endl;
}

int main() {
  const int tarif_permeter = 5000;
  float p, l, a, b, t, d;
  float luas_halaman, luas_rumah, luas_kolam, luas_rumput;

  cout << "\n\n\n";
  
  batas();
  cout << "Selamat Datang di Program Menghitung Upah Potong Rumput" << endl;
  batas();

  cout << "\n";
  cout << "Hitung Luas Seluruh Halaman (Persegi Panjang)" << endl;
  cout << "Masukkan Panjang    : ";
  cin >> p;
  cout << "Masukkan Lebar      : ";
  cin >> l;
  luas_halaman = luas_persegi_panjang(p, l);
  cout << "Luas Seluruh Halaman adalah " << luas_halaman << endl;

  cout << "\n";
  cout << "Hitung Luas Rumah (Trapesium)" << endl;
  cout << "Masukkan Alas Atas   : ";
  cin >> a;
  cout << "Masukkan Alas Bawah  : ";
  cin >> b;
  cout << "Masukkan Tinggi      : ";
  cin >> t;
  luas_rumah = luas_trapesium(a, b, t);
  cout << "Luas Rumah adalah " << luas_rumah << endl;

  cout << "\n";
  cout << "Hitung Luas Kolam (Lingkaran)" << endl;
  cout << "Masukkan Diameter  : ";
  cin >> d;
  luas_kolam = luas_lingkaran(d);
  cout << "Luas Kolam adalah " << luas_kolam << endl;

  cout << "\n";
  batas();
  luas_rumput = luas_halaman - (luas_kolam + luas_rumah);
  cout << "Luas Halaman Rumput adalah " << luas_rumput << endl;
  cout << "Jadi upah yang dibayarkan adalah Rp." << luas_rumput * tarif_permeter << endl;
  batas();

  cout << "\n\n\n";

  return 0;
}
