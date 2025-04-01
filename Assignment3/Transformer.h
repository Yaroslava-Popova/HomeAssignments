#ifndef TRANSFORMER_H
#define TRANSFORMER_H

#include <string>
#include "Item.h"
#include "Direction.h"

class Transformer {
public:
    Transformer(std::string name, std::string affiliation, Direction* direction, Item item);
    ~Transformer();

    std::string get_name();
    void set_name(std::string name);

    std::string get_affiliation();
    void set_affiliation(std::string affiliation);

    int get_fuel();
    void set_fuel(int fuel);

    Direction* get_direction();
    void set_direction(Direction* direction);

    Item get_item();
    void set_item(Item item);

    void transform();
    void move();
    void get_status();

protected:
    std::string _name;
    std::string _affiliation;
    int _fuel;
    Direction* _direction;
    Item _item;
};

#endif
