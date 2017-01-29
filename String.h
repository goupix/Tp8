#include <string.h>

class String {
	public :
        //constructeurs
		String();//constructeur par défaut
		String(const char* s); //constructeur à partir d'un tableau
		String(const String& str); //constructeur par copie


		//Getters 
		int length() const;
		int capacity() const;
        char* c_str() const;
		int size() const;
		int max_size() const;


		//Methods
		void clear();
		void reserve(size_t n); //Methode reserve qui change la capacity
        void resize(size_t n, char c); //Methode qui change la taille du tableau    
        bool empty();//revoit True ou False selon que la String est vide ou non

        //operateurs
        friend String operator+ (const String& lhs, char rhs);
        friend String operator+ (const String& lhs, const String& rhs);
        friend String operator+ (const String& lhs, const char* rhs);
		String& operator= (const String& str);
		String& operator= (char c);
        String& operator= (const char* s);
       


	protected :
		char* chaine;//tableau de caracteres
		int length_; //Nombres de caracteres
		int cap; //Nombres de cases totales du tableau
        static const int max_size_=300; //Taille maximale du tableau


};
