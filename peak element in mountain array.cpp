#include<iostream>
#include<vector>
using namespace std;


  /*int peakindexinmountainarray(vector<int>& arr){
    int s = 0;
    int  e = arr.size() - 1;

    int mid = s + (e-s)/2;

    while(s<e){
      if(arr[mid] < arr[mid+1]){
        s = mid + 1;
      }
      else{
        e = mid;
      }
      mid = s + (e-s)/2;

    }
    return s;

  }*/
int peakindexinmountainarray(vector<int>& arr){
  int s = 0;
  int  e = arr.size() - 1;

  int mid = s + (e-s)/2;

  while(s < e){
    if(arr[mid] > arr[mid+1] && arr[mid] > arr[mid-1]){ // Check both neighbors
      return mid; // Found the peak, return the index
    }
    else if(arr[mid] < arr[mid+1]){
      s = mid + 1;
    }
    else{
      e = mid;
    }
    mid = s + (e-s)/2; // Recalculate mid AFTER updating s or e

  }
  return s; // If the loop ends without finding a peak, return s (which will be the index of the last element)

}
int main(){
  vector<int> arr = {1,2,3,4,5,6,4,3,2,1,0};
  int peakindex = peakindexinmountainarray(arr);
  cout << "peak index is " << peakindex << endl;
  return 0;
}


//corrected code :


/*#include<iostream>
#include<vector>
using namespace std;

int peakindexinmountainarray(vector<int>&arr){
    int s = 0;
    int  e = arr.size() - 1;

    int mid = s + (e-s)/2;

    while(s < e){
      if(arr[mid] > arr[mid+1] && arr[mid] > arr[mid-1]){ // Check both neighbors
        return mid; // Found the peak, return the index
      }
      else if(arr[mid] < arr[mid+1]){
        s = mid + 1;
      }
      else{
        e = mid;
      }
      mid = s + (e-s)/2;

    }
    return s; // If the loop ends without finding a peak, return s (which will be the index of the last element)

  }
int main(){
  vector<int> arr = {1,2,3,4,5,6,4,3,2,1,0};
  int peakindex = peakindexinmountainarray(arr);
  cout << "peak index is " << peakindex << endl;
  return 0;
}*/
