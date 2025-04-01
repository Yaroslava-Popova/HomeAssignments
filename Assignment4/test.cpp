#include <gtest/gtest.h>
#include "Transformer.h"
#include "Autobot.h"
#include "Decepticon.h"
#include "Neutral.h"
#include "Item.h"
#include "Direction.h"
#include <sstream>

TEST(OperatorOverloadingTest, ComparisonOperators)
{
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

TEST(OperatorOverloadingTest, OutputOperator)
{
    Direction direction("East");
    Item item("Energon Axe");

    Transformer t("Bumblebee", "Autobot", &direction, item);
    t.set_fuel(50);

    std::stringstream ss;
    ss << t;
    EXPECT_EQ(ss.str(), "Transformer: Bumblebee, Affiliation: Autobot, Fuel: 50");
}

TEST(ConstructorOverloadingTest, PartialConstructor)
{
    Transformer t("Starscream", "Decepticon");

    EXPECT_EQ(t.get_name(), "Starscream");
    EXPECT_EQ(t.get_affiliation(), "Decepticon");
    EXPECT_EQ(t.get_fuel(), 100);
    EXPECT_EQ(t.get_item().get_item_name(), "Default Item");
    EXPECT_EQ(t.get_direction(), nullptr);
}

TEST(ConstructorOverloadingTest, DefaultConstructor)
{
    Transformer t;

    EXPECT_EQ(t.get_name(), "Unknown");
    EXPECT_EQ(t.get_affiliation(), "Neutral");
    EXPECT_EQ(t.get_fuel(), 100);
    EXPECT_EQ(t.get_item().get_item_name(), "Default Item");
    EXPECT_EQ(t.get_direction(), nullptr);
}

TEST(DerivedClassTest, InheritedOperators)
{
    Direction north("North");
    Item itemAutobot("Shield");
    Item itemDecepticon("Sword");

    Autobot autobot("Ironhide", &north, 5000, "Blaster", itemAutobot);
    Decepticon decepticon("Soundwave", &north, 4500, "Sonic Cannon", itemDecepticon);

    autobot.set_fuel(70);
    decepticon.set_fuel(65);

    EXPECT_TRUE(autobot > decepticon);
    EXPECT_FALSE(autobot < decepticon);
    EXPECT_FALSE(autobot == decepticon);

    std::stringstream ss;
    ss << autobot;
    EXPECT_EQ(ss.str(), "Transformer: Ironhide, Affiliation: Autobot, Fuel: 70");
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
