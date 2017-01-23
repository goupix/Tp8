#include"String.h"
#include<iostream>



String::String (){
  
  cap=10;
  chaine=new char[cap];
  length_=5;
 
  

}

int String::length(){

  return length_ ;     

}

int String::capacity(){

  return cap;
}

String::String(const char* s){

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




