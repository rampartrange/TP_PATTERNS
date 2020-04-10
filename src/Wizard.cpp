#include "unittypes.h"

CWizard::CWizard() {
    SetCost(100);
    SetDamage(80);
    SetHealth(200);
    SetXPReward(20);
    SetGoldReward(50);
    SetArmy("None");
}

//Attacking proccess will be added later
void CWizard::Attack(CUnit&) {};

//Defending proccess will be added later
void CWizard::TakeDamage(const size_t&) {};
