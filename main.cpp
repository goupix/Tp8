#include<iostream>
#include"String.h"
#include<stdio.h>

using namespace std;

int main(){

 
	
  char chaine[7]; //Tableau de caracteres pour le test
  chaine[0] = 'A';
  chaine[1] = 'B';
  chaine[2] = 'C';
  chaine[3] = '\0';

  String test(chaine); //Test du constructeur depuis un c-string
  std::cout<<test.length()<<std::endl;
  std::cout<<test.capacity()<<std::endl;
  test.reserve(30); //Test de la methode reserve
  std::cout<<test.c_str()[2]<<std::endl;
  
  
  //test du constructeur par copie
  printf("########## Test du constructeur par copie ########\n");
  printf("Taille de la chaine initiale: %d\n",test.length());
  printf("Capacité de la chaine initiale: %d\n",test.capacity());
  printf("Contenu de la chaine initiale: %s\n",test.c_str());
  String str2(test);
  printf("Taille max requise pour une chaine: %d\n", str2.max_size());
  printf("Taille de la chaine copiée: %d\n", str2.length());
  printf("Capacité de la chaine copiée: %d\n",str2.capacity());
  printf("Contenu de la chaine copiée: %s\n", str2.c_str());
	

 //test du la fonction clear
  printf("########## Test de la methode clear ##########\n");
  printf("Taille de la chaine avant clear: %d\n", test.length());

  test.clear();
  printf("Taille de la chaine après clear: %d\n", test.length());

  //test de l'operateur +
  printf("########## Test de l'operateur + ##########\n");
  String str3= test+'D';
 
  printf("Taille avant ajout de caractere: %d\n", test.length());
  printf("Taille après ajout de caractere: %d\n", str3.length());

  printf("Chaine avant ajout: %s \n", test.c_str() );
}
