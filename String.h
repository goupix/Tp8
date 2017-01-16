#include <string.h>

class String {
	public :
		String();
		String(const char* s);
		String(const string& str); //constructeur par copie


		//Getters :
		int length();
		int capacity();


		



	protected :
		char* chaine;
		int length_; //Nombres de caracteres
		int cap; //Nombres de cases totales du tableau



};
