/*
 *  File: CrazyRandomSword.h
 *
 *  Author: Romario <rde16@my.fsu.edu>
 *
 *  Created on: Oct 11, 2017
 */

#include <string>
#include "Weapon.h"

#ifndef CRAZYRANDOMSWORD_H_
#define CRAZYRANDOMSWORD_H_

/**
 * Defines the behavior of a Crazy Random Sword (hitpoint = random num between 10 and 100, ignores random armor
 * points, ranging from 0 to half of the armor the weapon hits.)
 */

class CrazyRandomSword : public Weapon {

public:

	CrazyRandomSword() : Weapon("Crazt Random Sword", 85.0) {}
	virtual ~CrazyRandomSword() {};
	virtual double hit(double armor);

};



#endif /* CRAZYRANDOMSWORD_H_ */
