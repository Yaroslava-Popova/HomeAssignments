#include "Transformer.h"

// Existing constructor
Transformer::Transformer(std::string name, std::string affiliation, Direction* direction, Item item)
    : _name(name), _affiliation(affiliation), _fuel(100), _direction(direction), _item(item) {}

// Overloaded constructor with name and affiliation
Transformer::Transformer(std::string name, std::string affiliation)
    : _name(name), _affiliation(affiliation), _fuel(100), _direction(nullptr), _item("Default Item") {}

// Default constructor
Transformer::Transformer()
    : _name("Unknown"), _affiliation("Neutral"), _fuel(100), _direction(nullptr), _item("Default Item") {}

Transformer::~Transformer() {}

std::string Transformer::get_name() const
{
    return _name;
}

void Transformer::set_name(std::string name)
{
    _name = name;
}

std::string Transformer::get_affiliation() const
{
    return _affiliation;
}

void Transformer::set_affiliation(std::string affiliation)
{
    _affiliation = affiliation;
}

int Transformer::get_fuel() const
{
    return _fuel;
}

void Transformer::set_fuel(int fuel)
{
    _fuel = fuel;
}

Direction* Transformer::get_direction() const
{
    return _direction;
}

void Transformer::set_direction(Direction* direction)
{
    _direction = direction;
}

Item Transformer::get_item() const
{
    return _item;
}

void Transformer::set_item(Item item)
{
    _item = item;
}

void Transformer::transform() {}

void Transformer::move() {}

void Transformer::get_status() {}

// Overloaded << operator
std::ostream& operator<<(std::ostream& os, const Transformer& transformer)
{
    os << "Transformer: " << transformer._name
       << ", Affiliation: " << transformer._affiliation
       << ", Fuel: " << transformer._fuel;
    return os;
}

// Overloaded comparison operators based on _fuel
bool Transformer::operator<(const Transformer& other) const
{
    return this->_fuel < other._fuel;
}

bool Transformer::operator>(const Transformer& other) const
{
    return this->_fuel > other._fuel;
}

bool Transformer::operator==(const Transformer& other) const
{
    return this->_fuel == other._fuel;
}
