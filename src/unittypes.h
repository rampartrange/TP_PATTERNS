#include <iostream>
#include <vector>
#include <string>

class CUnit {
public:
    virtual ~CUnit() = default;

    virtual void Attack(CUnit&) = 0;
    virtual void TakeDamage(const size_t&) = 0;

    virtual bool IsAlive() const;

    void SetCost(const int&);
    void SetDamage(const int&);
    void SetHealth(const int&);
    void SetXPReward(const int&);
    void SetGoldReward(const int&);
    void SetArmy(const std::string&);

    int GetCost() const;
    int GetDamage() const;
    int GetHealth() const;
    int GetXPReward() const;
    int GetGoldReward() const;
    std::string GetArmy() const;

protected:
    int cost;
    int damage;
    int health;
    int xpReward;
    int goldReward;
    std::string army;
};

class CWizard : public CUnit {
public:
    CWizard();
    ~CWizard() override = default;

    void Attack(CUnit&) override;
    void TakeDamage(const size_t&) override;

};

class CWarrior : public CUnit {
public:
    CWarrior();
    ~CWarrior() override = default;

    void Attack(CUnit&) override;
    void TakeDamage(const size_t&) override;

    void SetArmor(const int&);
    int GetArmor() const;

private:
    int armor{};
};

class CSupport : public CUnit {
public:
    CSupport();
    ~CSupport() override = default;

    void Attack(CUnit&) override;
    void TakeDamage(const size_t&) override;

    void Heal(CUnit&);

    void SetHeal(const int&);
    int GetHeal() const;

private:
    int heal{};
};

class CProvocateur : public CUnit {
public:
    CProvocateur();
    ~CProvocateur() override = default;

    void Attack(CUnit&) override;
    void TakeDamage(const size_t&) override;

};

class CDestroyer : public CUnit {
public:
    CDestroyer();
    ~CDestroyer() override = default;

    void Attack(CUnit&) override;
    void TakeDamage(const size_t&) override;

    void Destroy(CUnit&);
};

