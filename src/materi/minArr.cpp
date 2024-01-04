#include <iostream>

using namespace std;

int main() {
  int i, min;
  int TabInt[10] = {10, 12, 13, 15, 17, 18, 19, 2, 4, 5};
  
  min=TabInt[0]; 
  for (i=0; i<10; i++) {
    if (TabInt[i]<min) {
      min=TabInt[i];
   }
  }
  cout << "Nilai minimum: " << min << endl;
  return 0;
}
