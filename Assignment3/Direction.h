#ifndef DIRECTION_H
#define DIRECTION_H

#include <string>

class Direction {
public:
    Direction(std::string direction_name);
    ~Direction();

    std::string get_direction_name();
    void set_direction_name(std::string direction_name);

private:
    std::string _direction_name;
};

#endif