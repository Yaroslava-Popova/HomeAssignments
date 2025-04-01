#include "Decepticon.h"

Decepticon::Decepticon(std::string name, Direction* direction, int power_level, std::string weapon, Item item)
    : Transformer(name, "Decepticon", direction, item), _power_level(power_level), _weapon(weapon), _loyalty(100) {}

Decepticon::~Decepticon() {}

int Decepticon::get_power_level()
{
    return _power_level;
}

void Decepticon::set_power_level(int power_level)
{
    _power_level = power_level;
}

std::string Decepticon::get_weapon()
{
    return _weapon;
}

void Decepticon::set_weapon(std::string weapon)
{
    _weapon = weapon;
}

int Decepticon::get_loyalty()
{
    return _loyalty;
}

void Decepticon::set_loyalty(int loyalty)
{
    _loyalty = loyalty;
}

void Decepticon::attack() {}
