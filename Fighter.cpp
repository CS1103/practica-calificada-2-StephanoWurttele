//
// Created by stephano on 5/10/19.
//

#include "Fighter.h"
Fighter::Fighter(string defe[3],string atck[3]){
    int i=0;
    while(defe[i]!=""){
        if(defe[i]=="E"){
            Elude* a=new Elude();
            def.push_back(*a);
        }
        if(defe[i]=="S"){
            def.push_back(*(new Shield()));
        }
        if(defe[i]=="A"){
            Armor* c=new Armor();
            def.push_back(*c);
            def.push_back(*(new Armor()));
        }
        i++;
    }
    i=0;
    while(atck[i]!=""){
        if(defe[i]=="P"){
            Punch* d=new Punch();
            atk.push_back(*d);
        }
        if(defe[i]=="S"){
            Saber* e=new Saber();
            atk.push_back(*(new Saber()));
        }
        if(defe[i]=="F"){
            Firearm* f=new Firearm();
            atk.push_back(*f);
            atk.push_back(*(new Firearm()));
        }
        i++;
    }
}

int Fighter::defense() {
    int suma=0;
    for (int i=0;i<def.size()-1;i++) {
        suma+=def[i].defense();
    }
    cout<<suma<<endl;
    return suma;
}

int Fighter::attack() {
    int suma=0;
    for (int i=0;i<atk.size()-1;i++) {
        suma+=atk[i].attack();
    }
    return suma;
}

JasonStatham::JasonStatham(string *def3, string *atk3) : Fighter(def3, atk3) {

}

ChuckNorris::ChuckNorris(string *def2, string *atk2) : Fighter(def2, atk2) {

}

BruceLee::BruceLee(string *def, string *atk) : Fighter(def, atk) {

}
