#include <iostream>
#include "Autobot.h"
#include "Decepticon.h"
#include "Neutral.h"
#include "Item.h"
#include "Direction.h"

int main() {
    Direction north("North");
    Direction south("South");
    Direction east("East");

    Item energonCube("Energon Cube");
    Item laserBlaster("Laser Blaster");

    Autobot optimus("Optimus Prime", &north, 9000, "Ion Blaster", energonCube);    optimus.set_item(energonCube);
    optimus.defend();

    Decepticon megatron("Megatron", &south, 9500, "Fusion Cannon", laserBlaster);
    megatron.attack();

    Item ancientScrolls("Ancient Scrolls");
    Neutral alphaTrion("Alpha Trion", &east, "Sage", ancientScrolls);
    alphaTrion.negotiate();

    return 0;
}
