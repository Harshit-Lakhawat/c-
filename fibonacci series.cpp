#include <ctime>
#include <iostream>
using namespace std;
int main(){
  int a=0;
  int b=1;
  int n=10;
  for(int i=1; i<=n; i++){
    int nextno=a+b;
    cout<<nextno<<endl;
    a=b;
    b=nextno;
  }
  
  return 0;
}
