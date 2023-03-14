#include <iostream>
using namespace std;

void bubblesort(int arr[],int n){
  int i,j,tmp;
  for (i=0; i < n; i++){
    for (j= i + 1; j < n; j++){
      if(arr[i] < arr[j]){
        tmp = arr[i];
        arr[i] = arr[j];
        arr[j] = tmp;
      }
    }
  }
}

int main(){
  int array[100],n,i,j;
  cout << "masukan banyak elemen : ";
  cin >> n;
  cout << "masukan nilai : \n";
  for (i=0;i<n;i++){
    cin >> array[i];
  }
  bubblesort(array,n);
  cout << "hasil pengurutan dengan algoritma bubble : \n";
  for (i=0;i<n;i++){
    cout << array[i] << " ";
  }
  cout << "\n";
}