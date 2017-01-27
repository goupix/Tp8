#include"String.h"
#include<iostream>



String::String (){
  
  cap=10;
  chaine=new char[cap];
  length_=5;
  chaine[5]='\0';
}

int String::length() const{

  return length_;     

}

int String::capacity() const{

  return cap;
}


char* String::c_str() const{
  char* p=chaine;
  return p;

}

int String::size() const{
  return length_;
}

void String::reserve(size_t n){
	if (n>length_){
		if (n>100){
			printf("La capacite donne est trop grande\n");
		} else {
				char* newchaine = new char[n+1];
				for (int i=0 ; i<=length_ ; i++){
					newchaine[i] = chaine[i];
				chaine=newchaine;
				cap = n;
				}
			}
	}
}





String::String( const char* s){ //Constructeur depuis un c-string
	int i = 0;
	int c = 1;
	while (c == 1){
		if (s[i] == '\0'){
			c = 0;
		}
		i++;
	}
	length_ = i-1;

  cap=sizeof(s);
	chaine = new char[cap+1];
		for (i=0 ; i<length_ ; i++) {
			chaine[i] = s[i];

		}
  
}

String::String(const String& str){
  length_=str.length();
  cap=str.capacity();
  chaine=str.c_str();

}




