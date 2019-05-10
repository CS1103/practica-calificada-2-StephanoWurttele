//
// Created by stephano on 5/10/19.
//
#include "Attack.h"

Attack::Attack(int _power):power(_power){};

int Attack::attack() {
    return power;
}