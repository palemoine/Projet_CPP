/*
 * Grille.h
 *
 *  Created on: 22 mars 2013
 *      Author: pa
 */

#ifndef GRILLE_H_
#define GRILLE_H_

#include <unistd.h>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include "Monde.h"
using namespace std;

class Grille {
private:
	int largeur;
	int longueur;

public:
	Grille();
	Grille(int, int);
	void afficherGrille();
	void gotoxy(int, int);
	void pause();
	void clear();
};

#endif /* GRILLE_H_ */
