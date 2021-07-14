#include <iostream>

using namespace std;
int main(){
  int n, i;

  cout << "Masukkan jumlah baris : ";

  cin >> n;

  for(i = 1 ; i <= n; i++){
  
    for(int j = 1; j  <=i ; j++){

      cout << "*";
    }
    // akhir
    cout << "\n";
  }
  for(i = 1 ; i <= n; i++){
  
    for(int j = i; j <= n; j++){
      cout << "*";
    }
    // akhir
    cout << "\n";
  }
  
  return 0;
}