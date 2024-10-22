#include <iostream>
#include <queue>               

using namespace std;                                               
int main(){

  queue<int> q;

  q.push(1);
  q.push(2);
  q.push(3);
  q.push(4);

  cout << "size = " << q.size() << endl;
  
  q.pop();

  cout << "size = " << q.size() << endl;

  cout << "front = " << q.front() << endl;
    
  cout << "size of queue = " << q.size() << endl;

  cout << "empty or not = " << q.empty() << endl;

}
