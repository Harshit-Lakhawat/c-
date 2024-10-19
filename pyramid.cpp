
#include <iostream>
using namespace std;
int main(){
  int row;
 
  cout<<"no. of lines to print: ";
  cin>>row;
  for (int i=1; i<=row; i++){
    for (int j=i; j<=row; j++){
      cout<< " ";
    }
    for(int k=1; k<=2*i-1; k++){
      cout<<"*";
    }
    cout<< endl;
  }
 return 0;
}
