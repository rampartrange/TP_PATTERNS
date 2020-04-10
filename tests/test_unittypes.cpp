#include "test_unittypes.h"

TEST(CHECK, CreateWizard) {
    CWizard wizard;

    EXPECT_EQ(wizard.GetCost(), 100);
    EXPECT_EQ(wizard.GetDamage(), 80);
    EXPECT_EQ(wizard.GetHealth(), 200);
    EXPECT_EQ(wizard.GetXPReward(), 20);
    EXPECT_EQ(wizard.GetGoldReward(), 50);
    EXPECT_EQ(wizard.GetArmy(), "None");

}

TEST(CHECK, CreateWarrior) {
    CWarrior warrior;

    EXPECT_EQ(warrior.GetCost(), 110);
    EXPECT_EQ(warrior.GetDamage(), 80);
    EXPECT_EQ(warrior.GetHealth(), 250);
    EXPECT_EQ(warrior.GetXPReward(), 20);
    EXPECT_EQ(warrior.GetGoldReward(), 50);
    EXPECT_EQ(warrior.GetArmor(), 30);
    EXPECT_EQ(warrior.GetArmy(), "None");
}

TEST(CHECK, CreateSupport) {
    CSupport support;

    EXPECT_EQ(support.GetCost(), 80);
    EXPECT_EQ(support.GetDamage(), 40);
    EXPECT_EQ(support.GetHealth(), 200);
    EXPECT_EQ(support.GetXPReward(), 15);
    EXPECT_EQ(support.GetGoldReward(), 40);
    EXPECT_EQ(support.GetHeal(), 30);
    EXPECT_EQ(support.GetArmy(), "None");

}

TEST(CHECK, CreateProvocateur) {
    CProvocateur provocateur;

    EXPECT_EQ(provocateur.GetCost(), 500);
    EXPECT_EQ(provocateur.GetDamage(), 100);
    EXPECT_EQ(provocateur.GetHealth(), 800);
    EXPECT_EQ(provocateur.GetXPReward(), 80);
    EXPECT_EQ(provocateur.GetGoldReward(), 100);
    EXPECT_EQ(provocateur.GetArmy(), "None");
}

TEST(CHECK, CreateDestroyer) {
    CDestroyer destroyer;

    EXPECT_EQ(destroyer.GetCost(), 700);
    EXPECT_EQ(destroyer.GetDamage(), 1);
    EXPECT_EQ(destroyer.GetHealth(), 1);
    EXPECT_EQ(destroyer.GetXPReward(), 100);
    EXPECT_EQ(destroyer.GetGoldReward(), 200);
    EXPECT_EQ(destroyer.GetArmy(), "None");

}
int main(int argc, char** argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}