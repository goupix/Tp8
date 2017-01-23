#include"String.h"
#include<iostream>



String::String (){
  
  cap=10;
  chaine=new char[cap];
  length_=5;
  chaine[5]='\0';
}


int String::length() const {
  std::cout<<length_<<std::endl;

  return length_ ;     

}

int String::capacity() const{

  return cap;

}


char* String:: c_str() const{
  char* p=chaine;
  return p;

}
int String::size() const{
  return lenght_;
}

String::String( const char* s){

  cap=sizeof(s);


}

String::String(const String& str){
  length_=str.length();
  cap=str.capacity();
  chaine=str.c_str();

}




