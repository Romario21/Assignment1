/*
 *  File: CrazyRandomSword.cpp
 *
 *  Author: Romario <rde16@my.fsu.edu>
 *
 *  Created on: Oct 11, 2017
 */

#include "CrazyRandomSword.h"
#include <ctime>
#include <cstdlib>

srand( time(0) );

CrazyRandomSword::CrazyRandomSword() : Weapon("Crazy Random Sword", (double)rand() % 91 + 10) {}

double CrazyRandomSword::hit(double armor){
    //seeding rand num
    //srand( time(0) );

    double ignore = (double)rand() % ((armor /2.0) + 1); // 0 - armor / 2

    double damage = hitPoints - (armor * ignore);


    if(damage < 0)
        return 0;

    return damage;
}
