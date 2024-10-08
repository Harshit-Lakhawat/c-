#include <iostream>
using namespace std;
void fun(string name, int money);

int main() {
  string name = "harshit";
  int money = 5198165;
  fun(name,money);
  return 0;
}
void fun(string name, int money){
  cout << "my name is "<< name <<"\n";
  cout << "amount i have "<< money <<"\n";
}
