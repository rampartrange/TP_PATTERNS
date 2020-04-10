class Player {
public:
    Player();
    ~Player() = default;

    void SetMoney(const int&);
    void SetLevel(const int&);
    void SetXP(const int&);

    int GetMoney() const;
    int GetLevel() const;
    int GetXP() const;

private:
    int money;
    int level;
    int xp;
};