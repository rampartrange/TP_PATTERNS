#include "army.h"

CArmy::CArmy(const std::string& armyName_) {
    armyName = armyName_;
    unitNum = 0;

    wizardFactory = new CWizardFactory;
    warriorFactory = new CWarriorFactory;
    supportFactory = new CSupportFactory;
    provocateurFactory = new CProvocateurFactory;
    destroyerFactory = new CDestroyerFactory;
}

CArmy::~CArmy() {
    for (int i = 0; i < unitNum; ++i) {
        delete units[i];
    }

    delete wizardFactory;
    delete warriorFactory;
    delete supportFactory;
    delete provocateurFactory;
    delete destroyerFactory;

}

void CArmy::CreateWizard() {
    CUnit* unit = wizardFactory->CreateUnit();
    unit->SetArmy(armyName);
    units.push_back(unit);
    SetUnitNum(unitNum + 1);
}

void CArmy::CreateWarrior() {
    CUnit* unit = warriorFactory->CreateUnit();
    unit->SetArmy(armyName);
    units.push_back(unit);
    SetUnitNum(unitNum + 1);
}

void CArmy::CreateSupport() {
    CUnit* unit = supportFactory->CreateUnit();
    unit->SetArmy(armyName);
    units.push_back(unit);
    SetUnitNum(unitNum + 1);
}

void CArmy::CreateProvocateur() {
    CUnit* unit = provocateurFactory->CreateUnit();
    unit->SetArmy(armyName);
    units.push_back(unit);
    SetUnitNum(unitNum + 1);
}

void CArmy::CreateDestroyer() {
    CUnit* unit = destroyerFactory->CreateUnit();
    unit->SetArmy(armyName);
    units.push_back(unit);
    SetUnitNum(unitNum + 1);
}

void CArmy::SetUnitNum(const int& unitNum_) {
    unitNum = unitNum_;
}

int CArmy::GetUnitNum() const {
    return unitNum;
}

//Will be added in future
void CArmy::UpdateStatus() {

}