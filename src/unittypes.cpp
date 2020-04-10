#include "unittypes.h"

bool CUnit::IsAlive() const{
    return GetHealth() > 0;
}

void CUnit::SetCost(const int& cost_) {
    cost = cost_;
}

void CUnit::SetDamage(const int& damage_) {
    damage = damage_;
}

void CUnit::SetHealth(const int& health_) {
    health = health_;
}

void CUnit::SetXPReward(const int& xpReward_) {
    xpReward = xpReward_;
}

void CUnit::SetGoldReward(const int& goldReward_) {
    goldReward = goldReward_;
}

void CUnit::SetArmy(const std::string& army_) {
    army = army_;
}

int CUnit::GetCost() const{
    return cost;
}

int CUnit::GetDamage() const{
    return damage;
}

int CUnit::GetHealth() const{
    return health;
}

int CUnit::GetXPReward() const{
    return xpReward;
}

int CUnit::GetGoldReward() const{
    return goldReward;
}

std::string CUnit::GetArmy() const {
    return army;
}

//WIZARD
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



//WARRIOR
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



//SUPPORT

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



//PROVOVATEUR

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


//DESTROYER

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