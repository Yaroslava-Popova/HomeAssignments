#ifndef ITEM_H
#define ITEM_H

#include <string>

class Item
{
public:
    Item(std::string item_name);
    ~Item();

    std::string get_item_name();
    void set_item_name(std::string item_name);

private:
    std::string _item_name;
};

#endif
