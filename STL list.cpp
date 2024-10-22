#include <iostream>
#include <list>               

using namespace std;                                               
int main(){      

  list<int> l;

  l.push_back(1);
  l.push_front(2);

  for(int i : l){
    cout << i << " ";
    
  }cout << endl;

  l.push_back(3);
  l.push_front(4);

  for(int i : l){
    cout << i << " ";
  }cout << endl;

  l.pop_back();   // similarly we can do for front

  for(int i : l){
    cout << i << " ";
  }cout<<endl;

  l.push_front(10);
  l.push_back(11);

  cout << "front : " << l.front() << endl;
  cout << "back : " << l.back() << endl;
  cout << "empty or not : " << l.empty() << endl;
    
  cout << "size before erase : " << l.size() << endl;

  for(int i : l){
    cout<<i << " ";
  }cout<<endl;

  l.erase(l.begin());

  for(int i : l){
    cout<<i << " ";
  }cout<<endl;

  cout << "size after erase : " << l.size() << endl;
  
}


