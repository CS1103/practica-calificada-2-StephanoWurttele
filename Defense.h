//
// Created by stephano on 5/10/19.
//

#ifndef PC2_DEFENSE_H
#define PC2_DEFENSE_H

class Defense{
protected:
    int level;
public:
    Defense(int _level);
    int defense();
};



class Elude:public Defense{
public:
    Elude():Defense(1){};
};




class Shield:public Defense{
public:
    Shield():Defense(4){};
};

class Armor:public Defense{
public:
    Armor():Defense(8){};
};


#endif //PC2_DEFENSE_H
