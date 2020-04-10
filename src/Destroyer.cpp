#include "unittypes.h"

CDestroyer::CDestroyer() {
    SetCost(700);
    SetDamage(1);
    SetHealth(1);
    SetXPReward(100);
    SetGoldReward(200);
    SetArmy("None");
}

void CDestroyer::Destroy(CUnit& enemy) {
    enemy.SetHealth(0);
    SetHealth(0);
}

//Attacking proccess will be added later
void CDestroyer::Attack(CUnit&) {}

//Defending proccess will be added later
void CDestroyer::TakeDamage(const size_t&) {}