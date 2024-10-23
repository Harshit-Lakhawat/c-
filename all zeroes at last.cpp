#include <iostream>
#include <vector>               

using namespace std; 

void movezeroes(int arr[] , int nums ){

  int nonzero = 0 ;

  for(int i = 0 ; i < nums ; i++){
    if(arr[i] != 0){
    
      swap(arr[i] , arr[nonzero]) ;
       nonzero++ ;
    }
  }
}

int main(){

  int nums[5] = {0,1,0,3,12};
  movezeroes(nums , 5);
  for(int i = 0 ; i < 5 ; i++){
    cout << nums[i] << " " ;
  }
  
}
