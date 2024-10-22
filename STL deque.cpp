#include <iostream>
#include <deque>               

using namespace std;                                               
int main(){      

  deque<int> d;

  d.push_back(1);
  d.push_front(2);

  for(int i : d){
    cout << i << " ";
    
  }cout << endl;

  d.push_back(3);
  d.push_front(4);

  for(int i : d){
    cout << i << " ";
  }cout << endl;

  d.pop_back();   // similarly we can do for front

  for(int i : d){
    cout << i << " ";
  }cout<<endl;

  d.push_front(10);
  d.push_back(11);

  cout << "element at index 4 : " << d.at(4) << endl;
  cout << "front : " << d.front() << endl;
  cout << "back : " << d.back() << endl;
  cout << "empty or not : " << d.empty() << endl;
    
  cout << "size before erase : " << d.size() << endl;

  for(int i : d){
    cout<<i << " ";
  }cout<<endl;

  d.erase(d.begin(), d.begin()+2);

  for(int i : d){
    cout<<i << " ";
  }cout<<endl;
  
}


