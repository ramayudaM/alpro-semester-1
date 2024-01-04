#include <iostream>
using namespace std;
int main () { 
  // KAMUS
  int frek, i, X;
  int TabInt[10];
  // Algoritma
  // mengisi data nilai dari input user
  for (i=0; i<10; i++) {
    // cout << "Input Arr: "; 
    cin >> TabInt[i];
  }
  // cout << "Input X: "; 
  cin >> X; // Nilai yang dicari
  // menghitung frekuensi X
  cout << "Data input: ";
  frek = 0;
  for (i=0; i<10; i++) {
    if (TabInt[i]==X) {
      frek = frek + 1;
    }
  }
  cout << "Frekuensi " << X << " = " << frek << endl;
  return 0;
}