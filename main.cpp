#include<iostream>
#include"String.h"
int main(){
	
	char chaine[7]; //Tableau de caracteres de test
	chaine[0] = 'A';
	chaine[1] = 'B';
	chaine[2] = 'C';
	chaine[3] = '\0';

 	String test(chaine); //Test du constructeur depuis un c-string
	std::cout<<test.length()<<std::endl;
	std::cout<<test.capacity()<<std::endl;
	test.reserve(30); //Test de la methode reserve
	std::cout<<test.capacity()<<std::endl;


}
