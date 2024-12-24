#include<iostream>
using namespace std;

char tolowercase(char ch){
  if(ch>='a' && ch<='z'){
    return ch;
  }
  else{
    char temp=ch-'A'+'a';
    return temp;
  }
}

bool checkpalindrome(char a[], int n){
  int s = 0;
  int e = n-1;

  while(s<=e){
    if(tolowercase(a[s]) != tolowercase( a[e])){
      return 0;
    }
    else{
      s++;
      e--;
    }
  }
  return 1;
}

void reverse(char name[], int n){
  int s= 0;
  int e= n -1 ;

  while(s < e) {
    swap(name[s++], name[e--]);
  }
}

int getlength(char name[]){
  int count = 0;
  for(int i = 0 ; name[i] != '\0' ; i++ ){
    count++ ;
  }
  return count;
}

char getmaxoccuringchar(string s){
  int arr[26] = {0};

  for(int i = 0 ; i < s.length() ; i++ ){
    char ch =s[i];
    int number = 0 ;
    if(ch >= 'a' && ch <= 'z'){
      number = ch - 'a'; 
    }
    else{
      number = ch - 'A';
    }
    arr[number]++;
  }
  int maxi = -1  , ans = 0 ;
  for(int i = 0 ; i < 26 ; i++){
    if(maxi < arr[i]){
      ans = i;
      maxi = arr[i];
    }
  } 
  char finalans = 'a' + ans;
  return finalans;
}
int main(){
  /*char name[20];

  cout << "enter your name " << endl ;
  cin >> name ;
  cout << "your name is " ;
  cout << name << endl ;

  int len = getlength(name) ;
  cout << "length ; " << len << endl;

  reverse(name,len);
  cout << "your reverse name is " ;
  cout << name << endl ;

  cout << "palindrome or not " << checkpalindrome(name,len) << endl ;
  return 0;*/
  string s ;
  cout << "enter any string : " << endl; 
  cin >> s;
  cout << getmaxoccuringchar(s)  << endl ;
  return 0;
}
