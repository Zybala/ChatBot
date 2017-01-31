#include "stdafx.h"
#include "ucz.h"
#include <iostream>
#include <fstream>
#include <string>
/*
Cała funkcja jest odpowiedzialna za szukanie fraz w pliku tekstowym. Jeżeli będą się one 
zgadzały odpowiedz która będzie zapisana pod nią zostanie wywołana.
Jeżeli odpowiedz nie będzie wyszukana bot powtórzy pytanie i wywołana zostanie metoda, 
która jest odpowiedzialna za nauke. ta odpowiedz bedzie przechowana w pliku.

*/
using namespace std;

void ucz::respond(string phrase){
	fstream memory;
	memory.open("memory/memory.txt", ios::in);
	//szukanie pliku do samego końca
	while (!memory.eof()){										// podczas gdy nie na końcu pliku
		string identifier;
		getline(memory, identifier);							// weź nową frazę

		if (identifier == phrase){								// czy jest to szukana fraza
			string response;					
			getline(memory, response);							// jeżeli tak, weź tą frazę
			glos.say(response);									// tekstowo oraz po przez audio wywołana odpowiedź
			return;												// zakończ funkcję
		}
	}

	memory.close();												// Jeżeli pożądana fraza nie została zapisana plik zostaje zamknięty
	memory.open("memory/memory.txt", ios::out | ios::app);		// otwórz plik do wpisania nowej frazy
	memory << phrase << endl;									// zapisz frazę

	glos.say(phrase);											// powtórz wpisaną frazę
	string userResponse;			
	cout << "Naucz: ";											
	getline(cin, userResponse);									// weź odpowiedź
	memory << userResponse << endl;								// zapisz ją w pamięci
	memory.close();												// zamknij plik.
}
/*
ta funkcja odpowiedzialna jest za wywoalnie textu oraz głosu espeak
*/

void ucz::say(string phrase){
	this->glos.say(phrase);
}




