#include "armyfactory.h"

CUnit* CWizardFactory::CreateUnit() {
    return new CWizard;
}

CUnit* CWarriorFactory::CreateUnit() {
    return new CWarrior;
}

CUnit* CSupportFactory::CreateUnit() {
    return new CSupport;
}

CUnit* CProvocateurFactory::CreateUnit() {
    return new CProvocateur;
}

CUnit* CDestroyerFactory::CreateUnit() {
    return new CDestroyer;
}