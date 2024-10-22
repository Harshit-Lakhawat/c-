#include <iostream>
#include <queue>               

using namespace std;                                               
int main(){
  
// max heap

  priority_queue<int> maxi;

// min heap

  priority_queue<int, vector<int>, greater<int>> mini;

  maxi.push(10);
  maxi.push(20);
  maxi.push(30);
  maxi.push(40);

  int n = maxi.size();
  for(int i = 0; i<n ; i++){
    cout << maxi.top() << " ";
    maxi.pop() ; 
  }cout << endl;

  mini.push(10);
  mini.push(20);
  mini.push(30);
  mini.push(40);

  int m = mini.size();
  for(int i = 0; i<m ; i++){
    cout << mini.top() << " ";
    mini.pop() ;
  }cout << endl;


}
