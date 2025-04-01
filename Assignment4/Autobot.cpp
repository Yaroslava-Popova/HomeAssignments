#include "Autobot.h"

Autobot::Autobot(std::string name, Direction* direction, int power_level, std::string weapon, Item item)
    : Transformer(name, "Autobot", direction, item), _power_level(power_level), _weapon(weapon), _courage(100) {}

Autobot::~Autobot() {}

int Autobot::get_power_level()
{
    return _power_level;
}

void Autobot::set_power_level(int power_level)
{
    _power_level = power_level;
}

std::string Autobot::get_weapon()
{
    return _weapon;
}

void Autobot::set_weapon(std::string weapon)
{
    _weapon = weapon;
}

int Autobot::get_courage()
{
    return _courage;
}

void Autobot::set_courage(int courage)
{
    _courage = courage;
}

void Autobot::defend() {}
