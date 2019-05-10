//
// Created by stephano on 5/10/19.
//
#ifndef PC2_FIGHT_H
#define PC2_FIGHT_H

#include "Fighter.h"


class Fight{
public:
    Fighter *a;
    Fighter *b;
    Fighter *winner;
    int score;
};

class Arena{
    vector<Fight> fights;
public:
    Arena();
    void run(Fighter a, Fighter b);
    vector<Fight> get_fights();
    void load_fights(string filename);
    void run_all();
};



#endif //PC2_FIGHT_H
