#include <iostream>
using namespace std;
int main ()
{ // KAMUS
int i, idxmin;
  int TabInt[10] = {10, 12, 13, 15, 17, 18, 19, 2, 4, 5};

// ALGORITMA  
// data nilai telah terisi
// mencari nilai minimum
idxmin=0; //inisialisasi idxmin dgn 0
for (i=0; i<10; i++) {
if (TabInt[i]<TabInt[idxmin]) {
idxmin=i;
}
}
cout << "Indeks nilai minimum: " << idxmin << endl;
return 0;
}