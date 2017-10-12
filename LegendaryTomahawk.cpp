/*
 *  File: LegendaryTomahawk.h
 *
 *  Author: Romario <rde16@my.fsu.edu>
 *
 *  Created on: Oct 11, 2017
 */

#include "LegendaryTomahawk.h"


double LegendaryTomahawk::hit(double armor){
    double damage;

    if(armor < 15)
    	damage = hitPoints;

    else
    	damage = hitPoints - armor;

    if(damage < 0)
    	return 0;

    return damage;
}



