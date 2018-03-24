/*********************************************************************
 *
 *	TUTORIAL C++ - Lesson 1
 *	Arguments: Loops (for - while - do while), static arrays,
 *			   calculate min of array.
 *
 *	Author: Mario Raciti
 *	Github: https://www.github.com/zMrDevJ
 *	YT Channel: https://www.youtube.com/MarioRacitiDev
 *
 *********************************************************************/
#include <iostream>

using namespace std;

int N = 5;

int main(){

	/* For */
	for(int i = 0; i < N; i++){	//Finche' i, che inizialmente vale 0, e' < di N allora esegui il seguente codice e incrementa i di 1
		cout << "i:" << i << endl;
	}
	cout << endl;	//Un vai a capo per questioni visive

	/* While */
	bool altraCondizione = true;
	int j = 0;
	while(j < N && altraCondizione == true){	//&& = e contemporaneamente (AND); || oppure (OR)
		cout << "Sono dentro il while e j = " << j << endl;
		j++;
		//altraCondizione = false;	//Se tolgo il commento eseguira' solo una volta il ciclo poiche' altraCondizione non sara' piu' true
	}
	cout << endl;	//Un vai a capo per questioni visive

	/* Do While */
	int k = 6;	//eseguira' una volta il ciclo nonostante k > 5.
	do{
		cout << "Sono dentro il do while e k = " << k << endl;
	}while(k < 5);
	cout << endl;	//Un vai a capo per questioni visive

	/* Array */
	int a[N];	//Array statico di interi con dimensione N
	int b[] = {34, 23, 65, 12, 79};	//La dimensione viene automaticamente calcolata

	/* Ciclo for che copia i valori dell'array b nell'array a */
	for(int i = 0; i < N; i++){
		a[i] = b[i];
		cout << a[i] << " ";
	}
	cout << endl << endl;	//Due vai a capo per questioni visive

	/* Calcolo del minimo di un array */
	int min = a[0];	//Minimo inizialmente posto al primo elemento dell'array a
	for(int i = 1; i < N; i++){	//parte da 1 poichè il primo elemento lo abbiamo già posto a min relativo
		if(a[i] < min)	min = a[i];
		cout << "Il minimo relativo fino ad ora e': " << min << endl;
	}
	cout << "Il minimo assoluto dell'array a e': " << min << endl;

}
