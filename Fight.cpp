//
// Created by stephano on 5/10/19.
//
#include "Fight.h"

Arena::Arena() {}

void Arena::run(Fighter a, Fighter b) {
    for (int i=0;i<fights.size();i++){
        int scorea = 0;
        int scoreb = 0;
        scorea = a.defense()-b.attack();
        scoreb = b.defense()-a.attack();
        fights[i].score=(scorea>scoreb)?scorea:scoreb;
    }
}

vector<Fight> Arena::get_fights() {
    return vector<Fight>();
}

void Arena::load_fights(string filename) {

    //fights=;
}

void Arena::run_all() {
}
