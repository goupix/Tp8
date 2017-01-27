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
		int size() const;
		int max_size() const;
		//Methods
		void clear();



	protected :
		char* chaine;
		int length_; //Nombres de caracteres
		int cap; //Nombres de cases totales du tableau
        static const int max_size_=300; //Taille maximale du tableau


};
