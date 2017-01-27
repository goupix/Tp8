#include <string.h>

class String {
	public :
		String();
		String(const char* s);
		String(const String& str); //constructeur par copie


		//Getters :
		int length() const;
		int capacity() const;



		void reserve(size_t n); //Methode reserve qui change la capacity

		



	protected :
		char* chaine;
		int length_; //Nombres de caracteres
		int cap; //Nombres de cases totales du tableau



};
