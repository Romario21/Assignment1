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

//srand( time(0) );

//CrazyRandomSword::CrazyRandomSword() : Weapon("Crazy Random Sword", (double)rand() % 91 + 10) {}

double CrazyRandomSword::hit(double armor){
    //seeding rand num
    srand( time(0) );

    int temp = (int)(armor / 2); //half armor points

    double ignore = (double)(rand() % (temp + 1) ); // 0 - (armor / 2)

    double damage = hitPoints - ignore;


    if(damage < 0)
        return 0;

    return damage;
}
