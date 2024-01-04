#include <iostream>
using namespace std;
int main () {
  // Kamus // mencari inde
  int IX, X, i; 
  int TabInt[10];
  bool found;
  
  for (int i=0; i<10; i++) {
    cin >> TabInt[i];
  }
  cin >> X; 
  i = 10; 
  found = false; 
  while ((i >= 0) && (!found)) {
    if (TabInt[i]==X) {
      found = true;
    } else {
      i--;
    }
  } 
  IX = i;
  cout << "Indeks terakhir " << X << " : " << IX << endl;
  return 0;
}


/*

Berikut adalah algoritma prosedural dari program yang Anda berikan:

```
DEKLARASI
    i, IX, X : integer
    TabInt : array [0..9] of integer
    found : boolean

ALGORITMA
    FOR i = 0 TO 9 DO
        READ(TabInt[i])
    END FOR
    
    READ(X)
    
    i <- 10
    found <- false
    WHILE (i >= 0) AND (NOT found) DO
        IF TabInt[i] = X THEN
            found <- true
        ELSE
            i <- i - 1
        END IF
    END WHILE
    
    IX <- i
    
    WRITE("Indeks terakhir ", X, " : ", IX)
```

Semoga membantu! Jangan ragu untuk bertanya jika Anda memerlukan bantuan lebih lanjut.

Source: Conversation with Bing, 11/1/2023
(1) 5+ Contoh Pseudocode Disertai Pengertian dan Fungsi - Pinhome. https://www.pinhome.id/blog/contoh-pseudocode/.
(2) Penulisan Algoritma Dalam Bentuk Pseudocode Dan Flowchart. https://kelasprogrammer.com/algoritma-pseudocode-dan-flowchart/.
(3) Pseudocode: Pengertian, Fungsi, Struktur dan Contoh. https://haloedukasi.com/pseudocode.
(4) Contoh Pseudocode, pengertian pseudocode sampai cara menulis pseudocode. https://www.siipung.com/2020/07/contoh-pseudocode.html.
(5) Apa Itu Bahasa Pemrograman Prosedural dan Contohnya? - Tirto.ID. https://tirto.id/apa-itu-bahasa-pemrograman-prosedural-dan-contohnya-gydW.
(6) Algoritma: Cara Kerja, Struktur, dan Cara Penyajiannya - detikcom. https://www.detik.com/edu/detikpedia/d-5764337/algoritma-cara-kerja-struktur-dan-cara-penyajiannya.
(7) Analisis Kemangkusan Algoritma Pengurutan Quicksort. https://informatika.stei.itb.ac.id/~rinaldi.munir/Matdis/2013-2014/Makalah2013/MakalahIF2120-2013-044.pdf.
(8) 21 Contoh Algoritma Dan Flowchart - Badoy Studio. https://badoystudio.com/contoh-algoritma-dan-flowchart/.
*/