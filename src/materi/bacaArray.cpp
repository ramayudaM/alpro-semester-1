#include <iostream>
using namespace std;
int main () { // KAMUS
  int i, sum, Neff, X;
  int TI[100];
  // ALGORITMA
  // mengisi data nilai dari input user
  cin >> X; 
  i = 0;
  while ((X != -999) && (i < 100)) {
    TI[i] = X;
    cin >> X;
    i++;
  } // X = -999 atau i = 100
  Neff = i;
  // menghitung total isi array
  i = 0; 
  sum = 0;
  while (i < Neff) {
    sum = sum + TI[i];
    i++;
  } // i = Neff
  cout << "Banyaknya elemen = " << Neff << endl;
  cout << "Jumlah total elemen = " << sum << endl;
  return 0;
}