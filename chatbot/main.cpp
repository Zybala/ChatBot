#include "stdafx.h"
#include <iostream>
#include "ucz.h"
#include <string>

using namespace std;

int main(){
	ucz AI;										// tworzenie obiektu AI
	/*
	Jest to pętla, która będzie się powtarzała do momentu aż aplikacja zostanie wyłączona.
	użytkownik wpisuje frazy a bot odpowiada.
	*/


	for (;;){									// rozpoczęcie pętli
		cout << "\n Ty: ";						// miejsce w którym użytkownik wpisuje  
		string phrase;
		getline(cin, phrase);					// używanie getline do wpisanych zdań, i zapisanie frazy

		cout << "Bot: ";						
		AI.respond(phrase);						// wpisany input użytkownika zostaje wysłany do ucz i sprawdzony czy może odpowiedzieć			
	}

}