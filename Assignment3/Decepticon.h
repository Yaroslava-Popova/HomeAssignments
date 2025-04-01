#ifndef DECEPTICON_H
#define DECEPTICON_H

#include "Transformer.h"

class Decepticon : public Transformer {
public:
    Decepticon(std::string name, Direction* direction, int power_level, std::string weapon, Item item);
    ~Decepticon();

    int get_power_level();
    void set_power_level(int power_level);

    std::string get_weapon();
    void set_weapon(std::string weapon);

    int get_loyalty();
    void set_loyalty(int loyalty);

    void attack();

private:
    int _power_level;
    std::string _weapon;
    int _loyalty;
};

#endif
