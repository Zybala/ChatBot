#include "stdafx.h"
#include "glos.h"
#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;
/*
wywołanie frazy tekstowo oraz dzwiękowo. Za pomocą tej funkcji zostaje otwarty program espeak który odpowiedzialny jest za dziękowe odtwarzanie fraz.
*/
void glos::say(string phrase){							
	string command = "espeak \"" + phrase + "\"";			// fraza przyjmuje funkcje komendy
	const char* charCommand = command.c_str();				// konwercja do const char
	cout << phrase << endl;									// tekstowe wywołanie frazy
	system(charCommand);									// wysłanie komendy do cmd aby wywołać frazę w espeaku 

}
