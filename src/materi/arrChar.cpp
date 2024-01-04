#include <iostream>
using namespace std;

int main () {
  int i, countA;
  char TabChar[10];
 
  for (i=0; i<10; i++) {
    cin >> TabChar[i];
  }
  
  countA = 0;       
  for (i=0; i<10; i++) {
    cout << TabChar[i] << endl;
    if (TabChar[i] == 'A') {
      countA++; 
    }
  }
  cout << "Banyaknya A: " << countA << endl;
  return 0;
}   