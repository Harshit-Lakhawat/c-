#include <iostream>
using namespace std;

void selectionsort(int arr[], int n){

  for(int i=0; i<n-1; i++){
    int minindex = i;
    for(int j=i+1; j<n; j++){
      if(arr[j] < arr[minindex]){
        minindex = j;
      }
    }
    swap(arr[minindex], arr[i]);
  }
}

int main(){
  int arr[5] = {5,4,3,2,1};
  int a[5];
  selectionsort(arr, 5);
  for (int i = 0; i < 5; i++) {
      a[i] = arr[i];
      cout << a[i] << " ";
    }
    cout << endl;
}

