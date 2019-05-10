#include <iostream>
#include "Fight.h"
#include "cassert"


using namespace std;
int main() {
    string arr1[3]={"","",""};
    string arr2[3]={"","",""};
    arr1[0]="E";
    arr1[1]="A";
    arr2[0]="P";
    arr2[1]="S";
    arr2[2]="F";
    BruceLee a(arr1,arr2);
    a.attack();
    assert(a.defense()==9);
    return 0;
}     