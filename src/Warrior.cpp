#include "unittypes.h"

CWarrior::CWarrior() {
    SetCost(110);
    SetDamage(80);
    SetHealth(250);
    SetXPReward(20);
    SetGoldReward(50);
    SetArmor(30);
    SetArmy("None");
}

void CWarrior::SetArmor(const int& armor_) {
    armor = armor_;
}

int CWarrior::GetArmor() const{
    return armor;
}

//Attacking proccess will be added later
void CWarrior::Attack(CUnit&) {}

//Defending proccess will be added later
void CWarrior::TakeDamage(const size_t&) {}