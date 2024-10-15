#include <iostream>

using namespace std;

int binarysearch(int arr[], int size, int key);

int main(){
  int even[6] = {2,4,6,8,10,18};
  int odd[5] = {1,3,5,7,11};

  int evenindex = binarysearch(even, 6, 4);
  cout << "index of 4 is " << evenindex <<endl;
  int oddindex = binarysearch(odd, 5, 11);
  cout << "index of 11 is " << oddindex <<endl;
  return 0;
}
int binarysearch(int arr[], int size, int key){
  int start = 0;
  int end = size-1;

  int mid =(start+end)/2 ;
  while(start<=end){
    if(arr[mid] == key){
      return mid;
    }
    if(key > arr[mid]){
      start = mid+1;
    }
    else{
      end= mid-1;
    }
    mid = (start+end)/2;
  }
  return -1;
}
