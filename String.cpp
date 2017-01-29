#ifndef Stringh
#define Stringh




#include"String.h"
#include <stdio.h>

// ##### constructeurs #####

//constructeur par défaut
String::String (){
  cap=0;
  chaine=new char[cap+1];
  length_=0;
  chaine[0]='\0';
}


String::String( const char* s){ //Constructeur depuis un c-string
  if (sizeof(s) > max_size_){
    printf("Erreur, le tableau est trop grand");
  }
  else {
    int i = 0;
	int c = 1;
	while (c == 1){
	  if (s[i] == '\0'){
		c = 0;
	  }
	  i++;
	}
	length_ = i-1;

	cap=length_+10;
	if (cap > max_size_){
	  cap=length_;
	}
	chaine= new char[cap+1];
	for (int i=0 ; i<length_ ; i++) {
	  chaine[i]=s[i];
			
	}
	  chaine[length_]='\0';
  }

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

//#### destructeur #####


String::~String(){
  delete[] chaine;
  chaine=NULL;
}







// ##### getters #####


// fonction length, renvoit la taille de la chaine de caractères
int String::length() const{

  return length_;     

}

//fonction capacity, renvoit la capacité du tableau
int String::capacity() const{

  return cap;
}

// c_str renvoit l'attribut chaine
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





// ##### méthodes #####

// accroit la capacite de la chaine
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

// redimensionne la String

void String::resize(size_t n, char c){
  if (n > max_size_){
    printf("Erreur, la nouvelle taille donnée est trop grande");
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


// renvoit True ou False selon que la String est vide ou non
bool String::empty(){
  if (length_ == 0){
    return true;
	}
  else {
    return false;
	}
}


//efface la chaine
void String::clear(){
  chaine[0]='\0';
  length_=0;

}




//##### opérateurs #####		

String operator+ (const String& lhs, char rhs){
  String add;
  add.length_=lhs.length_+1;
  add.cap=lhs.cap+1;

  if(lhs.cap+1>lhs.max_size_){
    printf("Erreur, la nouvelle taille donnée est trop grande!!\n");
    
    return lhs;
  }
  else{
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
}

String operator+ (const String& lhs, const String& rhs){
  String add;
  add.length_=lhs.length_+rhs.length_;
  add.cap=lhs.cap+rhs.cap;
  if (add.cap > lhs.max_size_){
	printf("Erreur, la taille de la nouvelle chaine est trop grande\n");
    return lhs;
	}
  else {
	add.chaine=new char[add.cap];
	for(int i=0; i<lhs.length_; i++){
	  add.chaine[i]=lhs.chaine[i];
	}
	for(int i=lhs.length_; i<=add.length_; i++){
	  add.chaine[i]=rhs.chaine[i-lhs.length_];
	}
  }
  
  return add;
}

String operator+ (const String& lhs, const char* rhs){
  String add;
  String add2(rhs);
  add.length_=lhs.length_+add2.length_;
  add.cap=lhs.cap+add2.cap;


  if (add.cap > lhs.max_size_){
	printf("Erreur, la taille de la nouvelle chaine est trop grande\n");
    return lhs;
	}

  else {

    add.chaine=new char[add.cap];
	for(int i=0; i<lhs.length_; i++){
	  add.chaine[i]=lhs.chaine[i];
	}
	for(int i=lhs.length_; i<=add.length_; i++){
	  add.chaine[i]=rhs[i-lhs.length_];
	}
 
  
  return add;
  }
}

String& String:: operator= (const String& str){
  length_=str.length_;
  cap=str.cap;
  for(int i=0; i<cap; i++){
    chaine[i]=str.chaine[i];
  }
  chaine[length_]='\0';
  return *this;

}

String& String:: operator= (char c){
  length_=length_+1;
  cap=cap+1;
  chaine[0]=c;
  chaine[1]='\0';

  return *this;

}

String& String::operator= (const char* s){
  String result(s);
  if ( result.cap> max_size_){
    printf("La taille du tableau est trop grande!\n");
    return *this;
  }
  else{
    length_=result.length_;
    cap=result.cap;
    for(int i=0; i<cap;i++){
      chaine[i]=result.chaine[i];
    }
    chaine[length_]='\0';
    return *this;
  }
}



#endif 
