#include<iostream>
#include"String.h"
#include <stdio.h>

using namespace std;

int main(){
	
	char chaine[7]; //Tableau de caracteres de test
	chaine[0] = 'A';
	chaine[1] = 'B';
	chaine[2] = 'C';
	chaine[3] = '\0';

 	String test(chaine); //Test du constructeur depuis un c-string
 	printf("test c_str : %c\n", test.c_str()[2]);
 	printf("########## Test du constructeur depuis un c-string ##########\n");
 	printf("length : %d\n", test.length());
 	printf("length : %d\n", test.capacity());
 	
 	
 	
	test.reserve(30); //Test de la methode reserve
	printf("Test de la methode reserve : %d\n", test.capacity());
	
	
	//test.resize(20,'t');
	//printf("chaine : %c\n",test.c_str()[2]);

	String str;
  	cout<<str.length()<<endl;
  	String str2(str);
  	cout<<str2.max_size()<<endl;
  	cout<<str2.length()<<endl;
  	str2.clear();
  	cout<<str2.length()<<endl;
}
