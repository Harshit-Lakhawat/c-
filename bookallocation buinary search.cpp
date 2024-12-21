#include<iostream>
using namespace std;

/*CORRECTED :
#include <iostream>
using namespace std;

bool ispossible(int arr[], int n, int m, int mid) {
    int studentcount = 1; // Start with one student
    int pagesum = 0; // Sum of pages for the current student

    for (int i = 0; i < n; i++) {
        // If adding this book exceeds mid, allocate to the next student
        if (pagesum + arr[i] > mid) {
            studentcount++; // Increment student count
            pagesum = arr[i]; // Start new sum with current book

            // If the number of students exceeds m or the current book exceeds mid
            if (studentcount > m || arr[i] > mid) {
                return false; // Not possible to allocate
            }
        } else {
            pagesum += arr[i]; // Add pages to current student
        }
    }
    return true; // Allocation is possible
}

int allocatebooks(int arr[], int n, int m) {
    // Check if number of students is greater than number of books
    if (m > n) {
        return -1; // Not possible to allocate
    }

    int s = 0; // Start of the search range
    int sum = 0; // Total pages

    for (int i = 0; i < n; i++) {
        sum += arr[i]; // Calculate total pages
    }
    int e = sum; // End of the search range
    int ans = -1; // To store the answer

    while (s <= e) {
        int mid = s + (e - s) / 2; // Midpoint

        if (ispossible(arr, n, m, mid)) {
            ans = mid; // Update answer
            e = mid - 1; // Try for a smaller maximum
        } else {
            s = mid + 1; // Increase the minimum limit
        }
    }
    return ans; 
} 

int main() {
    int arr[4] = {10, 20, 30, 40}; // Array of books
    int n = 4; // Number of books
    int m = 2; // Number of students
    int ans = allocatebooks(arr, n, m); // Allocate books
    cout << "answer is : " << ans << endl; // Output the result
}*/

bool ispossible(int arr[], int n, int m, int mid){
  int studentcount = 1;
  int pagesum = 0;


  for(int i =0 ; i<n; i++){
    if( pagesum + arr[i] == mid){
      pagesum += arr[i];
    }
    else{
      studentcount++;
      if( studentcount > m || arr[i] > mid){
        return false;
      }
      pagesum = arr[i];
    }
  }
  return true;
}

int allocatebooks(int arr[], int n, int m){
  int s = 0;
  int sum = 0;

  for(int i = 0; i<n; i++){
    sum =sum+arr[i];
  }
  int e = sum;
  int ans = -1;
  int mid = s+(e-s)/2;

  while(s<=e){
    if(ispossible(arr, n, m, mid)){
      ans = mid;
      e = mid - 1;
    }
    else{
      s = mid + 1;
    }
    mid = s+(e-s)/2;

  }
  return ans; 
} 

int main(){
  int arr[4] = {10,20,30,40};
  int n = 4;
  int m = 2;
  int ans = allocatebooks(arr, n, m);
  cout<<"answer is : "<< ans <<endl;
}
