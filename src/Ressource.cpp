/*
 * Ressource.cpp
 *
 *  Created on: 14 mars 2013
 *      Author: pa
 */

#include "Ressource.h"

// Constructeur par défault
Ressource::Ressource(): Element() {}

// Constructeur paramétré
Ressource::Ressource(const string& _name, const Position& _position): Element(_name, _position) {}
