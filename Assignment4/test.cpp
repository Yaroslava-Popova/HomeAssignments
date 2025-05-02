#include <gtest/gtest.h>
#include "Transformer.h"
#include "Autobot.h"
#include "Decepticon.h"
#include "Neutral.h"
#include "Item.h"
#include "Direction.h"
#include <sstream>

// Тесты для Transformer
TEST(OperatorOverloadingTest, ComparisonOperatorsTransformer) {
    Direction direction("North");
    Item item1("Energon Sword");
    Item item2("Fusion Blaster");

    Transformer t1("Optimus", "Autobot", &direction, item1);
    Transformer t2("Megatron", "Decepticon", &direction, item2);

    t1.set_fuel(100);
    t2.set_fuel(80);

    EXPECT_TRUE(t2 < t1);
    EXPECT_TRUE(t1 > t2);
    EXPECT_FALSE(t1 == t2);

    t2.set_fuel(100);
    EXPECT_TRUE(t1 == t2);
}

TEST(OperatorOverloadingTest, OutputOperatorTransformer) {
    Direction direction("East");
    Item item("Energon Axe");

    Transformer t("Bumblebee", "Autobot", &direction, item);
    t.set_fuel(50);

    std::stringstream ss;
    ss << t;
    EXPECT_EQ(ss.str(), "Transformer: Bumblebee, Affiliation: Autobot, Fuel: 50");
}

TEST(ConstructorOverloadingTest, PartialConstructor) {
    Transformer t("Starscream", "Decepticon");

    EXPECT_EQ(t.get_name(), "Starscream");
    EXPECT_EQ(t.get_affiliation(), "Decepticon");
    EXPECT_EQ(t.get_fuel(), 100);
    EXPECT_EQ(t.get_item().get_item_name(), "Default Item");
    EXPECT_EQ(t.get_direction(), nullptr);
}

TEST(ConstructorOverloadingTest, DefaultConstructor) {
    Transformer t;

    EXPECT_EQ(t.get_name(), "Unknown");
    EXPECT_EQ(t.get_affiliation(), "Neutral");
    EXPECT_EQ(t.get_fuel(), 100);
    EXPECT_EQ(t.get_item().get_item_name(), "Default Item");
    EXPECT_EQ(t.get_direction(), nullptr);
}

// Тесты для Autobot
TEST(DerivedClassTest, AutobotOperators) {
    Direction north("North");
    Item itemAutobot("Shield");

    Autobot autobot1("Ironhide", &north, 5000, "Blaster", itemAutobot);
    Autobot autobot2("Ratchet", &north, 4500, "Wrench", itemAutobot);

    // Проверка сравнения по power_level
    EXPECT_TRUE(autobot1 > autobot2);
    EXPECT_FALSE(autobot1 < autobot2);
    EXPECT_FALSE(autobot1 == autobot2);

    autobot2.set_power_level(5000);
    EXPECT_TRUE(autobot1 == autobot2);

    std::stringstream ss;
    ss << autobot1;
    EXPECT_EQ(ss.str(), "Autobot: Ironhide, Fuel: 100, Power Level: 5000, Weapon: Blaster");
}

TEST(DerivedClassTest, AutobotConstructor) {
    Direction north("North");
    Item itemAutobot("Shield");

    Autobot autobot("Ironhide", &north, 5000, "Blaster", itemAutobot);

    EXPECT_EQ(autobot.get_name(), "Ironhide");
    EXPECT_EQ(autobot.get_direction()->get_direction_name(), "North");
    EXPECT_EQ(autobot.get_power_level(), 5000);
    EXPECT_EQ(autobot.get_weapon(), "Blaster");
    EXPECT_EQ(autobot.get_item().get_item_name(), "Shield");
}

// Тесты для Decepticon
TEST(DerivedClassTest, DecepticonOperators) {
    Direction south("South");
    Item itemDecepticon("Sword");

    Decepticon decepticon1("Megatron", &south, 5500, "Fusion Cannon", itemDecepticon);
    Decepticon decepticon2("Starscream", &south, 5000, "Null Ray", itemDecepticon);

    EXPECT_TRUE(decepticon1 > decepticon2);
    EXPECT_FALSE(decepticon1 < decepticon2);
    EXPECT_FALSE(decepticon1 == decepticon2);

    decepticon2.set_power_level(5500);
    EXPECT_TRUE(decepticon1 == decepticon2);

    std::stringstream ss;
    ss << decepticon1;
    EXPECT_EQ(ss.str(), "Decepticon: Megatron, Fuel: 100, Power Level: 5500, Weapon: Fusion Cannon");
}

TEST(DerivedClassTest, DecepticonConstructor) {
    Direction south("South");
    Item itemDecepticon("Sword");

    Decepticon decepticon("Megatron", &south, 5500, "Fusion Cannon", itemDecepticon);

    EXPECT_EQ(decepticon.get_name(), "Megatron");
    EXPECT_EQ(decepticon.get_direction()->get_direction_name(), "South");
    EXPECT_EQ(decepticon.get_power_level(), 5500);
    EXPECT_EQ(decepticon.get_weapon(), "Fusion Cannon");
    EXPECT_EQ(decepticon.get_item().get_item_name(), "Sword");
}

// Тесты для Neutral
TEST(DerivedClassTest, NeutralConstructor) {
    Direction east("East");
    Item ancientScrolls("Ancient Scrolls");

Neutral neutral("Alpha Trion", &east, "Sage", ancientScrolls);

    EXPECT_EQ(neutral.get_name(), "Alpha Trion");
    EXPECT_EQ(neutral.get_direction()->get_direction_name(), "East");
    EXPECT_EQ(neutral.get_occupation(), "Sage");
    EXPECT_EQ(neutral.get_item().get_item_name(), "Ancient Scrolls");
}

TEST(DerivedClassTest, NeutralOutputOperator) {
    Direction east("East");
    Item ancientScrolls("Ancient Scrolls");

    Neutral neutral("Alpha Trion", &east, "Sage", ancientScrolls);

    std::stringstream ss;
    ss << neutral;
    EXPECT_EQ(ss.str(), "Neutral: Alpha Trion, Occupation: Sage");
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
