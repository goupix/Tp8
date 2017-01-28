#include<iostream>
#include"String.h"

using namespace std;

int main(){
  //test du constructeur par copie
  String str;
  cout<<str.length()<<endl;
  String str2(str);
  cout<<str2.max_size()<<endl;
  cout<<str2.length()<<endl;

  //test du la fonction clear
  str2.clear();
  cout<<str2.length()<<endl;

  //test de l'operateur +
  
  char tab[3];
  tab[0]='r';
  tab[1]='i';
  tab[2]='t';
  String str3 (tab);
  String str4=str3+'a'; 
  cout<<str3.length()<<endl;
  
}
