#include <iostream>
#include <set>               

using namespace std;                                               
int main(){

  set<int> s;

  s.insert(5);
  s.insert(5);
  s.insert(1);
  s.insert(5);
  s.insert(1);
  s.insert(1);
  s.insert(6);
  s.insert(0);
  s.insert(0);
  s.insert(6);

  for(auto i : s){
    cout << i << endl ;
  }cout << endl ;             //output is 0 1 5 6
  
  set<int> :: iterator it = s.begin();
  it++ ;                      // for first element

  s.erase(it);

  for(auto i : s){
    cout << i <<endl ;
  }cout << endl ;

  cout << "5 is present or not : " << s.count(5) << endl ;

  cout << "1 is present or not : " << s.count(1) <<endl ;

}
