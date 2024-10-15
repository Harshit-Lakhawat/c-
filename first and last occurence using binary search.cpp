#include<iostream>
using namespace std;

int firstocc(int arr[], int n, int key);
int lastocc(int arr[], int n, int key);

int main(){
  int odd[13] = {1,2,3,3,3,3,3,3,3,3,3,3,5};

  cout << "First Occurrence of 3 is : " << firstocc(odd , 13 ,3) <<endl;

   cout << "last Occurrence of 3 is : " << lastocc(odd , 13 ,3) <<endl;
  
}

int firstocc(int arr[], int n, int key){

  int s = 0, e = n-1;
  int mid = s + (e-s)/2;
  int ans = -1;
  while(s<=e){
    if(arr[mid] == key){
      ans = mid;
      e = mid - 1;
    }
    else if(key > arr[mid]){
      s = mid + 1;
    }
    else if(key < arr[mid]){
      e = mid -1;
    }
    mid = s + (e-s)/2;
  }
  return ans;
}

int lastocc(int arr[], int n, int key){

  int s = 0, e = n-1;
  int mid = s + (e-s)/2;
  int ans = -1;
  while(s<=e){
    if(arr[mid] == key){
      ans = mid;
      s = mid + 1;
    }
    else if(key > arr[mid]){
      s = mid + 1;
    }
    else if(key < arr[mid]){
      e = mid -1;
    }
    mid = s + (e-s)/2;
  }
  return ans;
}
