#include <string.h>

class String {
	public :
		String();
		String(const char* s);
		String(const String& str); //constructeur par copie


		//Getters :
		int length() const;
		int capacity() const;
        char* c_str() const;		



	protected :
		char* chaine;
		int length_; //Nombres de caracteres
		int cap; //Nombres de cases totales du tableau



};
