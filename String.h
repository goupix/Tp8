class String {
	public :
		String();
		String(const string& str); //constructeur par copie


		//Getters :
		int length();
		int capacity();


		



	protected :
		char chaine[];
		int length; //Nombres de caracteres
		int cap; //Nombres de cases totales du tableau



};
