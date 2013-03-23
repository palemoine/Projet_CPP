/*
 * Ressource.cpp
 *
 *  Created on: 14 mars 2013
 *      Author: pa
 */

#include "Ressource.h"

// Constructeur par défault
Ressource::Ressource(Monde *_monde): Element(_monde) {}

// Constructeur paramétré
Ressource::Ressource(Monde *_monde, const string& _name, const Position& _position): Element(_monde, _name, _position) {}
