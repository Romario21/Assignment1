/*
 *  File: LegendaryTomahawk.h
 *
 *  Author: Romario <rde16@my.fsu.edu>
 *
 *  Created on: Oct 11, 2017
 */

#include <string>
#include "Weapon.h"

#ifndef LEGENDARYTOMAHAWK_H_
#define LEGENDARYTOMAHAWK_H_


/**
 * Defines the behavior of a Legendary Tomahawk (hitpoint = 70, ignores armor points if less
 * than 15)
 */

class LegendaryTomahawk : public Weapon {

public:

	SimpleAxe() : Weapon("Legendary Tomahawk", 70.0) {}
	virtual ~LegendaryTomahawk() {};
	virtual double hit(double armor);


};


#endif /* LEGENDARYTOMAHAWK_H_ */
