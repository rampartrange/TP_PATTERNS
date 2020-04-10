#include "player.h"

Player::Player() {
    SetMoney(300);
    SetLevel(0);
    SetXP(0);
}

void Player::SetMoney(const int& money_) {
    money = money_;
}

void Player::SetLevel(const int& level_) {
    level = level_;
}
void Player::SetXP(const int& xp_) {
    xp = xp_;
}

int Player::GetMoney() const {
    return money;
}
int Player::GetLevel() const {
    return level;
}
int Player::GetXP() const {
    return xp;
}