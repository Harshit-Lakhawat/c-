#include <iostream>
#include <map>               

using namespace std;                                               
int main(){

  map<int,string> m;

  m[1] = " harshit ";
  m[4] = " lakhawat ";
  m[2] = " abcde ";

  m.insert( {5," qwerty "} );

  cout << "before erase " << endl ;
  for(auto i : m){
    cout << i.first << " " << i.second << endl ;
  }cout << endl ;

  cout << "finding 1 " << m.count(1) << endl ;
  cout << "finding 3 " << m.count(3) << endl ;
  
  m.erase(2);
  cout << "after erase " << endl;
  cout << endl ;
  for(auto i : m){
    cout << i.first << " " << i.second << endl ;
  }cout << endl ;

  auto it = m.find(4);    

  for(auto i = it; i !=m.end() ; i++){
    cout << (*i).first << (*i).second << endl ;
  }
}

