#include "Item.h"

Item::Item(std::string item_name)
    : _item_name(item_name) {}

Item::~Item() {}

std::string Item::get_item_name()
{
    return _item_name;
}

void Item::set_item_name(std::string item_name)
{
    _item_name = item_name;
}
