#include <gtest/gtest.h>
#include "Transformer.h"
#include "Autobot.h"
#include "Decepticon.h"
#include "Neutral.h"
#include "Item.h"
#include "Direction.h"

TEST(TransformerTest, ConstructorInitialization) {
    Direction north("North");
    Item item("Energon Cube");
    Transformer transformer("Bumblebee", "Autobot", &north, item);

    EXPECT_EQ(transformer.get_name(), "Bumblebee");
    EXPECT_EQ(transformer.get_affiliation(), "Autobot");
    EXPECT_EQ(transformer.get_direction()->get_direction_name(), "North");
    EXPECT_EQ(transformer.get_item().get_item_name(), "Energon Cube");
}

TEST(AutobotTest, ConstructorAndDefense) {
    Direction north("North");
    Item item("Energon Shield");
    Autobot autobot("Optimus Prime", &north, 9000, "Ion Blaster", item);

    EXPECT_EQ(autobot.get_power_level(), 9000);
    EXPECT_EQ(autobot.get_item().get_item_name(), "Energon Shield");
    autobot.defend();
    EXPECT_EQ(autobot.get_weapon(), "Ion Blaster");
}

TEST(DecepticonTest, ConstructorAndAttack) {
    Direction south("South");
    Item item("Dark Saber");
    Decepticon decepticon("Megatron", &south, 9500, "Fusion Cannon", item);

    EXPECT_EQ(decepticon.get_power_level(), 9500);
    EXPECT_EQ(decepticon.get_item().get_item_name(), "Dark Saber");
    decepticon.attack();
    EXPECT_EQ(decepticon.get_weapon(), "Fusion Cannon");
}

TEST(NeutralTest, ConstructorAndNegotiation) {
    Direction east("East");
    Item item("Ancient Scrolls");
    Neutral neutral("Alpha Trion", &east, "Sage", item);

    EXPECT_EQ(neutral.get_occupation(), "Sage");
    EXPECT_EQ(neutral.get_item().get_item_name(), "Ancient Scrolls");
    neutral.negotiate();
}

TEST(DirectionTest, DirectionName) {
    Direction direction("West");

    EXPECT_EQ(direction.get_direction_name(), "West");

    direction.set_direction_name("East");
    EXPECT_EQ(direction.get_direction_name(), "East");
}

TEST(ItemTest, ItemName) {
    Item item("Energon Cube");

    EXPECT_EQ(item.get_item_name(), "Energon Cube");

    item.set_item_name("Laser Blaster");
    EXPECT_EQ(item.get_item_name(), "Laser Blaster");
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
