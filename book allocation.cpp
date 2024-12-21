#include<iostream>
#include<vector>
using namespace std;

/*CORRECTED CODE :

#include <iostream>
#include <vector>
using namespace std;

bool ispossible(vector<int> arr, int n, int m, int mid) {
    int studentcount = 1;
    int pagesum = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > mid) {
            return false; // A single book exceeds the current `mid`, so it's not possible.
        }
        if (pagesum + arr[i] <= mid) {
            pagesum += arr[i];
        } else {
            studentcount++;
            if (studentcount > m) {
                return false;
            }
            pagesum = arr[i];
        }
    }
    return true;
}
*/
int allocationbooks(vector<int> arr, int n, int m) {
    int s = 0;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    int e = sum;

    int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e) {
        if (ispossible(arr, n, m, mid)) {
            ans = mid;
            e = mid - 1; 
        } else {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main() {
    vector<int> arr = {10, 20, 30, 40};
    int answer = allocationbooks(arr, arr.size(), 2);
    cout << "Minimum pages allocated: " << answer << endl;
    return 0;
}


bool ispossible(vector<int> arr,int n, int m,int mid){
  int studentcount = 1;
  int pagesum = 0;

  for(int i = 0 ; i<n ;i++){
    /*if(pagesum + arr[i] <= mid){
      pagesum += arr[i];
    }
    else{
      studentcount++ ;
      if (studentcount >= m || arr[i] > mid){
        return false ;
      }
      pagesum += arr[i];
    }
  }
  return true;*/
    if (arr[i] > mid) {
      return false; // A single book exceeds the current `mid`, so it's not possible.
    }
    if (pagesum + arr[i] <= mid) {
      pagesum += arr[i];
    } else {
      studentcount++;
      if (studentcount > m) {
          return false;
      }
      pagesum = arr[i];
    }
    }
    return true;
}

int allocationbooks(vector<int> arr,int n, int m){
  int s=0;
  int sum=0;
  for(int i = 0; i<n ; i++){
    sum += arr[i];
  }
  int e = sum;

  int mid = s + (e-s)/2;
  int ans = -1;
  while(s<e){
    
    if(ispossible(arr,n,m,mid)){
      ans = mid;
      e = mid- 1 ; 
    }
    else{
      s = mid + 1;
    }
    mid = s + (s-e)/2;
  }
  return ans;
}
  

  
int main(){
  vector<int> arr = {10,20,30,40};
  int answer = allocationbooks(arr,arr.size(),2);
  cout << " book allocated min :  " << answer << endl;
  return 0;
}

