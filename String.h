class String {
	public :
		String();
		String(const string& str); //constructeur par copie


		//Getters :
		int lenght();
		int capacity();


		



	protected :
		char chaine[];
		int lenght; //Nombres de caracteres
		int cap; //Nombres de cases totales du tableau



};
