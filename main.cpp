#include<iostream>
#include"String.h"

using namespace std;

int main(){

  String str;
  cout<<str.length()<<endl;
  String str2(str);
  cout<<str2.max_size()<<endl;
  cout<<str2.length()<<endl;
  str2.clear();
  cout<<str2.length()<<endl;
  
}
