/*
 * Grille.cpp
 *
 *  Created on: 22 mars 2013
 *      Author: pa
 */

#include "Grille.h"
#include "Ressource.h"
#include "Mobile.h"
#include "Monde.h"
#include <stdio.h>

// Constructeur par défaut
Grille::Grille(): largeur(5), longueur(10){}

// Constructeur paramétré
Grille::Grille(int _largeur, int _longueur): largeur(_largeur), longueur(_longueur){}

void Grille::afficherGrille()
{
	for (unsigned i = 0 ; i < 5 ; i++)
	{
		cout << "/ \\_/ \\_/ \\_/ \\_/ \\_/ \\_/ \\_/ \\_/ \\_/ \\" << endl ;
		cout << "\\_/ \\_/ \\_/ \\_/ \\_/ \\_/ \\_/ \\_/ \\_/ \\_/" << endl ;
	}
}

void Grille::gotoxy(int _x, int _y)
{
	  cout << "\033[" << _y << ";" << _x << "H";
}


void Grille::clear()
{
	this->clear();
}

void Grille::pause()
{
	sleep(5);
}
