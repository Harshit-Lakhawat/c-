#include <iostream>

using namespace std;
int main(){
  string cars[][3]={{"mustang","escape","F-150"},
                  {"corvette","equinox","silverado"},
                  {"challenger","durango","raptor"}};

  int rows= sizeof(cars)/sizeof(cars[0]);
  int columns= sizeof(cars[0])/sizeof(cars[0][0]);

  for(int i=0; i<rows; i++){
    for(int j=0; j<columns; j++){
      cout << cars[i][j] << " ";
      
    }
    cout << '\n';
    
  }
  return 0;
  
}
