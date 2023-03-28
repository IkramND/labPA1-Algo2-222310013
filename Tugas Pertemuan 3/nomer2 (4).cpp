#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
const int N=100;
string buku[N]={"Api","Air","Angin","Tanah"};
int binarysearch(string x, int c, int d){
  if(d>=c){
    int mid = c+(d-c)/2;
    if(buku[mid]==x)
      return mid;
    if(buku[mid]>x)
      return binarysearch(x,c,mid-1);
      return binarysearch(x, mid+1,d);
  }
  return-1;
}
int main(){

  int n=4;
  
  cout << " Judul buku yang tersedia :" << endl;
  for(int i=0;i<4;i++){
    cout << buku[i] << endl;
  }
  sort(buku,buku+n);

  string x;
  cout << "Masukan judul buku yang ingin dicari : ";
  cin >> x;

  int hasil = binarysearch(x,0,n-1);
  if(hasil == -1)
    cout << "buku tidak ditemukan";
  else
    cout << "buku ditemukan pada rak ke - " << hasil << endl;
  return 0;
}