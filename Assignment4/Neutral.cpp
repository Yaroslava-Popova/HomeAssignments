#include "Neutral.h"

Neutral::Neutral(std::string name, Direction* direction, std::string occupation, Item item)
    : Transformer(name, "Neutral", direction, item), _occupation(occupation), _neutrality(100) {}

Neutral::~Neutral() {}

std::string Neutral::get_occupation() const
{
    return _occupation;
}

void Neutral::set_occupation(std::string occupation)
{
    _occupation = occupation;
}

int Neutral::get_neutrality() const
{
    return _neutrality;
}

void Neutral::set_neutrality(int neutrality)
{
    _neutrality = neutrality;
}

void Neutral::negotiate() {}

std::ostream& operator<<(std::ostream& os, const Neutral& neutral) { 
    os << "Neutral: " << neutral.get_name()
       << ", Occupation: " << neutral.get_occupation();
    return os;
}
