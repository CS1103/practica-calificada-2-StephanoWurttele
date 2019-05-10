//
// Created by stephano on 5/10/19.
//

#ifndef PC2_ATTACK_H
#define PC2_ATTACK_H

class Attack{
protected:
    int power;
public:
    Attack(int _power);
    int attack();
};



class Punch:public Attack {
public:
    Punch():Attack(1){}
};




class Saber:public Attack{
public:
    Saber():Attack(5){}
};


class Firearm:public Attack{
public:
    Firearm():Attack(10){}
};





#endif //PC2_ATTACK_H
