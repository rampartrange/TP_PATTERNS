#include "armyfactory.h"
#include <vector>

class CArmy {
public:
    CArmy() = delete;
    CArmy(const std::string&);
    CArmy(const CArmy&) = delete;
    ~CArmy();

    void CreateWizard();
    void CreateWarrior();
    void CreateSupport();
    void CreateProvocateur();
    void CreateDestroyer();

    void SetUnitNum(const int&);
    int GetUnitNum() const;

    void UpdateStatus();

private:
    std::vector<CUnit*> units;
    int unitNum;
    std::string armyName;

    CWizardFactory* wizardFactory;
    CWarriorFactory* warriorFactory;
    CSupportFactory* supportFactory;
    CProvocateurFactory* provocateurFactory;
    CDestroyerFactory* destroyerFactory;
};