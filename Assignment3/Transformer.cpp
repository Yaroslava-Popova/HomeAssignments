#include "Transformer.h"

Transformer::Transformer(std::string name, std::string affiliation, Direction* direction, Item item)
    : _name(name), _affiliation(affiliation), _fuel(100), _direction(direction), _item(item) {}

Transformer::~Transformer() {}

std::string Transformer::get_name() {
    return _name;
}

void Transformer::set_name(std::string name) {
    _name = name;
}

std::string Transformer::get_affiliation() {
    return _affiliation;
}

void Transformer::set_affiliation(std::string affiliation) {
    _affiliation = affiliation;
}

int Transformer::get_fuel() {
    return _fuel;
}

void Transformer::set_fuel(int fuel) {
    _fuel = fuel;
}

Direction* Transformer::get_direction() {
    return _direction;
}

void Transformer::set_direction(Direction* direction) {
    _direction = direction;
}

Item Transformer::get_item() {
    return _item;
}

void Transformer::set_item(Item item) {
    _item = item;
}

void Transformer::transform() {}

void Transformer::move() {}

void Transformer::get_status() {}
