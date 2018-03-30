/*********************************************************************
 *
 *	TUTORIAL C++ - Lesson 1
 *	Arguments: main, cout & cin, variables, constants,
 *			   data types, if construct.
 *
 *	Author: Mario Raciti
 *	Github: https://www.github.com/zMrDevJ
 *	YT Channel: https://www.youtube.com/MarioRacitiDev
 *
 *********************************************************************/

#include <iostream>

using namespace std;	//Specifichiamo di utilizzare come namespace quello standard

const int N = 10;	//Variabile globale costante

//Metodo principale del programma
int main(int argc, char **argv){	//Se non servono input da linea di comando possiamo omettere i parametri formali
	
	/*	Tipi primitivi C++	*/
	int n;	//C++ e' keys sentitive, ovvero una lettera minuscola e' diversa dalla stessa maiuscola (ASCII differente)
	char carattere;
	float f; //Numero con la virgola a 32bit, con precisione di 7 cifre
	double d; //Numero con la virgola a 64bit, con precisione di 15 cifre
	bool booleano; //Valore che può essere vero (=1) oppure falso (=0);

	string parola; //Una stringa in C++ e' un oggetto (non un tipo primitivo) che rappresenta una sequenza di caratteri

	/* If */
	if(N == 10){	//Se N = 10 allora:			(== uguale, != diverso, < minore, > maggiore, <=, >=)
		cout << "N vale 10\n";
	}else{	//Altrimenti:
		cout << "N NON vale 10, ma vale " << N << endl;
	}
	


	cout << "Premi invio per terminare...\n";
	cin.get();	//Attende la pressione del tasto Invio

	return 0;	//Al termine il programma termina ritornando il valore 0 (= tutto andato a buon fine)
}
