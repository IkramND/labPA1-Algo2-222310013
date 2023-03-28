#include <iostream>
using namespace std;

int main(){

    const int n=100;
    int x;
    int data[n];
    int cari;
    bool ketemu = false;
    int i;
    cout << "Masukan banyak nilai : ";
    cin >> x;
    cout << endl;
    for(int i=0;i<x;i++){
      cout << "Masukan nilai ke - " << i << " : ";
      cin >> data[i];
      cout << endl;
    };

    cout << "Masukan bilangan yang ingin dicari : ";
    cin >> cari;
    for (i = 0; i < n; i++){
        if(data[i] == cari){
            ketemu = true;
            break;
        }
    }

    if (ketemu){
        cout << "Bilangan "<< cari << " ditemukan pada indeks ke " << i << endl;
    } else {
        cout << "Bilangan "<< cari << " tidak dapat ditemukan pada data." << endl;
    }
    
    return 0;
}