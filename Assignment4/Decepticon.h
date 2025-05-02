#ifndef DECEPTICON_H
#define DECEPTICON_H

#include "Transformer.h"
#include <iostream>

class Decepticon : public Transformer
{
public:
    Decepticon(std::string name, Direction* direction, int power_level, std::string weapon, Item item);
    ~Decepticon();

    int get_power_level() const;
    void set_power_level(int power_level);

    std::string get_weapon() const;
    void set_weapon(std::string weapon);

    int get_loyalty() const;
    void set_loyalty(int loyalty);

    void attack();

    friend std::ostream& operator<<(std::ostream& os, const Decepticon& decepticon);
    bool operator<(const Decepticon& other) const;
    bool operator>(const Decepticon& other) const;
    bool operator==(const Decepticon& other) const;

protected:
    int _power_level;
    std::string _weapon;
    int _loyalty;
};

#endif
