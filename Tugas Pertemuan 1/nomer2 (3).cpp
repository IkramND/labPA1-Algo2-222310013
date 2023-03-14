#include <iostream>
#include <string>
using namespace std;

int main(){
  int x;
  cout << "masukan jumlah buku : ";
  cin >> x;
  string buku[x];
  for(int y = 0; y < x; y++){
    cout << "masukka jumlah buku ke " << y + 1 << " = ";
    cin >> buku[y];
  }
  
   for(int z = 1; z < x; z++){
     string key = buku[z];
     int q = z - 1;
     while (q >= 0 && key < buku[q]){
       buku [q + 1] = buku[q];
       q--;
     }
     buku[q + 1] = key;
   }
  cout << "\ndata buku yang telah diurutkan =\n";
  for(int w = 0; w < x; w++){
    cout << w + 1 << ". " << buku[w] << endl;
  }
  return 0;
}