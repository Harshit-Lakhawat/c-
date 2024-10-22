#include <iostream>
#include <stack>               

using namespace std;                                               
int main(){

  stack<int> s;

  s.push(1);
  s.push(2);
  s.push(3);
  s.push(4);

  cout << "top element = " << s.top() << endl;

  s.pop();

  cout << "top element = " << s.top() << endl;

  cout << "size of stack = " << s.size() << endl;

  cout << "empty or not = " << s.empty() << endl;

}
