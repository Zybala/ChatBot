#ifndef _UCZ_H
#define _UCZ_H

#include <iostream>
#include <fstream>
#include "glos.h"

using namespace std;

class ucz {
public:
		void respond(string phrase); // uczenie lub wysłanie response
		void say(string phrase); // tekstowo i po przez espeakera komunikowanie frazy

		glos glos; // głos bota który wypowiada odpowiedz
};

#endif