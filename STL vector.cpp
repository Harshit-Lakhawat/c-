#include <iostream>
#include <vector>               // using STL vector

using namespace std;            // capacity gives space                                       assign for element
int main(){                     // size gives no. of                                          elements

   vector<int> v;

  cout  << "capacity = " << v.capacity()<<endl; 

  v.push_back(1);
  cout  << "SIZE = " << v.size()<< endl;
  cout  << "capacity = " << v.capacity()<<endl;

  v.push_back(2);
  cout  << "SIZE = " << v.size()<<endl;
  cout  << "capacity = " << v.capacity()<<endl;

  v.push_back(3);
  cout  << "SIZE = " << v.size()<<endl; 
  cout  << "capacity = " << v.capacity()<<endl;
  
  v.push_back(4);
  cout  << "SIZE = " << v.size()<<endl; 
  cout  << "capacity = " << v.capacity()<<endl;

  v.push_back(5);
  cout  << "SIZE = " << v.size()<<endl; 
  cout  << "capacity = " << v.capacity()<<endl;

  cout  << "element at 3 index = " << v.at(3)<<endl; 
  cout  << "Front = " << v.front()<<endl;
  cout << "back = "<< v.back() << endl;

  cout << "befeore pop : " <<endl;
  for(int i : v){
    cout<<i << " ";
    
  }cout<<endl;

  v.pop_back();
  
  cout << "aftre pop : " <<endl;
  for(int i : v){
    cout<<i << " ";

  }cout<<endl;

  v.pop_back();
  cout << "after pop : " <<endl;
  for(int i : v){
    cout<<i << " ";

  }cout<<endl;

  cout << "capacity before clear : " << v.capacity()<<endl;
  cout << "size befoer clear : "<< v.size() << endl;
  
  v.clear();

  cout << "capacity after clear : " << v.capacity() <<endl;
  cout << "size aftre clear : " << v.size() << endl;
}


