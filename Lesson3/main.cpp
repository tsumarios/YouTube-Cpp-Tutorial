/*********************************************************************
 *
 *	TUTORIAL C++ - Lesson 3
 *	Arguments: Terminal arguments, references and pointers, first
 *			   notes about functions.
 *	Homeworks: Write a function that, taken in input a pointer to int
 *			   and an int named "n" with default value = 0, returns
 * 			   pointer value if p != NULL, n otherwise.
 *
 *	Author: Mario Raciti
 *	Github: https://www.github.com/zMrDevJ
 *	YT Channel: https://www.youtube.com/MarioRacitiDev
 *
 *********************************************************************/

#include <iostream>

using namespace std;

//Prototipo della procedura swap, necessario poiche' implementiamo tale funzione dopo l'invocazione nel main
void swap(int *, int *);	//Se la implementiamo sopra l'invocazione (in questa riga) allora non e' necessario (come per la procedura print qui sotto
						//Inoltre basta mettere solo il tipo dei parametri formali, senza specificarne il nome

//Procedura che stampa due interi in input e i loro riferimenti
void print(int a, int b, int *pA, int *pB){
	cout << "a = " << a << " e il puntatore: " << pA <<
	".\tb = " << b << " e il puntatore: " << pB << endl;
}

//Main
int main(int argc, char const *argv[]){	//argc = numero argomenti passati, *argv[] array di stringhe passate
	
	/* Argomenti da terminale */
	if(argc != 2){	//Se non passo 1 argomento (il nome del programma e' incluso, per questo !=2), allora do' un messaggio di errore
		cout << "Errore! Utilzzo: " << argv[0] << " opzione\n";	//argv[0] corrisponde al nome dell'eseguibile
		exit(1);	//Termino il programma con valore 1, di errore
	}
	cout << "La stringa inserita in come argomento del programma e': " << argv[1] << endl;	//argv[1] e' la stringa passata

	int n = 10;
	int *p;	//Puntatore non inizializzato
	p = &n;	//p punta a n, &n = riferimento di n

	cout << "La variabile vale: " << n << ", il suo riferimento: " << &n << ", il puntatore: " << p
	<< ". Per accedere tramite puntatore: " << *p << endl;	//* e' detto operatore di dereferenziazione


	/* Puntatori e riferimenti */
	int a = 5, b = 2;
	int *pA = &a, *pB = &b;	//pA e pB sono due puntatori (notare che un array e' un puntatore ad un'area di memoria)
	
	print(a, b, pA, pB);	//Chiamo la procedura print()	(a, b, pA, pB sono detti parametri attuali della procedura)
	swap(pA, pB);		//Chiamo la procedura swap()
	print(a, b, pA, pB);	//Richiamo la print per verificare che i valori siano cambiati
	

	cout << "Premi invio per terminare...\n";
	cin.get();	//Attende la pressione del tasto Invio
	
	return 0;	//Al termine il programma termina ritornando il valore 0 (= tutto andato a buon fine)
}

//Procedura che scambia i valori puntati dai puntatori
void swap(int (*pA), int (*pB)){
	int tmp = *pA;
	*pA = *pB;
	*pB = tmp;
}
