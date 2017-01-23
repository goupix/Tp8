#include"String.h"
#include<iostream>



String::String (){
  
  cap=10;
  chaine=new char[cap];
  length_=5;
 
  

}

int String::length(){
  std::cout<<length_<<std::endl;

  return length_ ;     

}

int String::capacity(){

  return cap;
}

String::String( const char* s){

  cap=sizeof(s);


}




