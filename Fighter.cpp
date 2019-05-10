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
            Shield* b=new Shield();
            def.push_back(*b);
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
            Punch* a=new Punch();
            atk.push_back(*a);
        }
        if(defe[i]=="S"){
            Saber* b=new Saber();
            atk.push_back(*b);
            atk.push_back(*(new Saber()));
        }
        if(defe[i]=="F"){
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
    return suma;
}

int Fighter::attack() {
    int suma=0;
    for (int i=0;i<atk.size();i++) {
        suma+=atk[i].attack();
        cout<<suma<<endl;
    }
    return suma;
}

JasonStatham::JasonStatham(string *def, string *atk) : Fighter(def, atk) {

}

ChuckNorris::ChuckNorris(string *def, string *atk) : Fighter(def, atk) {

}

BruceLee::BruceLee(string *def, string *atk) : Fighter(def, atk) {

}
