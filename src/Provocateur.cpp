#include "unittypes.h"

CProvocateur::CProvocateur() {
    SetCost(500);
    SetDamage(100);
    SetHealth(800);
    SetXPReward(80);
    SetGoldReward(100);
    SetArmy("None");
}

//Attacking proccess will be added later
void CProvocateur::Attack(CUnit&) {}

//Defending proccess will be added later
void CProvocateur::TakeDamage(const size_t&) {}
