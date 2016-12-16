
#ifndef MEUBLE_H
#define MEUBLE_H

#include <string>

using namespace std;

class Meuble
{


	private:


		string nom;
		double prix ; 
		int qteEnStock;


	public:

		Meuble (string leNom, double lePrix, int laQte);

		~Meuble();

		void setnom (string leNom);
		string getnom();

		void setprix (double lePrix);
		double getprix();

		void setqteEnStock (int laQte);
		int getqteEnStock();
		
		static int nombreDeMeuble;

};

#endif // MEUBLE_H
