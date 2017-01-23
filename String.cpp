#include"String.h"
#include<iostream>



String::String (){
  
  cap=10;
  chaine=new char[cap];
  length_=5;
  chaine[5]='\0';
}

int String::length() const{

  return length_ ;     

}

int String::capacity() const{

  return cap;
}


char* String:: c_str() const{
  char* p=chaine;
  return p;

}


String::String( const char* s){

  cap=sizeof(s);
	chaine = s;
  
	int i = 0;
	int c = 1;
	while (c == 1){
		if (s[i] == '\0'){
			c = 0;
		}
		i++;
	}
	length_ = i-1;

}

String::String(const String& str){
  length_=str.length();
  cap=str.capacity();
  chaine=str.c_str();

}




