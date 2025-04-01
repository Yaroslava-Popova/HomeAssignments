#ifndef AUTOBOT_H
#define AUTOBOT_H

#include "Transformer.h"

class Autobot : public Transformer {
public:
    Autobot(std::string name, Direction* direction, int power_level, std::string weapon, Item item);
    ~Autobot();

    int get_power_level();
    void set_power_level(int power_level);

    std::string get_weapon();
    void set_weapon(std::string weapon);

    int get_courage();
    void set_courage(int courage);

    void defend();

private:
    int _power_level;
    std::string _weapon;
    int _courage;
};

#endif
