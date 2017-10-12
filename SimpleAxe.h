/*
 *  File: SimpleAxe.h
 *
 *  Author: Romario <rde16@my.fsu.edu>
 *
 *  Created on: Oct 11, 2017
 */

#include <string>
#include "Weapon.h"

#ifndef SIMPLEAXE_H_
#define SIMPLEAXE_H_

/**
 * Defines the behavior of a common spear (hitpoint = 60, ignores armor points if
 * between 0 and 20)
 */

class SimpleAxe : public Weapon {

public:

	SimpleAxe() : Weapon("Simple Axe", 60.0) {}
	virtual ~SimpleAxe() {};
	virtual double hit(double armor);


};



#endif /* SIMPLEAXE_H_ */
