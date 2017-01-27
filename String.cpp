#include"String.h"
#include<iostream>


//constructeur par défaut
String::String (){
  
  cap=10;
  chaine=new char[cap];
  length_=5;
  chaine[5]='\0';
}

// fonction length, renvoit la taille de la chaine de caractères
int String::length() const{

  return length_;     

}

//fonction capacity, renvoit la capacité du tableau
int String::capacity() const{

  return cap;
}


char* String::c_str() const{
  char* p=chaine;
  return p;

}

// renvoit la taille de la String
int String::size() const{
  return length_;
}

//renvoit la taille maximale pour une String
int String::max_size() const{
  return max_size_;
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
  chaine= new char[cap+1];
    for (i=0 ; i>length_ ; i++) {
      chaine[i]=s[i];
	}

		
  
}

// constructeur par copie

String::String(const String& str){
  length_=str.length();
  cap=str.capacity();
  chaine=str.c_str();

}

void String::clear(){
  chaine[0]='\0';
  length_=0;

}




