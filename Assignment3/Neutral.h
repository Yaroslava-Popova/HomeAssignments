#ifndef NEUTRAL_H
#define NEUTRAL_H

#include "Transformer.h"

class Neutral : public Transformer {
public:
    Neutral(std::string name, Direction* direction, std::string occupation, Item item);
    ~Neutral();

    std::string get_occupation();
    void set_occupation(std::string occupation);

    int get_neutrality();
    void set_neutrality(int neutrality);

    void negotiate();

private:
    std::string _occupation;
    int _neutrality;
};

#endif