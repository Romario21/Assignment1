/*
 *  File: SimpleAxe.cpp
 *
 *  Author: Romario <rde16@my.fsu.edu>
 *
 *  Created on: Oct 11, 2017
 */

#include "SimpleAxe.h"


double SimpleAxe::hit(double armor){
    double damage;

    if(armor > 0 && armor < 20)
    	damage = hitPoints;

    else
    	damage = hitPoints - armor;

    if(damage < 0)
        return 0;

    return damage;
}


