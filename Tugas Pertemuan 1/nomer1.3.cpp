#include <iostream>
using namespace std;

void selectionsort(int arr[], int n){
  int i,j, minindex, temp;
  for (i = 0; i < n-1; i++){
    minindex = i;
    for (j = i + 1; j < n; j++){
      if(arr[j] > arr[minindex]){
        minindex = j;
      }
    }
    temp = arr[i];
    arr[i] = arr[minindex];
    arr [minindex] = temp;
    cout << "iterasi ke- " << i+1 << " :";
    for(int k = 0; k < n; k++){
      cout << arr[k] << " ";
    }
    cout << endl;
  }
}
int main(){
  int n,i;
  cout << "masukan jumlah elemen : ";
  cin >> n;
  int arr[n];
  cout << "masukan nilai elemen : " << endl;
  for (i = 0;i < n; i++){
    cin >> arr[i];
  }
  cout << "data sebelum sorting : ";
  for (i = 0; i < n; i++){
    cout << arr[i] << " ";
  }
  cout << endl;
  selectionsort(arr,n);
  cout << "data setelah sorting : ";
  for(i = 0; i < n; i++){
    cout << arr[i] << " ";
  }
  return 0;
  }