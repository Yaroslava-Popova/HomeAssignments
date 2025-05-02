#ifndef NEUTRAL_H
#define NEUTRAL_H

#include "Transformer.h"
#include <iostream>

class Neutral : public Transformer
{
public:
    Neutral(std::string name, Direction* direction, std::string occupation, Item item);
    ~Neutral();

    std::string get_occupation() const;
    void set_occupation(std::string occupation);

    int get_neutrality() const;
    void set_neutrality(int neutrality);

    void negotiate();
    friend std::ostream& operator<<(std::ostream& os, const Neutral& neutral);


protected:
    std::string _occupation;
    int _neutrality;
};

#endif
