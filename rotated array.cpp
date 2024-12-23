#include <iostream>
#include <vector>

using namespace std;

void rotate(vector<int> &nums, int k) {

  vector<int> temp(nums.size());

  for (int i = 0; i < nums.size(); i++) {
    temp[(i + k) % nums.size()] = nums[i];    // because percentage helps us to limit its range from 1 to 9 
  }

  nums = temp;
}

int main() { 
  
  vector<int> nums = {1,2,3,4,5,6,7,8};
  int k = 3 ;
  rotate(nums, k);

  for (int i = 0; i < nums.size() ; i++){
    cout<<nums[i]<<" ";
  }
           
}
