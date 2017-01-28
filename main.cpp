#include<iostream>
#include"String.h"
#include<stdio.h>

using namespace std;

int main(){
 

  //Test du constructeur par défaut
  String str;
  printf("########## Test du constructeur par défaut ##########\n");
  printf("Taille de la chaine: %d\n",str.length());
  printf("Capacité de la chaine: %d\n", str.capacity());
  printf("Chaine: %s\n", str.c_str());
	
  char chaine[7]; //Tableau de caracteres pour le test
  chaine[0] = 'A';
  chaine[1] = 'B';
  chaine[2] = 'C';
  chaine[3] = '\0';

  String test(chaine); //Test du constructeur depuis un c-string
  printf("########## Test du constructeur depuis un c-string ##########\n");
  printf("Taille de la chaine: %d\n", test.length());
  printf("Capacité de la chaine: %d\n", test.capacity());
  printf("Contenu de la chaine: %s\n", test.c_str());
  
  
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
	
  //Test de la methode resize
  printf("########## Test de la methode resize ##########\n");
   
  printf("Chaine avent resize: %s\n",test.c_str());
  test.resize(20,'T'); 
  printf("Chaine après resize (plus grand): %s\n",test.c_str());
  test.resize(3,'T');
  printf("Chaine après resize (plus petit): %s\n", test.c_str());

  //test de l'operateur +
  printf("########## Test de l'operateur + ##########\n");
  String str3= test+'D';
 
  printf("Taille avant ajout de caractere: %d\n", test.length());
  printf("Chaine avant ajout: %s\n", test.c_str());

  printf("Taille après ajout de caractere: %d\n", str3.length());
  printf("Chaine après ajout: %s\n", str3.c_str());
  
   //test de l'operateur + str+str
  printf("########## Test de l'operateur + 2##########\n");
  String str4= test+test;
 
  printf("Taille avant ajout de caractere: %d\n", test.length());
  printf("Chaine avant ajout: %s\n", test.c_str());

  printf("Taille après ajout de caractere: %d\n", str4.length());
  printf("Chaine après ajout: %s\n", str4.c_str());
  
  //test de l'operateur + str
  printf("########## Test de l'operateur + 3##########\n");
  String str5= test+chaine;
 
  printf("Taille avant ajout de caractere: %d\n", test.length());
  printf("Chaine avant ajout: %s\n", test.c_str());

  printf("Taille après ajout de caractere: %d\n", str5.length());
  printf("Chaine après ajout: %s\n", str5.c_str());
  
  //test de la fonction empty
  
  printf("########## Test de la methode empty ##########\n");
  printf("Test sur une chaine vide :\n");
  if (str.empty() == true){
		printf("Reussi\n");
	}
	printf("Test sur une chaine rempli :\n");
	if (test.empty() == false){
		printf("Reussi\n");
	}

 

  //test de la fonction clear
  printf("########## Test de la methode clear ##########\n");
  printf("Taille de la chaine avant clear: %d\n", test.length());
  printf("Capacité de la chaine avant clear: %d\n", test.capacity());
  printf("Chaine avant clear: %s\n", test.c_str());


  test.clear();
  printf("Taille de la chaine après clear: %d\n", test.length());
  printf("Capacité de la chaine avant clear: %d\n", test.capacity());
  printf("Chaine après clear: %s\n", test.c_str());

  //Test de la methode reserve

  test.reserve(30); 
  printf("##########Test de la méthode reserve##########\n");
  printf("Valeur de la capacité après reserve:: %d\n", test.capacity());
  


}
