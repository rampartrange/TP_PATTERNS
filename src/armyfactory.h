#include "unittypes.h"

class CUnitFactory{
public:
    virtual ~CUnitFactory() = default;

    virtual CUnit* CreateUnit() = 0;
};

class CWizardFactory : public CUnitFactory {
public:
    ~CWizardFactory() override = default;

    CUnit* CreateUnit() override ;
};

class CWarriorFactory : public CUnitFactory {
public:
    ~CWarriorFactory() override = default;

    CUnit* CreateUnit() override;
};

class CSupportFactory : public CUnitFactory {
public:
    ~CSupportFactory() override = default;

    CUnit* CreateUnit() override;
};

class CProvocateurFactory : public CUnitFactory {
public:
    ~CProvocateurFactory() override = default;

    CUnit* CreateUnit() override;
};

class CDestroyerFactory : public CUnitFactory {
public:
    ~CDestroyerFactory() override = default;

    CUnit* CreateUnit() override;
};