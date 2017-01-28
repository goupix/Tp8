#include"String.h"
#include<iostream>


//constructeur par défaut
String::String (){
  
  cap=0;
  chaine=new char[cap+1];
  length_=0;
  chaine[0]='\0';
}

// fonction length, renvoit la taille de la chaine de caractères
int String::length() const{

  return length_ ;     

}

//fonction capacity, renvoit la capacité du tableau
int String::capacity() const{

  return cap;
}

// fonction c_str, retourne le pointeur que pointe vers l'attribut
// chaine
char* String:: c_str() const{
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

// constructeur avec pour argument un tableau de caracteres

String::String(const char* s){

  int i=0;
  int c=1;
  while (c==1){
    if (s[i] == '\0'){
	  c=0;
	}
	i++;
  }
  length_=i-1;

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

String operator+ (const String& lhs,const char rhs){
  String add;
  add.length_=lhs.lenght()+1;
  add.cap=lhs.capacity()+1;
  add.chaine=new char[add.cap];
  for( int i=0; i<lhs.length_; i++){
    add.chaine[i]=lhs.chaine[i];
  }
  add.chaine[lhs.length_]=rhs;
  add.chaine[lhs.length_+1]='\0';
  
  

  return add;
}





