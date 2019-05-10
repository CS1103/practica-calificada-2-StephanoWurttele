//
// Created by stephano on 5/10/19.
//

#ifndef PC2_FIGHTER_H
#define PC2_FIGHTER_H

#include "Defense.h"
#include "Attack.h"
#include <iostream>
#include <vector>
using namespace std;

class Fighter{
protected:
    vector <Defense> def;
    vector<Attack> atk;
public:
    Fighter(string def[3],string atk[3]);
    int attack();
    int defense();
};

class BruceLee:public Fighter{
public:
    BruceLee(string def[3],string atk[3]);
};

class ChuckNorris:public Fighter{
public:
    ChuckNorris(string def[3], string atk[3]);

};

class JasonStatham:public Fighter{
public:
    JasonStatham(string def[3], string atk[3]);
};



#endif //PC2_FIGHTER_H
