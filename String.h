class String {
	public :
		String();
		String(const string& str); //constructeur par copie


		//Getters :
		int Get_lenght();
		int Get_cap();


		



	protected :
		char chaine[];
		int lenght; //Nombres de caracteres
		int cap; //Nombres de cases totales du tableau



};
