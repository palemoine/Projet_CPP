/*
 * Mobile.cpp
 *
 *  Created on: 15 mars 2013
 *      Author: victor
 */


#include "Mobile.h"

Mobile::Mobile(Monde *_monde) : Element(_monde)
{
	vitesse = 1;
	vision = 1;
}

int Mobile::getVitesse() const {
	return vitesse;
}

unsigned int Mobile::getVision() const {
	return vision;
}


void Mobile::setVision(unsigned int vision) {
	this->vision = vision;
}

void Mobile::setVitesse(int vitesse) {
	this->vitesse = vitesse;
}


bool Mobile::seDeplacer(Direction dir){
	Position curPos = this->getPosition();
	Position newPos(curPos);
	switch (dir){
		case 0 :
			newPos.setPositionY(newPos.getPositionY() - 2);
			break;

		case 1 :
			newPos.setPositionY(newPos.getPositionY() - 1);
			newPos.setPositionX(newPos.getPositionX() + 1);
			break;

		case 2 :
			newPos.setPositionY(newPos.getPositionY() - 1);
			newPos.setPositionX(newPos.getPositionX() - 1);
			break;

		case 3 :
			newPos.setPositionY(newPos.getPositionY() + 2);
			break;

		case 4 :
			newPos.setPositionY(newPos.getPositionY() + 1);
			newPos.setPositionX(newPos.getPositionX() + 1);
			break;

		case 5 :
			newPos.setPositionY(newPos.getPositionY() - 1);
			newPos.setPositionX(newPos.getPositionX() + 1);
			break;
	}
	//cout<<this->getMonde()->estValide(newPos);
	if (this->getMonde()->estValide(newPos))
	{
		this->afficherElement();
		// Modification de la position de l'élément
		setPosition(newPos);
		// Modification de la map
		this->getMonde()->getMap().erase(curPos);
		cout << "   a bougé en : " << this->getPosition()<< endl;
		this->getMonde()->getMap().insert(pair<Position, unsigned int>(newPos,this->getMonde()->getMap().size() - 1));
	}
	else
	{
		this->afficherElement();
		cout << "   veut bouger en " << newPos << " mais la position est occupée ou en dehors de la carte." << endl;
	}
	return true;
}

Position Mobile::aTrouve(Position _posCourante)
{
	map<Position, unsigned int>::const_iterator Iter;
	string nom;
	Position meilleurePos;
	Position Nord(_posCourante.getPositionX(), _posCourante.getPositionY() - 2);
	Position NordEst(_posCourante.getPositionX() + 1, _posCourante.getPositionY() - 1);
	Position SudEst(_posCourante.getPositionX() + 1,_posCourante.getPositionY() + 1);
	Position Sud(_posCourante.getPositionX() + 2 ,_posCourante.getPositionY());
	Position SudOuest(_posCourante.getPositionX() - 1 ,_posCourante.getPositionY() + -1);
	Position NordOuest(_posCourante.getPositionX() - 1 ,_posCourante.getPositionY() - 1);

	//Il serait appréciable que l'élément puisse regarder autour de lui.

//	for (int i = 0 ; i < 6 ; i++)
//	{
//		if(this->getMonde()->getMap().find(Nord) == )
//		{
//			nom = this->getMonde()->at(Iter->second)->getName();
//		}
//	}

	return meilleurePos;
}
