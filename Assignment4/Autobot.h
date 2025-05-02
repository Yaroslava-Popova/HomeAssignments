#ifndef AUTOBOT_H
#define AUTOBOT_H

#include "Transformer.h"
#include <iostream>

class Autobot : public Transformer
{
public:
    Autobot(std::string name, Direction* direction, int power_level, std::string weapon, Item item);
    ~Autobot();

    int get_power_level() const;
    void set_power_level(int power_level);

    std::string get_weapon() const;
    void set_weapon(std::string weapon);

    int get_courage() const;
    void set_courage(int courage);

    void defend();

    friend std::ostream& operator<<(std::ostream& os, const Autobot& autobot);
    bool operator<(const Autobot& other) const;
    bool operator>(const Autobot& other) const;
    bool operator==(const Autobot& other) const;

protected:
    int _power_level;
    std::string _weapon;
    int _courage;
};

#endif
