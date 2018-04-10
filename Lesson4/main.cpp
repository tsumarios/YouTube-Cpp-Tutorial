/*********************************************************************
 *
 *	TUTORIAL C++ - Lesson 4
 *	Arguments: Deepening on references and pointers, const pointers,
 *			   void pointers, casting, struct.
 *	Homeworks: Write a function that, taken in input a pointer to void
 *			   returns the value pointed by it as an integer. In the
 *			   main, pointer we give to function must be declared as
 *			   void pointer and it must poit to a double.
 *
 *	Author: Mario Raciti
 *	Github: https://www.github.com/zMrDevJ
 *	YT Channel: https://www.youtube.com/MarioRacitiDev
 *
 *********************************************************************/

#include <iostream>

using namespace std;


//Funzione che assegna il valore 10 alla variabile puntata dall'indirizzo (puntatore) passato come parametro formale
void fPuntatore(int *p){
	cout << "fPuntatore...\n";
	*p = 10;
}

//Stessa operazione (assegnando come valore 15) con parametro formale passato per riferimento
void fRiferimento(int &n){
	cout << "fRiferimento...\n";
	n = 15;
}


struct Persona{
	string nome = "NomeDefault";
	string cognome = "CognomeDefault";
	int eta = 18;
};

//Main
int main(){

	/* Puntatori e riferimenti */
	int n = 5;
	cout << "n = " << n << " e &n = " << &n << endl;	//Notare il riferimento
	fPuntatore(&n);	//Chiamo la funzione f con &n come parametro attuale	(analog. p qualora "int *p = &n;")
	cout << "n = " << n << " e &n = " << &n << endl << endl;	//Il riferimento non cambia

	fRiferimento(n); //Assomiglia ad un passaggio per valore (classico), ma in realta' e' per riferimento
	cout << "n = " << n << " e &n = " << &n << endl << endl;	//Il riferimento non cambia


	/* Puntatori a void */
	char c = 'r';
	float f = 10.6;

	void *p;	//Puo' puntare a qualunque tipo, anche differenti nel corso dell'esecuzione del codice
	p = &c;	//Diventa puntatore a char
	p = &n;	//Diventa puntatore a int
	p = &f;	//Diventa puntatore a float ecc..

	//Non si puo' dereferenziare un puntatore a void => *vp = 6; //errore a compile-time
	//Si deve prima fare un cast a quel tipo (int in questo caso poiche' 6 e' un intero)
	*( (int *)p ) = 6;	//* = dereferenziazione - (int *) cast a puntatore ad int


	/* Casting */
	double d = 134.57;
	int a = int(d);	//Equivale a: (int)d - Stiamo forzando ad arrotondare a int la variabile d per poter essere assegnata alla int a
	float b = (float)a;	//Casting da int (quale e' la variabile a) a float per poter assegnare il valore a b
	cout << "a = " << a << " , b = " << b << " , d = " << d << endl;


	/* Puntatori const e puntatori a costanti */
	const float N = 10.3;
	float* const ptr = &b;	//Puntatore costante che puntera' sempre a b. Non e' valido scrivere: ptr = &f; ma e' valido *ptr = 4.3;
	const float *r = &N;	//Puntatore che punta alla costante N. Non e' valido scrivere: *r = 2.3; ma e' valido r = &M;
	const float* const pCostACost = &N; //Puntatore costante a variabile costante


	/* Struct */
	struct Persona pers;	//Struct di nome pers di tipo Persona
	cout << "Il nome della persona pers e': " << pers.nome << endl;	//Stampa il valore della variabile interna alla struct nome
	cout << "Il cognome della persona pers e': " << pers.cognome << endl;	//Stampa il valore della variabile interna alla struct cognome
	cout << "L'eta' della persona pers e': " << pers.eta << endl << endl;	//Stampa il valore della variabile interna alla struct eta'

	pers.nome = "Mario";	//Modifico la variabile nome della struct pers di tipo Persona
	pers.cognome = "Rossi";	//Cognome
	pers.eta = 35;	//Eta'

	cout << "Il nome della persona pers e': " << pers.nome << endl;
	cout << "Il cognome della persona pers e': " << pers.cognome << endl;
	cout << "L'eta' della persona pers e': " << pers.eta << endl << endl;


	cout << "\nPremi invio per terminare...\n";
	cin.get();	//Attende la pressione del tasto Invio
	
	return 0;	//Al termine il programma termina ritornando il valore 0 (= tutto andato a buon fine)
}
