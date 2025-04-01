#ifndef TRANSFORMER_H
#define TRANSFORMER_H

#include <string>
#include <iostream>
#include "Item.h"
#include "Direction.h"

class Transformer
{
public:
    // Constructors
    Transformer(std::string name, std::string affiliation, Direction* direction, Item item);
    Transformer(std::string name, std::string affiliation);
    Transformer();

    ~Transformer();

    // Getters and setters
    std::string get_name() const;
    void set_name(std::string name);

    std::string get_affiliation() const;
    void set_affiliation(std::string affiliation);

    int get_fuel() const;
    void set_fuel(int fuel);

    Direction* get_direction() const;
    void set_direction(Direction* direction);

    Item get_item() const;
    void set_item(Item item);

    // Methods
    void transform();
    void move();
    void get_status();

    // Operator overloading
    friend std::ostream& operator<<(std::ostream& os, const Transformer& transformer);
    bool operator<(const Transformer& other) const;
    bool operator>(const Transformer& other) const;
    bool operator==(const Transformer& other) const;

protected:
    std::string _name;
    std::string _affiliation;
    int _fuel;
    Direction* _direction;
    Item _item;
};

#endif
