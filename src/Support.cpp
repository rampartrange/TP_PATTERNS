#include "unittypes.h"

CSupport::CSupport() {
    SetCost(80);
    SetDamage(40);
    SetHealth(200);
    SetXPReward(15);
    SetGoldReward(40);
    SetHeal(30);
    SetArmy("None");
}

void CSupport::SetHeal(const int& heal_) {
    heal = heal_;
}

int CSupport::GetHeal() const{
    return heal;
}

//Healing procces will be added later
void CSupport::Heal(CUnit& ally) {}

//Attacking proccess will be added later
void CSupport::Attack(CUnit&) {}

//Defending proccess will be added later
void CSupport::TakeDamage(const size_t&) {}