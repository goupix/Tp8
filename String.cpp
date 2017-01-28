#include"String.h"
#include<iostream>
#include <stdio.h>


//constructeur par défaut
String::String (){
  
  cap=0;
  chaine=new char[cap+1];
  length_=0;
  chaine[0]='\0';
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
	  printf("La capacite donnée est trop grande\n");
	} 
	else {
	  char* newchaine = new char[n+1];
	  for (int i=0 ; i<=length_ ; i++){
	    newchaine[i] = chaine[i];
		chaine=newchaine;
		cap = n;
	  }
	}
  }
}

void String::resize(size_t n, char c){
  if (n > max_size_){
    printf("Erreur, la nouvelle taille donnee est trop grande");
  }
  if (n > length_){
    if (n < cap) {
	  for (int i=length_; i<n; i++){
	    chaine[i]=c;
		chaine[n]='\0';
		length_=n;
	  } 
	}
	else {
	  char* newtab=new char[n+1];
	  for (int i=0; i<length_;i++){
	    newtab[i]=chaine[i];
	  }
	  for (int i=length_; i<n; i++){
		  newtab[i]=c;
		  newtab[n]='\0';
		  chaine=newtab;
		  length_=n;
	  }
	}
  }

  else {
		chaine[n]='\0';
		length_=n;
  }
}

bool String::empty(){
	if (length_ == 0){
		return true;
	}
	else {
		return false;
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

  cap=sizeof(s)-2;
  chaine= new char[cap+1];
  for (int i=0 ; i<length_ ; i++) {
    chaine[i]=s[i];
	  
  }
  chaine[length_]='\0';

}

// constructeur par copie

String::String(const String& str){
  length_=str.length_;
  cap=str.cap;
  chaine= new char[cap+1];
  for(int i=0; i<length_; i++){
    chaine[i]=str.chaine[i];
  }

}

void String::clear(){
  chaine[0]='\0';
  length_=0;

}

String operator+ (const String& lhs, char rhs){
  String add;
  add.length_=lhs.length_+1;
  add.cap=lhs.cap+1;
  add.chaine=new char[add.cap];
  for( int i=0; i<lhs.length_; i++){
    add.chaine[i]=lhs.chaine[i];
  }
  add.chaine[lhs.length_]=rhs;
  add.chaine[lhs.length_+1]='\0';
  
  

  return add;
}





